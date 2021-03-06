/* packet-dtls.h
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __PACKET_DTLS_H__
#define __PACKET_DTLS_H__

#include "ws_symbol_export.h"
#include <epan/packet.h>

WS_DLL_PUBLIC void dtls_dissector_add(guint port, dissector_handle_t handle);
WS_DLL_PUBLIC void dtls_dissector_delete(guint port, dissector_handle_t handle);


/* Shared with packet-ssl-utils.c */

gint
dtls_dissect_hnd_hello_ext_use_srtp(tvbuff_t *tvb, proto_tree *tree,
                                    guint32 offset, guint32 ext_len);

#endif  /* __PACKET_DTLS_H__ */
