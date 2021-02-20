// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include <math.h>
#include <limits.h>

#define NAPI_CALL(env, call)                                      \
  do {                                                            \
    napi_status status = (call);                                  \
    if (status != napi_ok) {                                      \
      const napi_extended_error_info* error_info = NULL;          \
      napi_get_last_error_info((env), &error_info);               \
      bool is_pending;                                            \
      napi_is_exception_pending((env), &is_pending);              \
      if (!is_pending) {                                          \
        const char* message = (error_info->error_message == NULL) \
            ? "empty error message"                             \
            : error_info->error_message;                          \
        napi_throw_error((env), NULL, message);                   \
        return NULL;                                              \
      }                                                           \
    }                                                             \
  } while(0)

#define NAPI_CALL_NORET(env, call)                                \
  do {                                                            \
    napi_status status = (call);                                  \
    if (status != napi_ok) {                                      \
      const napi_extended_error_info* error_info = NULL;          \
      napi_get_last_error_info((env), &error_info);               \
      bool is_pending;                                            \
      napi_is_exception_pending((env), &is_pending);              \
      if (!is_pending) {                                          \
        const char* message = (error_info->error_message == NULL) \
            ? "empty error message"                             \
            : error_info->error_message;                          \
        napi_throw_error((env), NULL, message);                   \
        return;                                                   \
      }                                                           \
    }                                                             \
  } while(0)

static int napi_is_int32(napi_env env, napi_value value, int* integer) {
    double temp = 0;
    if (
        // We get the value as a double so we can check for NaN, Infinity and float:
        // https://github.com/nodejs/node/issues/26323
        napi_get_value_double(env, value, &temp) != napi_ok ||
        // Reject NaN:
        isnan(temp) ||
        // Reject Infinity and avoid undefined behavior when casting double to int:
        // https://groups.google.com/forum/#!topic/comp.lang.c/rhPzd4bgKJk
        temp < INT_MIN ||
        temp > INT_MAX ||
        // Reject float by casting double to int:
        (double) ((int) temp) != temp
    ) {
        //napi_throw_error(env, NULL, "argument must be an integer");
        return 0;
    }
    if (integer)
        *integer = (int) temp;
    return 1;
}

static int napi_is_uint32(napi_env env, napi_value value, int* integer) {
    double temp = 0;
    if (
        // We get the value as a double so we can check for NaN, Infinity and float:
        // https://github.com/nodejs/node/issues/26323
        napi_get_value_double(env, value, &temp) != napi_ok ||
        // Reject NaN:
        isnan(temp) ||
        // Reject Infinity and avoid undefined behavior when casting double to int:
        // https://groups.google.com/forum/#!topic/comp.lang.c/rhPzd4bgKJk
        temp < 0 ||
        temp > ULONG_MAX ||
        // Reject float by casting double to int:
        (double) ((unsigned long) temp) != temp
    ) {
        //napi_throw_error(env, NULL, "argument must be an integer");
        return 0;
    }
    if (integer)
        *integer = (int) temp;
    return 1;
}

#define NAPI_IS_BOOL(valuetype) (valuetype == napi_boolean)
#define NAPI_IS_NULL(valuetype) (valuetype == napi_null)
#define NAPI_IS_NUMBER(valuetype) (valuetype == napi_number)
#define NAPI_IS_BIGINT(valuetype) (valuetype == napi_bigint)
#define NAPI_IS_INT32(valuetype, value) (NAPI_IS_NUMBER(valuetype) && napi_is_int32(env, value, nullptr))
#define NAPI_IS_UINT32(valuetype, value) (NAPI_IS_NUMBER(valuetype) && napi_is_uint32(env, value, nullptr))
#define NAPI_IS_INT64(valuetype, value) (NAPI_IS_BIGINT(valuetype))
#define NAPI_IS_UINT64(valuetype, value) (NAPI_IS_BIGINT(valuetype))
#define NAPI_IS_ARRAY(valuetype) (valuetype == napi_object)
#define NAPI_IS_OBJECT(valuetype) (valuetype == napi_object)

