// -*- C++ -*-
//*************************************************************************
//
// Copyright 2010-2011 by Wilson Snyder. This program is free software; you can
// redistribute it and/or modify it under the terms of either the GNU
// Lesser General Public License Version 3 or the Perl Artistic License.
// Version 2.0.
//
// Verilator is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
//*************************************************************************

#include <cstdio>
#include "svdpi.h"

//======================================================================

#if defined(VERILATOR)
# include "Vt_flag_ldflags__Dpi.h"
#else
# error "Unknown simulator for DPI test"
#endif

//======================================================================

#ifndef CFLAGS_FROM_CMDLINE
# error "CFLAGS_FROM_CMDLINE not set - not passed down?"
#endif
#ifndef CFLAGS2_FROM_CMDLINE
# error "CFLAGS2_FROM_CMDLINE not set - not passed down?"
#endif

void dpii_c_library() {}
