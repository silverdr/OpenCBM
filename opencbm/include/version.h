#ifndef CBM4WIN_VERSION_H
#define CBM4WIN_VERSION_H

#define CBM4WIN_VERSION_MAJOR     0
#define CBM4WIN_VERSION_MINOR     1
#define CBM4WIN_VERSION_SUBMINOR  0
#define CBM4WIN_VERSION_BUGFIX    0
#define CBM4WIN_VERSION_DEVEL     51

#define CBM4WIN_BUILD_VERSION_HELP(_a) #_a
#define CBM4WIN_BUILD_VERSION_STRING_RELEASE(_a, _b, _c    ) CBM4WIN_BUILD_VERSION_HELP(_a) "." CBM4WIN_BUILD_VERSION_HELP(_b) "." CBM4WIN_BUILD_VERSION_HELP(_c) 
#define CBM4WIN_BUILD_VERSION_STRING_DEVEL(  _a, _b, _c, _d) CBM4WIN_BUILD_VERSION_STRING_RELEASE(_a, _b, _c) "." CBM4WIN_BUILD_VERSION_HELP(_d)


#if CBM4WIN_VERSION_DEVEL == 0
#define CBM4WIN_VERSION_STRING   CBM4WIN_BUILD_VERSION_STRING_RELEASE(CBM4WIN_VERSION_MAJOR, CBM4WIN_VERSION_MINOR, CBM4WIN_VERSION_SUBMINOR)
#else
#define CBM4WIN_VERSION_STRING   CBM4WIN_BUILD_VERSION_STRING_DEVEL(  CBM4WIN_VERSION_MAJOR, CBM4WIN_VERSION_MINOR, CBM4WIN_VERSION_SUBMINOR, CBM4WIN_VERSION_DEVEL)
#endif

#endif /* #ifndef CBM4WIN_VERSION_H */
