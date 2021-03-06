// SPDX-License-Identifier: GPL-2.0
#ifndef __NITROX_DEBUGFS_H
#define __NITROX_DEBUGFS_H

#include "nitrox_dev.h"

#ifdef CONFIG_DEBUG_FS
int nitrox_debugfs_init(struct nitrox_device *ndev);
void nitrox_debugfs_exit(struct nitrox_device *ndev);
#else
static inline int nitrox_debugfs_init(struct nitrox_device *ndev)
{
	return 0;
}

static inline void nitrox_debugfs_exit(struct nitrox_device *ndev)
{
}
#endif /* !CONFIG_DEBUG_FS */

#endif /* __NITROX_DEBUGFS_H */
