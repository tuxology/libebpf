/*
 * Copyright (C) 2015 Francois Doray <francois.doray@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; only
 * version 2.1 of the License.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 * Inspired from https://github.com/giraldeau/perfuser, by Francis Giraldeau.
 */
#ifndef LTTNG_PROFILE_MODULE_ABI_H_
#define LTTNG_PROFILE_MODULE_ABI_H_

#define LTTNGPROFILE_PROC "lttngprofile"
#define LTTNGPROFILE_PATH "/proc/" LTTNGPROFILE_PROC

enum lttngprofile_module_cmd {
  LTTNGPROFILE_MODULE_REGISTER = 0,
  LTTNGPROFILE_MODULE_UNREGISTER = 1,  
};

/*
 * Structure to send messages to the kernel module.
 */
struct lttngprofile_module_msg {
  int cmd;                 /* Command */
  long latency_threshold;  /* Latency threshold to identify long syscalls. */
} __attribute__((packed));

/*
 * Borrow some unused range of LTTng ioctl ;-).
 */
#define LTTNGPROFILE_MODULE_IOCTL  _IO(0xF6, 0x90)

#endif  // LTTNG_PROFILE_MODULE_ABI_H_
