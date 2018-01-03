
#ifndef MSDFGEN_SHARED_H
#define MSDFGEN_SHARED_H

#ifdef MSDFGEN_EXPORT
#define MSDFGEN_SHARED __declspec(dllexport)
#else
#ifdef MSDFGEN_IMPORT
#define MSDFGEN_SHARED __declspec(dllimport)
#else
#define MSDFGEN_SHARED
#endif
#endif

#endif