/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * Copyright (c) 1999-2003 Apple Computer, Inc.  All Rights Reserved.
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*
 * @OSF_COPYRIGHT@
 */

extern int		rtc_config(void);
extern int		rtc_init(void);
extern kern_return_t	rtc_gettime(
				mach_timespec_t		* curtime);
extern void		rtc_gettime_interrupts_disabled(
				mach_timespec_t		* curtime);
extern kern_return_t	rtc_settime(
				mach_timespec_t		* curtime);
extern kern_return_t	rtc_getattr(
				clock_flavor_t		flavor,
				clock_attr_t		ttr,
				mach_msg_type_number_t	* count);
extern kern_return_t	rtc_setattr(
				clock_flavor_t		flavor,
				clock_attr_t		ttr,
				mach_msg_type_number_t	count);
extern void		rtc_setalrm(
				mach_timespec_t		* alarmtime);
extern void		rtclock_reset(void);
extern int		rtclock_intr(void);
extern void		calibrate_delay(void);
