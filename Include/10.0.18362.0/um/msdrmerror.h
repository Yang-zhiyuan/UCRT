#pragma once
/*
//-----------------------------------------------------------------------------
//
// File: msdrmerror.h
//
// Copyright (C) 2001-2004 Microsoft Corporation.  All Rights Reserved.
//
//
//-----------------------------------------------------------------------------
*/

#ifndef __MSDRMERROR_H_
#define __MSDRMERROR_H_

#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define GetLastHR()                 HRESULT_FROM_WIN32(::GetLastError())

#define MSDRM_MAKE_ERROR(z,e)       MAKE_HRESULT(1,FACILITY_ITF,((z)|(e)))
#define MSDRM_MAKE_WARNING(z,w)     MAKE_HRESULT(0,FACILITY_ITF,((z)|(w)))


// Microsoft RM client error codes

#ifndef E_DRM_INSUFFICIENT_BUFFER
  #define E_DRM_INSUFFICIENT_BUFFER __HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER)
#endif

////////

#define MSDRM_CLIENT_ZONE  0xCF00 // zone for client API errors
#define MSDRM_POLICY_ZONE  0x9300

// licenses /////////////////////////////////////////////////////////////////
//      E_DRM_INVALID_LICENSE                      0x8004CF00
#define E_DRM_INVALID_LICENSE                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x00)

//      E_DRM_INFO_NOT_IN_LICENSE                  0x8004CF01
#define E_DRM_INFO_NOT_IN_LICENSE                  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x01)

//      E_DRM_INVALID_LICENSE_SIGNATURE            0x8004CF02
#define E_DRM_INVALID_LICENSE_SIGNATURE            MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x02)

//      E_DRM_ENCRYPTION_NOT_PERMITTED             0x8004CF04
#define E_DRM_ENCRYPTION_NOT_PERMITTED             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x04)

//      E_DRM_RIGHT_NOT_GRANTED                    0x8004CF05
#define E_DRM_RIGHT_NOT_GRANTED                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x05)

//      E_DRM_INVALID_VERSION                      0x8004CF06
#define E_DRM_INVALID_VERSION                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x06)

//      E_DRM_INVALID_ENCODING_TYPE                0x8004CF07
#define E_DRM_INVALID_ENCODING_TYPE                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x07)

//      E_DRM_INVALID_NUMERICAL_VALUE              0x8004CF08
#define E_DRM_INVALID_NUMERICAL_VALUE              MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x08)

//      E_DRM_INVALID_ALGORITHM_TYPE               0x8004CF09
#define E_DRM_INVALID_ALGORITHM_TYPE               MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x09)


// environments /////////////////////////////////////////////////////////////

//      E_DRM_ENV_NOT_LOADED                       0x8004CF0A
#define E_DRM_ENV_NOT_LOADED                       MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x0A)

//      E_DRM_ENV_CANNOT_LOAD                      0x8004CF0B
#define E_DRM_ENV_CANNOT_LOAD                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x0B)

//      E_DRM_TOO_MANY_LOADED_ENVIRONMENTS         0x8004CF0C
#define E_DRM_TOO_MANY_LOADED_ENVIRONMENTS         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x0C)

//      E_DRM_INCOMPATIBLE_OBJECTS                 0x8004CF0E
#define E_DRM_INCOMPATIBLE_OBJECTS                 MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x0E)


// libraries /////////////////////////////////////////////////////////////

//      E_DRM_LIB_FAIL                             0x8004CF0F
#define E_DRM_LIB_FAIL                             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x0F)

// miscellany /////////////////////////////////////////////////////////////

//      E_DRM_ENABLING_PRINCIPAL_FAILURE          0x8004CF10
#define E_DRM_ENABLING_PRINCIPAL_FAILURE          MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x10)

//      E_DRM_INFO_NOT_PRESENT                    0x8004CF11
#define E_DRM_INFO_NOT_PRESENT                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x11)

//      E_DRM_BAD_GET_INFO_QUERY                  0x8004CF12
#define E_DRM_BAD_GET_INFO_QUERY                  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x12)

//      E_DRM_KEY_TYPE_UNSUPPORTED                0x8004CF13
#define E_DRM_KEY_TYPE_UNSUPPORTED                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x13)

//      E_DRM_CRYPTO_OPERATION_UNSUPPORTED        0x8004CF14
#define E_DRM_CRYPTO_OPERATION_UNSUPPORTED        MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x14)

//      E_DRM_CLOCK_ROLL_BACK_DETECTED            0x8004CF15
#define E_DRM_CLOCK_ROLL_BACK_DETECTED            MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x15)

//      E_DRM_QUERY_REPORTS_NO_RESULTS            0x8004CF16
#define E_DRM_QUERY_REPORTS_NO_RESULTS            MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x16)

//      E_DRM_UNEXPECTED_EXCEPTION                0x8004CF17
#define E_DRM_UNEXPECTED_EXCEPTION                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x17)

// binding errors ///////////////////////////////////////////////////////////

//      E_DRM_BIND_VALIDITY_TIME_VIOLATED         0x8004CF18
#define E_DRM_BIND_VALIDITY_TIME_VIOLATED         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x18)

//      E_DRM_BROKEN_CERT_CHAIN                   0x8004CF19
#define E_DRM_BROKEN_CERT_CHAIN                   MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x19)

//      E_DRM_BIND_POLICY_VIOLATION               0x8004CF1B
#define E_DRM_BIND_POLICY_VIOLATION               MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x1B)

//      E_DRM_MANIFEST_POLICY_VIOLATION           0x8004930C
#define E_DRM_MANIFEST_POLICY_VIOLATION           MSDRM_MAKE_ERROR(MSDRM_POLICY_ZONE,0x000C)

//      E_DRM_BIND_REVOKED_LICENSE                0x8004CF1C
#define E_DRM_BIND_REVOKED_LICENSE                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x1C)

//      E_DRM_BIND_REVOKED_ISSUER                 0x8004CF1D
#define E_DRM_BIND_REVOKED_ISSUER                 MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x1D)

//      E_DRM_BIND_REVOKED_PRINCIPAL              0x8004CF1E
#define E_DRM_BIND_REVOKED_PRINCIPAL              MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x1E)

//      E_DRM_BIND_REVOKED_RESOURCE               0x8004CF1F
#define E_DRM_BIND_REVOKED_RESOURCE               MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x1F)

//      E_DRM_BIND_REVOKED_MODULE                 0x8004CF20
#define E_DRM_BIND_REVOKED_MODULE                 MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x20)

//      E_DRM_BIND_CONTENT_NOT_IN_EUL             0x8004CF21
#define E_DRM_BIND_CONTENT_NOT_IN_EUL             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x21)

//      E_DRM_BIND_ACCESS_PRINCIPAL_NOT_ENABLING  0x8004CF22
#define E_DRM_BIND_ACCESS_PRINCIPAL_NOT_ENABLING  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x22)

//      E_DRM_BIND_ACCESS_UNSATISFIED             0x8004CF23
#define E_DRM_BIND_ACCESS_UNSATISFIED             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x23)

//      E_DRM_BIND_INDICATED_PRINCIPAL_MISSING    0x8004CF24
#define E_DRM_BIND_INDICATED_PRINCIPAL_MISSING    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x24)

//      E_DRM_BIND_MACHINE_NOT_FOUND_IN_GROUP_IDENTITY 0x8004CF25
#define E_DRM_BIND_MACHINE_NOT_FOUND_IN_GROUP_IDENTITY MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x25)

//      E_DRM_LIB_UNSUPPORTED_PLUGIN              0x8004CF26
#define E_DRM_LIB_UNSUPPORTED_PLUGIN              MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x26)

//      E_DRM_BIND_REVOCATION_LIST_STALE          0x8004CF27
#define E_DRM_BIND_REVOCATION_LIST_STALE          MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x27)

//      E_DRM_BIND_NO_APPLICABLE_REVOCATION_LIST  0x8004CF28
#define E_DRM_BIND_NO_APPLICABLE_REVOCATION_LIST  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x28)

//      E_DRM_INVALID_HANDLE                      0x8004CF2C
#define E_DRM_INVALID_HANDLE                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x2C)

//      E_DRM_BIND_INTERVALTIME_VIOLATED          0x8004CF2F
#define E_DRM_BIND_INTERVALTIME_VIOLATED          MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x2F)

//      E_DRM_BIND_NO_SATISFIED_RIGHTS_GROUP      0x8004CF30
#define E_DRM_BIND_NO_SATISFIED_RIGHTS_GROUP      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x30)

//      E_DRM_BIND_SPECIFIED_WORK_MISSING         0x8004CF31
#define E_DRM_BIND_SPECIFIED_WORK_MISSING         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x31)


// client SDK error codes

//      E_DRM_NO_MORE_DATA                        0x8004CF33
#define E_DRM_NO_MORE_DATA                        MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x33)

//      E_DRM_LICENSEACQUISITIONFAILED            0x8004CF34
#define E_DRM_LICENSEACQUISITIONFAILED            MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x34)

//      E_DRM_ID_MISMATCH                         0x8004CF35
#define E_DRM_ID_MISMATCH                         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x35)

//      E_DRM_TOO_MANY_CERTS                      0x8004CF36
#define E_DRM_TOO_MANY_CERTS                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x36)

//      E_DRM_NO_DPURL_FOUND                      0x8004CF37
#define E_DRM_NO_DPURL_FOUND                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x37)

//      E_DRM_ALREADY_IN_PROGRESS                 0x8004CF38
#define E_DRM_ALREADY_IN_PROGRESS                 MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x38)

//      E_DRM_GROUPID_NOT_SET                     0x8004CF39
#define E_DRM_GROUPID_NOT_SET                     MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x39)

//      E_DRM_RECORD_NOT_FOUND                    0x8004CF3A
#define E_DRM_RECORD_NOT_FOUND                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x3A)


//      E_DRM_NO_CONNECT                          0x8004CF3B
#define E_DRM_NO_CONNECT                          MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x3B)

//      E_DRM_NO_LICENSE                          0x8004CF3C
#define E_DRM_NO_LICENSE                          MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x3C)

//      E_DRM_NEEDS_MACHINE_ACTIVATION            0x8004CF3D
#define E_DRM_NEEDS_MACHINE_ACTIVATION            MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x3D)

//      E_DRM_NEEDS_GROUPIDENTITY_ACTIVATION      0x8004CF3E
#define E_DRM_NEEDS_GROUPIDENTITY_ACTIVATION      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x3E)

//      E_DRM_ACTIVATIONFAILED                    0x8004CF40
#define E_DRM_ACTIVATIONFAILED                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x40)

//      E_DRM_ABORTED                             0x8004CF41
#define E_DRM_ABORTED                             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x41)

//      E_DRM_OUT_OF_QUOTA                        0x8004CF42
#define E_DRM_OUT_OF_QUOTA                        MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x42)

//      E_DRM_AUTHENTICATION_FAILED               0x8004CF43
#define E_DRM_AUTHENTICATION_FAILED               MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x43)

//      E_DRM_SERVER_ERROR                        0x8004CF44
#define E_DRM_SERVER_ERROR                        MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x44)

//      E_DRM_INSTALLATION_FAILED                 0x8004CF45
#define E_DRM_INSTALLATION_FAILED                 MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x45)

//      E_DRM_HID_CORRUPTED                       0x8004CF46
#define E_DRM_HID_CORRUPTED                       MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x46)

//      E_DRM_INVALID_SERVER_RESPONSE             0x8004CF47
#define E_DRM_INVALID_SERVER_RESPONSE             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x47)

//      E_DRM_SERVICE_NOT_FOUND                   0x8004CF48
#define E_DRM_SERVICE_NOT_FOUND                   MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x48)

//      E_DRM_USE_DEFAULT                         0x8004CF49
#define E_DRM_USE_DEFAULT                         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x49)

//      E_DRM_SERVER_NOT_FOUND                    0x8004CF4A
#define E_DRM_SERVER_NOT_FOUND                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x4A)

//      E_DRM_INVALID_EMAIL                       0x8004CF4B
#define E_DRM_INVALID_EMAIL                       MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x4B)

//      E_DRM_VALIDITYTIME_VIOLATION              0x8004CF4C
#define E_DRM_VALIDITYTIME_VIOLATION              MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x4C)

//      E_DRM_OUTDATED_MODULE                     0x8004CF4D
#define E_DRM_OUTDATED_MODULE                     MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x4D)

//      E_DRM_SERVICE_MOVED                       0x8004CF5B
#define E_DRM_SERVICE_MOVED                       MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x5B)

//      E_DRM_SERVICE_GONE                        0x8004CF5C
#define E_DRM_SERVICE_GONE                        MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x5C)

//      E_DRM_AD_ENTRY_NOT_FOUND                  0x8004CF5D
#define E_DRM_AD_ENTRY_NOT_FOUND                  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x5D)

//      E_DRM_NOT_A_CHAIN                         0x8004CF5E
#define E_DRM_NOT_A_CHAIN                         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x5E)

//      E_DRM_REQUEST_DENIED                      0x8004CF5F
#define E_DRM_REQUEST_DENIED                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x5F)


// Publishing SDK Error Codes

//      E_DRM_NOT_SET                             0x8004CF4E
#define E_DRM_NOT_SET                             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x4E)

//      E_DRM_METADATA_NOT_SET                    0x8004CF4F
#define E_DRM_METADATA_NOT_SET                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x4F)

//      E_DRM_REVOCATIONINFO_NOT_SET              0x8004CF50
#define E_DRM_REVOCATIONINFO_NOT_SET              MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x50)

//      E_DRM_INVALID_TIMEINFO                    0x8004CF51
#define E_DRM_INVALID_TIMEINFO                    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x51)

//      E_DRM_RIGHT_NOT_SET                       0x8004CF52
#define E_DRM_RIGHT_NOT_SET                       MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x52)


// NTLM Credential checking

//      E_DRM_BIND_NTLM_FAIL                      0x8004CF53
#define E_DRM_BIND_NTLM_FAIL                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x53)

//      E_DRM_INVALID_ISSUANCELICENSE_TEMPLATE    0x8004CF54
#define E_DRM_INVALID_ISSUANCELICENSE_TEMPLATE    MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x54)

//      E_DRM_INVALID_KEY_LENGTH                  0x8004CF55
#define E_DRM_INVALID_KEY_LENGTH                  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x55)

//      E_DRM_EXPIRED_OFFICIAL_ISSUANCELICENSE_TEMPLATE     0x8004CF57
#define E_DRM_EXPIRED_OFFICIAL_ISSUANCELICENSE_TEMPLATE     MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x57)

//      E_DRM_INVALID_CLIENT_LICENSOR_CERTIFICATE           0x8004CF58
#define E_DRM_INVALID_CLIENT_LICENSOR_CERTIFICATE           MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x58)


//      E_DRM_HID_INVALID                         0x8004CF59
#define E_DRM_HID_INVALID                         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x59)

//      E_DRM_EMAIL_NOT_VERIFIED                  0x8004CF5A
#define E_DRM_EMAIL_NOT_VERIFIED                  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x5A)

//      E_DRM_DEBUGGER_DETECTED                   0x8004CF60
#define E_DRM_DEBUGGER_DETECTED                   MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x60)


//    License Acquisition Success Codes


//      S_DRM_REQUEST_PREPARED                    0x0004CF00
#define S_DRM_REQUEST_PREPARED                    MSDRM_MAKE_WARNING(MSDRM_CLIENT_ZONE,0x00)

//Activation Success Codes

//      S_DRM_ALREADY_ACTIVATED                   0x0004CF01
#define S_DRM_ALREADY_ACTIVATED                   MSDRM_MAKE_WARNING(MSDRM_CLIENT_ZONE,0x01)

// Callback Success Codes

//      S_DRM_CONNECTING                          0x0004CF02
#define S_DRM_CONNECTING                          MSDRM_MAKE_WARNING(MSDRM_CLIENT_ZONE,0x02)

//      S_DRM_CONNECTED                           0x0004CF03
#define S_DRM_CONNECTED                           MSDRM_MAKE_WARNING(MSDRM_CLIENT_ZONE,0x03)

//      S_DRM_COMPLETED                           0x0004CF04
#define S_DRM_COMPLETED                           MSDRM_MAKE_WARNING(MSDRM_CLIENT_ZONE,0x04)

//      S_DRM_INPROGRESS                          0x0004CF05
#define S_DRM_INPROGRESS                          MSDRM_MAKE_WARNING(MSDRM_CLIENT_ZONE,0x05)


//      E_DRM_INVALID_LOCKBOX_TYPE                0x8004CF70
#define E_DRM_INVALID_LOCKBOX_TYPE                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x70)

//      E_DRM_INVALID_LOCKBOX_PATH                0x8004CF71
#define E_DRM_INVALID_LOCKBOX_PATH                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x71)

//      E_DRM_INVALID_REGISTRY_PATH               0x8004CF72
#define E_DRM_INVALID_REGISTRY_PATH               MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x72)

//      E_DRM_NO_AES_PROVIDER                     0x8004CF73
#define E_DRM_NO_AES_PROVIDER                     MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x73)

//      E_DRM_GLOBAL_OPTION_ALREADY_SET           0x8004CF74
#define E_DRM_GLOBAL_OPTION_ALREADY_SET           MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x74)

//      E_DRM_OWNER_LICENSE_NOT_FOUND             0x8004CF75
#define E_DRM_OWNER_LICENSE_NOT_FOUND             MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x75)

//      E_DRM_INVALID_WINDOW                      0x8004CF76
#define E_DRM_INVALID_WINDOW                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x76)

//      E_DRM_WINDOW_REGISTRATION_FAILED          0x8004CF77
#define E_DRM_WINDOW_REGISTRATION_FAILED          MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x77)

//      E_DRM_SAFEMODE_OS_DETECTED                0x8004CF78
#define E_DRM_SAFEMODE_OS_DETECTED                MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x78)

//      E_DRM_PLATFORM_POLICY_VIOLATION           0x8004CF79
#define E_DRM_PLATFORM_POLICY_VIOLATION           MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x79)

//      E_DRM_TEMPLATE_ACQUISITION_FAILED         0x8004CF80
#define E_DRM_TEMPLATE_ACQUISITION_FAILED         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x80)

//      E_DRM_ISSUANCELICENSE_LENGTH_LIMIT_EXCEEDED         0x8004CF81
#define E_DRM_ISSUANCELICENSE_LENGTH_LIMIT_EXCEEDED         MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x81)


//    FCI File API error Codes

//      E_DRM_FILE_NOT_SUPPORTED                  0x8004CF82
#define E_DRM_FILE_NOT_SUPPORTED                  MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x82)

//      E_DRM_CORRUPTED_FILE                      0x8004CF83
#define E_DRM_CORRUPTED_FILE                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x83)

//      E_DRM_PROTECTOR_BAD_INSTALL               0x8004CF84
#define E_DRM_PROTECTOR_BAD_INSTALL               MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x84)

//      E_DRM_PLATFORM_CALLBACK_FAILED            0x8004CF85
#define E_DRM_PLATFORM_CALLBACK_FAILED            MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x85)

//      E_DRM_NOT_FILE_OWNER                      0x8004CF86
#define E_DRM_NOT_FILE_OWNER                      MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x86)

//      E_DRM_FILE_ALREADY_PROTECTED              0x8004CF87
#define E_DRM_FILE_ALREADY_PROTECTED              MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x87)

//      E_DRM_FILE_ALREADY_UNPROTECTED            0x8004CF88
#define E_DRM_FILE_ALREADY_UNPROTECTED            MSDRM_MAKE_ERROR(MSDRM_CLIENT_ZONE,0x88)


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // #ifndef __MSDRMERROR_H_
