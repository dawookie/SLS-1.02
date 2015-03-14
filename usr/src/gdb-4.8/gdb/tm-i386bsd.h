/* Macro definitions for i386 running under BSD Unix.
   Copyright 1986, 1987, 1989, 1991, 1992, 1993 Free Software Foundation, Inc.

This file is part of GDB.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* Override number of expected traps from sysv. */
#define START_INFERIOR_TRAPS_EXPECTED 2

/* Most definitions from sysv could be used. */
#include "tm-i386v.h"

/* Define this if the C compiler puts an underscore at the front
   of external names before giving them to the linker.  */
#define NAMES_HAVE_UNDERSCORE

/* 386BSD cannot handle the segment registers. */
#undef NUM_REGS
#define NUM_REGS 11