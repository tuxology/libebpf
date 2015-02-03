#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER retlif_tp

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./retlif_tp.h"

#if !defined(_TRACEPOINT_RETLIF_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _TRACEPOINT_RETLIF_TP_H

#ifdef __cplusplus
extern "C" {
#endif

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(retlif_tp, tptest,
    TP_ARGS(),
    TP_FIELDS()
)

#endif /* _TRACEPOINT_RETLIF_TP_H */

/* This part must be outside ifdef protection */
#include <lttng/tracepoint-event.h>

#ifdef __cplusplus
}
#endif
