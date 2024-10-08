/*
 * typedef.h
 *
 * Change Logs:
 * Date           Author            Notes
 * 2020-06-02     qiyongzhong       first version
 */
//---------------------------------------
#ifndef __TYPEDEF_H__
#define __TYPEDEF_H__

#include <stdbool.h>

typedef signed char         s8;
typedef signed short        s16;
typedef signed long         s32;
typedef signed long long    s64;

typedef unsigned char       u8;
typedef unsigned short      u16;
typedef unsigned long       u32;
typedef unsigned long long  u64;

typedef float               f32;
typedef double              f64;


typedef void (*PHOOK_t)(void);

#ifndef NULL
#define NULL                (void *)0
#endif

#endif

