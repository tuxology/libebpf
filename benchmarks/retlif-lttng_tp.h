#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER retlif_tp

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./retlif-lttng_tp.h"

#if !defined(_TRACEPOINT_RETLIF_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _TRACEPOINT_RETLIF_TP_H

#ifdef __cplusplus
extern "C" {
#endif

#include <lttng/tracepoint.h>

/*
TRACEPOINT_EVENT(retlif_tp, tptest,
    TP_ARGS(),
    TP_FIELDS()
)
*/

TRACEPOINT_EVENT(retlif_tp, tpfilt,
    TP_ARGS(

            char*, str0,

            char*, str1,

            char*, str2,

            char*, str3,

            char*, str4,

            char*, str5,

            char*, str6,

            char*, str7,

            char*, str8,

            int, life
    ),
    TP_FIELDS(

        ctf_string(var0, str0)

        ctf_string(var1, str1)

        ctf_string(var2, str2)

        ctf_string(var3, str3)

        ctf_string(var4, str4)

        ctf_string(var5, str5)

        ctf_string(var6, str6)

        ctf_string(var7, str7)

        ctf_string(var8, str8)

        ctf_integer(int, lyf, life)
    )
)

#endif /* _TRACEPOINT_RETLIF_TP_H */

/* This part must be outside ifdef protection */
#include <lttng/tracepoint-event.h>

#ifdef __cplusplus
}
#endif