/* -*- C -*- */
/*
 * COPYRIGHT 2015 XYRATEX TECHNOLOGY LIMITED
 *
 * THIS DRAWING/DOCUMENT, ITS SPECIFICATIONS, AND THE DATA CONTAINED
 * HEREIN, ARE THE EXCLUSIVE PROPERTY OF XYRATEX TECHNOLOGY
 * LIMITED, ISSUED IN STRICT CONFIDENCE AND SHALL NOT, WITHOUT
 * THE PRIOR WRITTEN PERMISSION OF XYRATEX TECHNOLOGY LIMITED,
 * BE REPRODUCED, COPIED, OR DISCLOSED TO A THIRD PARTY, OR
 * USED FOR ANY PURPOSE WHATSOEVER, OR STORED IN A RETRIEVAL SYSTEM
 * EXCEPT AS ALLOWED BY THE TERMS OF XYRATEX LICENSES AND AGREEMENTS.
 *
 * YOU SHOULD HAVE RECEIVED A COPY OF XYRATEX'S LICENSE ALONG WITH
 * THIS RELEASE. IF NOT PLEASE CONTACT A XYRATEX REPRESENTATIVE
 * http://www.xyratex.com/contact
 *
 * Original author: Nikita Danilov <nikita.danilov@seagate.com>
 * Original creation date: 1-Apr-2015
 */

#pragma once

#ifndef __MERO_STOB_ADDB2_H__
#define __MERO_STOB_ADDB2_H__

/**
 * @defgroup stob
 *
 * @{
 */

#include "addb2/identifier.h"
#include "xcode/xcode.h"          /* M0_XCA_ENUM */

enum m0_avi_stob_io_labels {
	M0_AVI_STOB_IO_LAUNCH = M0_AVI_STOB_RANGE_START + 1,
	M0_AVI_STOB_IO_PREPARE,
	M0_AVI_STOB_IO_END,
	M0_AVI_STOB_IOQ,
	M0_AVI_STOB_IOQ_TICK,
	M0_AVI_STOB_IOQ_INFLIGHT,
	M0_AVI_STOB_IOQ_QUEUED,
	M0_AVI_STOB_IOQ_GOT,
	M0_AVI_STOB_IO_REQ,

        M0_AVI_STOB_IO_ATTR_UVEC_NR,
        M0_AVI_STOB_IO_ATTR_UVEC_COUNT,
        M0_AVI_STOB_IO_ATTR_UVEC_BYTES,
} M0_XCA_ENUM;

enum m0_addb2_stio_req_labels {
	M0_AVI_IO_LAUNCH,
	M0_AVI_AD_PREPARE,
	M0_AVI_AD_WR_PREPARE,
	M0_AVI_AD_BALLOC_START,
	M0_AVI_AD_BALLOC_END,
	M0_AVI_AD_LAUNCH,
	M0_AVI_AD_SORT_START,
	M0_AVI_AD_SORT_END,
	M0_AVI_AD_ENDIO,
	M0_AVI_LIO_LAUNCH,
	M0_AVI_LIO_ENDIO,
} M0_XCA_ENUM;

/** @} end of stob group */
#endif /* __MERO_STOB_ADDB2_H__ */

/*
 *  Local variables:
 *  c-indentation-style: "K&R"
 *  c-basic-offset: 8
 *  tab-width: 8
 *  fill-column: 80
 *  scroll-step: 1
 *  End:
 */
/*
 * vim: tabstop=8 shiftwidth=8 noexpandtab textwidth=80 nowrap
 */
