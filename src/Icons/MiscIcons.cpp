/*
 * MiscIcons.cpp
 *
 * Created: 29/11/2015 12:11:08
 *  Author: David
 */

#include "asf.h"
#include "Configuration.hpp"
#include "Icons.hpp"

#if LARGE_FONT

extern const uint8_t IconCancel[] =
{	30, 30,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x88, 0x79, 0x99, 0x97, 0x88, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x89, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x98, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x89, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb7,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x7b, 0xbb, 0xbb,
    0xbb, 0xbb, 0x69, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x96, 0xbb, 0xbb, 0xbb, 0xb7, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x7b, 0xbb, 0xbb, 0x89, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0xbb, 0xbb, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xbb,
    0xb7, 0x99, 0x99, 0x99, 0x96, 0xb9, 0x99, 0x99, 0x99, 0x9b, 0x69, 0x99,
    0x99, 0x99, 0x7b, 0xb9, 0x99, 0x99, 0x99, 0x6b, 0xbb, 0x99, 0x99, 0x99,
    0xbb, 0xb6, 0x99, 0x99, 0x99, 0x9b, 0x89, 0x99, 0x99, 0x99, 0xbb, 0xbb,
    0xb9, 0x99, 0x9b, 0xbb, 0xbb, 0x99, 0x99, 0x99, 0x98, 0x79, 0x99, 0x99,
    0x99, 0x9b, 0xbb, 0xbb, 0x99, 0xbb, 0xbb, 0xb9, 0x99, 0x99, 0x99, 0x97,
    0x99, 0x99, 0x99, 0x99, 0x99, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x99, 0x99,
    0x99, 0x99, 0x97, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9b, 0xbb, 0xbb, 0xbb,
    0xb9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0xbb, 0xbb, 0xbb, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x99, 0x99, 0xbb, 0xbb, 0xbb, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x9b, 0xbb, 0xbb, 0xbb, 0xb9, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0x99, 0x99, 0x99, 0x99, 0x99, 0x79, 0x99, 0x99, 0x99, 0x9b, 0xbb,
    0xbb, 0x99, 0xbb, 0xbb, 0xb9, 0x99, 0x99, 0x99, 0x97, 0x89, 0x99, 0x99,
    0x99, 0xbb, 0xbb, 0xb9, 0x99, 0x9b, 0xbb, 0xbb, 0x99, 0x99, 0x99, 0x98,
    0xb9, 0x99, 0x99, 0x99, 0x7b, 0xbb, 0x99, 0x99, 0x99, 0xbb, 0xb7, 0x99,
    0x99, 0x99, 0x9b, 0xb7, 0x99, 0x99, 0x99, 0x97, 0xb9, 0x99, 0x99, 0x99,
    0x9b, 0x79, 0x99, 0x99, 0x99, 0x7b, 0xbb, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xbb, 0xbb, 0x89, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0xbb,
    0xbb, 0xb7, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x7b, 0xbb, 0xbb, 0xbb, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x95, 0xbb, 0xbb, 0xbb, 0xbb, 0xb6, 0x99, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x6b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0x89, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0x79, 0x99, 0x99, 0x99, 0x99, 0x99, 0x97, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x87, 0x99, 0x99, 0x99,
    0x78, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb
};

extern const uint8_t IconOk[] =
{	24, 30,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0xab, 0xbb, 0xbb,
    0xbb, 0xbb, 0xb0, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb2,
    0x2a, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xb2, 0x22, 0x6b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb2, 0x22, 0x26, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb2, 0x22, 0x22, 0x68,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8,
    0x32, 0x22, 0x22, 0xab, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xb3, 0x22, 0x22, 0x26, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x42, 0x22, 0x22, 0x2b, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x22,
    0x22, 0x2b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xa6, 0x22, 0x22, 0x2b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xb8, 0xa6, 0x22, 0x22, 0x22, 0x2b, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x62, 0x22, 0x22, 0x22, 0x33, 0x4b, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xba, 0x62, 0x22, 0x22, 0x22, 0x34,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x62, 0x22, 0x22,
    0x22, 0x38, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x62,
    0x22, 0x22, 0x23, 0x38, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xa2, 0x22, 0x22, 0x22, 0x4b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x86, 0x22, 0x22, 0x22, 0x38, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb6, 0x22, 0x22, 0x22, 0x38, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x62, 0x22, 0x22, 0x34,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x22,
    0x22, 0x24, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb6, 0x22, 0x23, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xb2, 0x22, 0x4b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb3, 0x38, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb
};

extern const uint8_t IconFiles[] =
{	44, 30,		// width, height
    0xb7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xb0, 0x0a, 0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x0a,
    0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x00, 0xbb, 0xb0, 0x0a, 0xa0, 0xaa, 0x0a,
    0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x00, 0xbb, 0xb0, 0x0a,
    0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x00,
    0xbb, 0xb0, 0x0a, 0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x0a,
    0xa0, 0xaa, 0x00, 0xbb, 0xb0, 0x0a, 0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x0a,
    0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x00, 0xbb, 0xb0, 0x0a, 0xa0, 0xaa, 0x0a,
    0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x00, 0xbb, 0xb0, 0x0a,
    0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x00,
    0xbb, 0xb0, 0x0a, 0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x0a, 0xa0, 0xaa, 0x0a,
    0xa0, 0xaa, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x00,
    0x00, 0xaa, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb7, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58
};

extern const uint8_t IconKeyboard[] =
{	61, 29,		// width, height
    0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xb0,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00,
    0x0b, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0x00,
    0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00,
    0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b,
    0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00,
    0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x00,
    0x00, 0x0b, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00,
    0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00,
    0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00,
    0x0b, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00,
    0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0x00,
    0x00, 0x0b, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xb0, 0x00,
    0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b,
    0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00,
    0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb,
    0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb,
    0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0x00,
    0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x00,
    0x00, 0x0b, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00,
    0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb,
    0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00,
    0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xb0,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00,
    0x0b, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0x00,
    0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00,
    0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b,
    0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0
};

extern const uint8_t IconTrash[] =
{	25, 30,		// width, height
    0xb8, 0x77, 0x78, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xb8, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x88, 0x8b, 0xbb, 0xb8, 0x78, 0x87, 0x77, 0x77, 0x77,
    0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x7b, 0xb8, 0x88, 0xb8,
    0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x78,
    0xbb, 0x88, 0xbb, 0x88, 0x87, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77,
    0x77, 0x88, 0x87, 0xbb, 0x88, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x88, 0xb8, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x88, 0x88, 0x8b, 0xbb,
    0xbb, 0xb8, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x88,
    0x08, 0x88, 0xbb, 0xbb, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77,
    0x77, 0x78, 0x88, 0x78, 0x88, 0x88, 0xb8, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0x88, 0x88, 0x88, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x87, 0x78, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87,
    0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x87, 0x78, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x88, 0x78, 0xbb, 0xbb, 0xbb, 0x77, 0x77,
    0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x7b, 0x88, 0x78, 0xbb, 0xbb,
    0xb8, 0x00, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x70, 0x08, 0x88,
    0x08, 0xbb, 0xbb, 0xbb, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x8b, 0x88, 0x88, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x88, 0xb8, 0x8b, 0xb8, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xbb, 0x88, 0xb8,
    0x78, 0x87, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x87, 0x77,
    0xb8, 0x78, 0x87, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x07, 0x77, 0xb8, 0x77, 0x77, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0xb8, 0x77, 0x77, 0x07, 0x77, 0x77,
    0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x00, 0x7b, 0xb8, 0x03, 0x78,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8b, 0xbb,
    0xb8, 0x00, 0x08, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb
};

#else

extern const uint8_t IconOk[] =
{	18, 21,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xa6, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xb2, 0x26, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x22, 0x26, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb3, 0x22, 0x26, 0xab, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb3, 0x22, 0x22, 0x6b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb4,
    0x22, 0x22, 0x6b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x22,
    0x22, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x8a, 0x62, 0x22, 0x2b,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x62, 0x22, 0x22, 0x33, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xa6, 0x22, 0x22, 0x23, 0x4b, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb8, 0x62, 0x22, 0x22, 0x38, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb6, 0x22,
    0x22, 0x23, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xa6, 0x22, 0x22, 0x38,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x62, 0x22, 0x23, 0x8b, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0x22, 0x22, 0x34, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xb2, 0x22, 0x3b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0x23, 0x4b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb3,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb
};

extern const uint8_t IconCancel[] =
{	21, 21,		// width, height
    0xbb, 0xbb, 0xbb, 0xb8, 0x99, 0x99, 0x98, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9b, 0xbb, 0xbb, 0xbb, 0xb8, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0xbb, 0xbb, 0xb8, 0x99, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x98, 0xbb, 0xbb, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x9b, 0xbb, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x99, 0x9b, 0xb9, 0x99, 0x99, 0x8b, 0x79, 0x99, 0x7b, 0x89, 0x99,
    0x99, 0xb8, 0x99, 0x99, 0x9b, 0xbb, 0x79, 0x7b, 0xbb, 0x99, 0x99, 0x98,
    0x99, 0x99, 0x99, 0x7b, 0xbb, 0x7b, 0xbb, 0x79, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x99, 0x7b, 0xbb, 0xbb, 0x79, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x8b, 0xbb, 0x89, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x7b,
    0xbb, 0xbb, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x7b, 0xbb, 0x8b,
    0xbb, 0x99, 0x99, 0x99, 0x97, 0x99, 0x99, 0x9b, 0xbb, 0x79, 0x7b, 0xbb,
    0x99, 0x99, 0x97, 0xb9, 0x99, 0x99, 0x8b, 0x79, 0x99, 0x7b, 0x89, 0x99,
    0x99, 0xbb, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9b,
    0xbb, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9b, 0xbb, 0xb8,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0xbb, 0xbb, 0xb8, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0xbb, 0xbb, 0xbb, 0xbb, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x9b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x87, 0x99, 0x99,
    0x97, 0x8b, 0xbb, 0xbb, 0xb0
};

extern const uint8_t IconFiles[] =
{	29, 21,		// width, height
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0x70, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xb0, 0x0a, 0xa0, 0x0a, 0xa0, 0x0a, 0xa0, 0x0a,
    0xa0, 0x0b, 0xbb, 0x00, 0xaa, 0x00, 0xaa, 0x00, 0xaa, 0x00, 0xaa, 0x00,
    0xbb, 0xb0, 0x0a, 0xa0, 0x0a, 0xa0, 0x0a, 0xa0, 0x0a, 0xa0, 0x0b, 0xbb,
    0x00, 0xaa, 0x00, 0xaa, 0x00, 0xaa, 0x00, 0xaa, 0x00, 0xbb, 0xb0, 0x0a,
    0xa0, 0x0a, 0xa0, 0x0a, 0xa0, 0x0a, 0xa0, 0x0b, 0xbb, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x70
};

extern const uint8_t IconKeyboard[] =
{	40, 21,		// width, height
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00,
    0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x0b, 0xb0, 0x00,
    0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x0b, 0xb0, 0x00,
    0x0b, 0xbb, 0xbb, 0x00, 0x00, 0xbb, 0x00, 0x00, 0xbb, 0x00, 0x00, 0xbb,
    0xbb, 0xb0, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x0b, 0xbb, 0xbb,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0xbb, 0xbb, 0xb0, 0x00,
    0x0b, 0xb0, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0xbb, 0xbb, 0xbb,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x0b, 0xbb, 0xbb, 0xb0, 0x00,
    0x0b, 0xb0, 0x00, 0x0b, 0xb0, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0xbb,
    0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00,
    0x0b, 0xb0, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0xbb,
    0x00, 0x00, 0x00, 0x0b, 0xb0, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00,
    0xbb, 0xbb, 0xbb, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x0b, 0xbb,
    0xbb, 0xb0, 0x00, 0x0b, 0xb0, 0x00, 0x0b, 0xb0, 0x00, 0x00, 0x00, 0xbb,
    0x00, 0x00, 0xbb, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x0b, 0xb0, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x0b, 0xb0, 0x00, 0x0b, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0x00, 0x0b, 0xbb, 0xbb, 0xb0, 0x00, 0x0b, 0xb0, 0x00, 0x0b, 0xb0, 0x00,
    0x00, 0x00, 0xbb, 0x00, 0x00, 0xbb, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00,
    0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x0b, 0xb0, 0x00, 0x00, 0x00, 0xbb,
    0xbb, 0xbb, 0xbb, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x0b, 0xb0, 0x00,
    0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0xbb,
    0xbb, 0xbb, 0xbb, 0x00, 0x0b, 0xbb, 0xbb, 0xb0, 0x00, 0x0b, 0xb0, 0x00,
    0x0b, 0xb0, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0xbb, 0x00, 0x00, 0xbb,
    0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x0b, 0xb0, 0x00,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0xbb, 0xbb, 0xb0, 0x00,
    0x0b, 0xb0, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00,
    0x0b, 0xb0, 0x00, 0x0b, 0xbb, 0xbb, 0x00, 0x00, 0xbb, 0x00, 0x00, 0xbb,
    0x00, 0x00, 0xbb, 0xbb, 0xb0, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00,
    0x0b, 0xbb, 0xbb, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0xbb,
    0xbb, 0xb0, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb
};

extern const uint8_t IconTrash[] =
{	17, 21,		// width, height
    0xb7, 0x77, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x78,
    0x87, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x7b, 0xb8, 0x88, 0x88,
    0x88, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x7b, 0x88, 0xbb, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0x87, 0x88, 0xbb, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0xb8, 0x78, 0x88, 0xb8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x87, 0x88, 0x88, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x87,
    0x78, 0x88, 0x88, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x77, 0xbb,
    0xbb, 0xb8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xb8, 0x78, 0xbb, 0xb8,
    0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x78, 0x87, 0x8b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0xb8, 0xbb, 0x88, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xb8, 0x7b, 0x88, 0x87, 0x77, 0x77, 0x77, 0x77, 0x77,
    0x77, 0x77, 0x77, 0xb7, 0x77, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0x7b, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x7b,
    0xb7, 0x07, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0
};

#endif

// End
