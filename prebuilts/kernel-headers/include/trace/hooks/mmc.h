/* SPDX-License-Identifier: GPL-2.0 */
/*
 * NOTE: This file has been modified by Sony Corporation.
 * Modifications are Copyright 2023 Sony Corporation,
 * and licensed under the license of the file.
 */
#undef TRACE_SYSTEM
#define TRACE_SYSTEM mmc
#undef TRACE_INCLUDE_PATH
#define TRACE_INCLUDE_PATH trace/hooks
#if !defined(_TRACE_HOOK_MMC_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_HOOK_MMC_H
#include <trace/hooks/vendor_hooks.h>
struct mmc_host;
struct mmc_card;

/*
 * Following tracepoints are not exported in tracefs and provide a
 * mechanism for vendor modules to hook and extend functionality
 */
DECLARE_HOOK(android_vh_mmc_blk_mq_rw_recovery,
	TP_PROTO(struct mmc_card *card),
	TP_ARGS(card));

DECLARE_HOOK(android_vh_sd_update_bus_speed_mode,
	TP_PROTO(struct mmc_card *card),
	TP_ARGS(card));

DECLARE_RESTRICTED_HOOK(android_rvh_mmc_suspend,
	TP_PROTO(struct mmc_host *host),
	TP_ARGS(host), 1);

DECLARE_RESTRICTED_HOOK(android_rvh_mmc_resume,
	TP_PROTO(struct mmc_host *host, bool *resume_success),
	TP_ARGS(host, resume_success), 1);

#endif /* _TRACE_HOOK_MMC_H */
/* This part must be outside protection */
#include <trace/define_trace.h>
