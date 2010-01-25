/*
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version
 *  2 of the License, or (at your option) any later version.
 *
 *  Copyright 2004-2009 Spiro Trikaliotis
 */

/*! **************************************************************
** \file include/version.h \n
** \author Spiro Trikaliotis \n
** \version $Id: version.h,v 1.183 2010-01-25 19:55:37 strik Exp $ \n
** \n
** \brief Defining OpenCBM version
**
****************************************************************/

#ifndef OPENCBM_VERSION_H
#define OPENCBM_VERSION_H

#define OPENCBM_VERSION_MAJOR       0
#define OPENCBM_VERSION_MINOR       4
#define OPENCBM_VERSION_SUBMINOR    0
#define OPENCBM_VERSION_PATCHLEVEL  0
#define OPENCBM_VERSION_DEVEL       81

#define OPENCBM_BUILD_VERSION_HELP(          _a        ) #_a
#define OPENCBM_BUILD_VERSION_STRING_PART(   _a        ) OPENCBM_BUILD_VERSION_HELP(_a)
#define OPENCBM_BUILD_VERSION_STRING_RELEASE(_a, _b, _c) OPENCBM_BUILD_VERSION_HELP(_a) "." OPENCBM_BUILD_VERSION_HELP(_b) "." OPENCBM_BUILD_VERSION_HELP(_c)

#define OPENCBM_BUILD_VERSION_STRING_CVS "$Id: version.h,v 1.183 2010-01-25 19:55:37 strik Exp $"


#if OPENCBM_VERSION_DEVEL == 0
#define OPENCBM_VERSION_STRING   OPENCBM_BUILD_VERSION_STRING_RELEASE(OPENCBM_VERSION_MAJOR, OPENCBM_VERSION_MINOR, OPENCBM_VERSION_SUBMINOR)
#elif OPENCBM_VERSION_PATCHLEVEL == 0
#define OPENCBM_VERSION_STRING   OPENCBM_BUILD_VERSION_STRING_RELEASE(OPENCBM_VERSION_MAJOR, OPENCBM_VERSION_MINOR, OPENCBM_VERSION_SUBMINOR) "." OPENCBM_BUILD_VERSION_STRING_PART( OPENCBM_VERSION_DEVEL)
#else
#define OPENCBM_VERSION_STRING   OPENCBM_BUILD_VERSION_STRING_RELEASE(OPENCBM_VERSION_MAJOR, OPENCBM_VERSION_MINOR, OPENCBM_VERSION_SUBMINOR) "." OPENCBM_BUILD_VERSION_STRING_PART( OPENCBM_VERSION_DEVEL) "pl" OPENCBM_BUILD_VERSION_STRING_PART(OPENCBM_VERSION_PATCHLEVEL)
#endif

// for mnib36 compilation (old names):
//
#define CBM4WIN_VERSION_MAJOR    OPENCBM_VERSION_MAJOR
#define CBM4WIN_VERSION_MINOR    OPENCBM_VERSION_MINOR
#define CBM4WIN_VERSION_SUBMINOR OPENCBM_VERSION_SUBMINOR
#define CBM4WIN_VERSION_DEVEL    OPENCBM_VERSION_DEVEL
#define CBM4WIN_VERSION_STRING   OPENCBM_VERSION_STRING

#endif /* #ifndef OPENCBM_VERSION_H */
