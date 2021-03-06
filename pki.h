#ifndef NCATOOL_PKI_H
#define NCATOOL_PKI_H
#include <string.h>
#include "types.h"
#include "settings.h"

#define ZEROES_KEY {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
#define ZEROES_XTS_KEY {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
#define ZEROES_KAEKS {ZEROES_KEY, ZEROES_KEY, ZEROES_KEY}

/* TODO: Design consideration -- should I store the master keys and derive */
/* the titlekeks and the body kaeks? Worth considering... */

const nca_keyset_t nca_keys_retail = {
    ZEROES_XTS_KEY, /* Header key */
    {
        ZEROES_KEY, /* Titlekek 00 */
        ZEROES_KEY, /* Titlekek 01 */
        ZEROES_KEY, /* Titlekek 02 */
        ZEROES_KEY, /* Titlekek 03 */
        ZEROES_KEY, /* Titlekek 04 */
        ZEROES_KEY, /* Titlekek 05 */
        ZEROES_KEY, /* Titlekek 06 */
        ZEROES_KEY, /* Titlekek 07 */
        ZEROES_KEY, /* Titlekek 08 */
        ZEROES_KEY, /* Titlekek 09 */
        ZEROES_KEY, /* Titlekek 10 */
        ZEROES_KEY, /* Titlekek 11 */
        ZEROES_KEY, /* Titlekek 12 */
        ZEROES_KEY, /* Titlekek 13 */
        ZEROES_KEY, /* Titlekek 14 */
        ZEROES_KEY, /* Titlekek 15 */
        ZEROES_KEY, /* Titlekek 16 */
        ZEROES_KEY, /* Titlekek 17 */
        ZEROES_KEY, /* Titlekek 18 */
        ZEROES_KEY, /* Titlekek 19 */
        ZEROES_KEY, /* Titlekek 20 */
        ZEROES_KEY, /* Titlekek 21 */
        ZEROES_KEY, /* Titlekek 22 */
        ZEROES_KEY, /* Titlekek 23 */
        ZEROES_KEY, /* Titlekek 24 */
        ZEROES_KEY, /* Titlekek 25 */
        ZEROES_KEY, /* Titlekek 26 */
        ZEROES_KEY, /* Titlekek 27 */
        ZEROES_KEY, /* Titlekek 28 */
        ZEROES_KEY, /* Titlekek 29 */
        ZEROES_KEY, /* Titlekek 30 */
        ZEROES_KEY  /* Titlekek 31 */
    },
    {
        ZEROES_KAEKS, /* Key Area Encryption Keyset 00 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 01 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 02 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 03 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 04 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 05 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 06 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 07 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 08 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 09 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 10 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 11 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 12 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 13 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 14 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 15 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 16 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 17 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 18 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 19 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 20 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 21 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 22 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 23 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 24 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 25 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 26 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 27 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 28 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 29 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 30 */
        ZEROES_KAEKS  /* Key Area Encryption Keyset 31 */
    },
    { /* Fixed RSA key used to validate NCA signature 0. */
        0xBF, 0xBE, 0x40, 0x6C, 0xF4, 0xA7, 0x80, 0xE9, 0xF0, 0x7D, 0x0C, 0x99, 0x61, 0x1D, 0x77, 0x2F,
        0x96, 0xBC, 0x4B, 0x9E, 0x58, 0x38, 0x1B, 0x03, 0xAB, 0xB1, 0x75, 0x49, 0x9F, 0x2B, 0x4D, 0x58,
        0x34, 0xB0, 0x05, 0xA3, 0x75, 0x22, 0xBE, 0x1A, 0x3F, 0x03, 0x73, 0xAC, 0x70, 0x68, 0xD1, 0x16,
        0xB9, 0x04, 0x46, 0x5E, 0xB7, 0x07, 0x91, 0x2F, 0x07, 0x8B, 0x26, 0xDE, 0xF6, 0x00, 0x07, 0xB2,
        0xB4, 0x51, 0xF8, 0x0D, 0x0A, 0x5E, 0x58, 0xAD, 0xEB, 0xBC, 0x9A, 0xD6, 0x49, 0xB9, 0x64, 0xEF,
        0xA7, 0x82, 0xB5, 0xCF, 0x6D, 0x70, 0x13, 0xB0, 0x0F, 0x85, 0xF6, 0xA9, 0x08, 0xAA, 0x4D, 0x67,
        0x66, 0x87, 0xFA, 0x89, 0xFF, 0x75, 0x90, 0x18, 0x1E, 0x6B, 0x3D, 0xE9, 0x8A, 0x68, 0xC9, 0x26,
        0x04, 0xD9, 0x80, 0xCE, 0x3F, 0x5E, 0x92, 0xCE, 0x01, 0xFF, 0x06, 0x3B, 0xF2, 0xC1, 0xA9, 0x0C,
        0xCE, 0x02, 0x6F, 0x16, 0xBC, 0x92, 0x42, 0x0A, 0x41, 0x64, 0xCD, 0x52, 0xB6, 0x34, 0x4D, 0xAE,
        0xC0, 0x2E, 0xDE, 0xA4, 0xDF, 0x27, 0x68, 0x3C, 0xC1, 0xA0, 0x60, 0xAD, 0x43, 0xF3, 0xFC, 0x86,
        0xC1, 0x3E, 0x6C, 0x46, 0xF7, 0x7C, 0x29, 0x9F, 0xFA, 0xFD, 0xF0, 0xE3, 0xCE, 0x64, 0xE7, 0x35,
        0xF2, 0xF6, 0x56, 0x56, 0x6F, 0x6D, 0xF1, 0xE2, 0x42, 0xB0, 0x83, 0x40, 0xA5, 0xC3, 0x20, 0x2B,
        0xCC, 0x9A, 0xAE, 0xCA, 0xED, 0x4D, 0x70, 0x30, 0xA8, 0x70, 0x1C, 0x70, 0xFD, 0x13, 0x63, 0x29,
        0x02, 0x79, 0xEA, 0xD2, 0xA7, 0xAF, 0x35, 0x28, 0x32, 0x1C, 0x7B, 0xE6, 0x2F, 0x1A, 0xAA, 0x40,
        0x7E, 0x32, 0x8C, 0x27, 0x42, 0xFE, 0x82, 0x78, 0xEC, 0x0D, 0xEB, 0xE6, 0x83, 0x4B, 0x6D, 0x81,
        0x04, 0x40, 0x1A, 0x9E, 0x9A, 0x67, 0xF6, 0x72, 0x29, 0xFA, 0x04, 0xF0, 0x9D, 0xE4, 0xF4, 0x03    
    },
    { /* Fixed RSA key used to validate ACID signatures. */
        0xDD, 0xC8, 0xDD, 0xF2, 0x4E, 0x6D, 0xF0, 0xCA, 0x9E, 0xC7, 0x5D, 0xC7, 0x7B, 0xAD, 0xFE, 0x7D,
        0x23, 0x89, 0x69, 0xB6, 0xF2, 0x06, 0xA2, 0x02, 0x88, 0xE1, 0x55, 0x91, 0xAB, 0xCB, 0x4D, 0x50,
        0x2E, 0xFC, 0x9D, 0x94, 0x76, 0xD6, 0x4C, 0xD8, 0xFF, 0x10, 0xFA, 0x5E, 0x93, 0x0A, 0xB4, 0x57,
        0xAC, 0x51, 0xC7, 0x16, 0x66, 0xF4, 0x1A, 0x54, 0xC2, 0xC5, 0x04, 0x3D, 0x1B, 0xFE, 0x30, 0x20,
        0x8A, 0xAC, 0x6F, 0x6F, 0xF5, 0xC7, 0xB6, 0x68, 0xB8, 0xC9, 0x40, 0x6B, 0x42, 0xAD, 0x11, 0x21,
        0xE7, 0x8B, 0xE9, 0x75, 0x01, 0x86, 0xE4, 0x48, 0x9B, 0x0A, 0x0A, 0xF8, 0x7F, 0xE8, 0x87, 0xF2,
        0x82, 0x01, 0xE6, 0xA3, 0x0F, 0xE4, 0x66, 0xAE, 0x83, 0x3F, 0x4E, 0x9F, 0x5E, 0x01, 0x30, 0xA4,
        0x00, 0xB9, 0x9A, 0xAE, 0x5F, 0x03, 0xCC, 0x18, 0x60, 0xE5, 0xEF, 0x3B, 0x5E, 0x15, 0x16, 0xFE,
        0x1C, 0x82, 0x78, 0xB5, 0x2F, 0x47, 0x7C, 0x06, 0x66, 0x88, 0x5D, 0x35, 0xA2, 0x67, 0x20, 0x10,
        0xE7, 0x6C, 0x43, 0x68, 0xD3, 0xE4, 0x5A, 0x68, 0x2A, 0x5A, 0xE2, 0x6D, 0x73, 0xB0, 0x31, 0x53,
        0x1C, 0x20, 0x09, 0x44, 0xF5, 0x1A, 0x9D, 0x22, 0xBE, 0x12, 0xA1, 0x77, 0x11, 0xE2, 0xA1, 0xCD,
        0x40, 0x9A, 0xA2, 0x8B, 0x60, 0x9B, 0xEF, 0xA0, 0xD3, 0x48, 0x63, 0xA2, 0xF8, 0xA3, 0x2C, 0x08,
        0x56, 0x52, 0x2E, 0x60, 0x19, 0x67, 0x5A, 0xA7, 0x9F, 0xDC, 0x3F, 0x3F, 0x69, 0x2B, 0x31, 0x6A,
        0xB7, 0x88, 0x4A, 0x14, 0x84, 0x80, 0x33, 0x3C, 0x9D, 0x44, 0xB7, 0x3F, 0x4C, 0xE1, 0x75, 0xEA,
        0x37, 0xEA, 0xE8, 0x1E, 0x7C, 0x77, 0xB7, 0xC6, 0x1A, 0xA2, 0xF0, 0x9F, 0x10, 0x61, 0xCD, 0x7B,
        0x5B, 0x32, 0x4C, 0x37, 0xEF, 0xB1, 0x71, 0x68, 0x53, 0x0A, 0xED, 0x51, 0x7D, 0x35, 0x22, 0xFD
    }
};

const nca_keyset_t nca_keys_dev = {
    ZEROES_XTS_KEY, /* Header key */
    {
        ZEROES_KEY, /* Titlekek 00 */
        ZEROES_KEY, /* Titlekek 01 */
        ZEROES_KEY, /* Titlekek 02 */
        ZEROES_KEY, /* Titlekek 03 */
        ZEROES_KEY, /* Titlekek 04 */
        ZEROES_KEY, /* Titlekek 05 */
        ZEROES_KEY, /* Titlekek 06 */
        ZEROES_KEY, /* Titlekek 07 */
        ZEROES_KEY, /* Titlekek 08 */
        ZEROES_KEY, /* Titlekek 09 */
        ZEROES_KEY, /* Titlekek 10 */
        ZEROES_KEY, /* Titlekek 11 */
        ZEROES_KEY, /* Titlekek 12 */
        ZEROES_KEY, /* Titlekek 13 */
        ZEROES_KEY, /* Titlekek 14 */
        ZEROES_KEY, /* Titlekek 15 */
        ZEROES_KEY, /* Titlekek 16 */
        ZEROES_KEY, /* Titlekek 17 */
        ZEROES_KEY, /* Titlekek 18 */
        ZEROES_KEY, /* Titlekek 19 */
        ZEROES_KEY, /* Titlekek 20 */
        ZEROES_KEY, /* Titlekek 21 */
        ZEROES_KEY, /* Titlekek 22 */
        ZEROES_KEY, /* Titlekek 23 */
        ZEROES_KEY, /* Titlekek 24 */
        ZEROES_KEY, /* Titlekek 25 */
        ZEROES_KEY, /* Titlekek 26 */
        ZEROES_KEY, /* Titlekek 27 */
        ZEROES_KEY, /* Titlekek 28 */
        ZEROES_KEY, /* Titlekek 29 */
        ZEROES_KEY, /* Titlekek 30 */
        ZEROES_KEY  /* Titlekek 31 */
    },
    {
        ZEROES_KAEKS, /* Key Area Encryption Keyset 00 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 01 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 02 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 03 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 04 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 05 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 06 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 07 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 08 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 09 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 10 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 11 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 12 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 13 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 14 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 15 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 16 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 17 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 18 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 19 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 20 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 21 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 22 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 23 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 24 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 25 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 26 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 27 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 28 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 29 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 30 */
        ZEROES_KAEKS  /* Key Area Encryption Keyset 31 */
    },
    {
        0xD8, 0xF1, 0x18, 0xEF, 0x32, 0x72, 0x4C, 0xA7, 0x47, 0x4C, 0xB9, 0xEA, 0xB3, 0x04, 0xA8, 0xA4,
        0xAC, 0x99, 0x08, 0x08, 0x04, 0xBF, 0x68, 0x57, 0xB8, 0x43, 0x94, 0x2B, 0xC7, 0xB9, 0x66, 0x49,
        0x85, 0xE5, 0x8A, 0x9B, 0xC1, 0x00, 0x9A, 0x6A, 0x8D, 0xD0, 0xEF, 0xCE, 0xFF, 0x86, 0xC8, 0x5C,
        0x5D, 0xE9, 0x53, 0x7B, 0x19, 0x2A, 0xA8, 0xC0, 0x22, 0xD1, 0xF3, 0x22, 0x0A, 0x50, 0xF2, 0x2B,
        0x65, 0x05, 0x1B, 0x9E, 0xEC, 0x61, 0xB5, 0x63, 0xA3, 0x6F, 0x3B, 0xBA, 0x63, 0x3A, 0x53, 0xF4,
        0x49, 0x2F, 0xCF, 0x03, 0xCC, 0xD7, 0x50, 0x82, 0x1B, 0x29, 0x4F, 0x08, 0xDE, 0x1B, 0x6D, 0x47,
        0x4F, 0xA8, 0xB6, 0x6A, 0x26, 0xA0, 0x83, 0x3F, 0x1A, 0xAF, 0x83, 0x8F, 0x0E, 0x17, 0x3F, 0xFE,
        0x44, 0x1C, 0x56, 0x94, 0x2E, 0x49, 0x83, 0x83, 0x03, 0xE9, 0xB6, 0xAD, 0xD5, 0xDE, 0xE3, 0x2D,
        0xA1, 0xD9, 0x66, 0x20, 0x5D, 0x1F, 0x5E, 0x96, 0x5D, 0x5B, 0x55, 0x0D, 0xD4, 0xB4, 0x77, 0x6E,
        0xAE, 0x1B, 0x69, 0xF3, 0xA6, 0x61, 0x0E, 0x51, 0x62, 0x39, 0x28, 0x63, 0x75, 0x76, 0xBF, 0xB0,
        0xD2, 0x22, 0xEF, 0x98, 0x25, 0x02, 0x05, 0xC0, 0xD7, 0x6A, 0x06, 0x2C, 0xA5, 0xD8, 0x5A, 0x9D,
        0x7A, 0xA4, 0x21, 0x55, 0x9F, 0xF9, 0x3E, 0xBF, 0x16, 0xF6, 0x07, 0xC2, 0xB9, 0x6E, 0x87, 0x9E,
        0xB5, 0x1C, 0xBE, 0x97, 0xFA, 0x82, 0x7E, 0xED, 0x30, 0xD4, 0x66, 0x3F, 0xDE, 0xD8, 0x1B, 0x4B,
        0x15, 0xD9, 0xFB, 0x2F, 0x50, 0xF0, 0x9D, 0x1D, 0x52, 0x4C, 0x1C, 0x4D, 0x8D, 0xAE, 0x85, 0x1E,
        0xEA, 0x7F, 0x86, 0xF3, 0x0B, 0x7B, 0x87, 0x81, 0x98, 0x23, 0x80, 0x63, 0x4F, 0x2F, 0xB0, 0x62,
        0xCC, 0x6E, 0xD2, 0x46, 0x13, 0x65, 0x2B, 0xD6, 0x44, 0x33, 0x59, 0xB5, 0x8F, 0xB9, 0x4A, 0xA9  
    },
    { /* Fixed RSA key used to validate ACID signatures. */
        0xD6, 0x34, 0xA5, 0x78, 0x6C, 0x68, 0xCE, 0x5A, 0xC2, 0x37, 0x17, 0xF3, 0x82, 0x45, 0xC6, 0x89,
        0xE1, 0x2D, 0x06, 0x67, 0xBF, 0xB4, 0x06, 0x19, 0x55, 0x6B, 0x27, 0x66, 0x0C, 0xA4, 0xB5, 0x87,
        0x81, 0x25, 0xF4, 0x30, 0xBC, 0x53, 0x08, 0x68, 0xA2, 0x48, 0x49, 0x8C, 0x3F, 0x38, 0x40, 0x9C,
        0xC4, 0x26, 0xF4, 0x79, 0xE2, 0xA1, 0x85, 0xF5, 0x5C, 0x7F, 0x58, 0xBA, 0xA6, 0x1C, 0xA0, 0x8B,
        0x84, 0x16, 0x14, 0x6F, 0x85, 0xD9, 0x7C, 0xE1, 0x3C, 0x67, 0x22, 0x1E, 0xFB, 0xD8, 0xA7, 0xA5,
        0x9A, 0xBF, 0xEC, 0x0E, 0xCF, 0x96, 0x7E, 0x85, 0xC2, 0x1D, 0x49, 0x5D, 0x54, 0x26, 0xCB, 0x32,
        0x7C, 0xF6, 0xBB, 0x58, 0x03, 0x80, 0x2B, 0x5D, 0xF7, 0xFB, 0xD1, 0x9D, 0xC7, 0xC6, 0x2E, 0x53,
        0xC0, 0x6F, 0x39, 0x2C, 0x1F, 0xA9, 0x92, 0xF2, 0x4D, 0x7D, 0x4E, 0x74, 0xFF, 0xE4, 0xEF, 0xE4,
        0x7C, 0x3D, 0x34, 0x2A, 0x71, 0xA4, 0x97, 0x59, 0xFF, 0x4F, 0xA2, 0xF4, 0x66, 0x78, 0xD8, 0xBA,
        0x99, 0xE3, 0xE6, 0xDB, 0x54, 0xB9, 0xE9, 0x54, 0xA1, 0x70, 0xFC, 0x05, 0x1F, 0x11, 0x67, 0x4B,
        0x26, 0x8C, 0x0C, 0x3E, 0x03, 0xD2, 0xA3, 0x55, 0x5C, 0x7D, 0xC0, 0x5D, 0x9D, 0xFF, 0x13, 0x2F,
        0xFD, 0x19, 0xBF, 0xED, 0x44, 0xC3, 0x8C, 0xA7, 0x28, 0xCB, 0xE5, 0xE0, 0xB1, 0xA7, 0x9C, 0x33,
        0x8D, 0xB8, 0x6E, 0xDE, 0x87, 0x18, 0x22, 0x60, 0xC4, 0xAE, 0xF2, 0x87, 0x9F, 0xCE, 0x09, 0x5C,
        0xB5, 0x99, 0xA5, 0x9F, 0x49, 0xF2, 0xD7, 0x58, 0xFA, 0xF9, 0xC0, 0x25, 0x7D, 0xD6, 0xCB, 0xF3,
        0xD8, 0x6C, 0xA2, 0x69, 0x91, 0x68, 0x73, 0xB1, 0x94, 0x6F, 0xA3, 0xF3, 0xB9, 0x7D, 0xF8, 0xE0,
        0x72, 0x9E, 0x93, 0x7B, 0x7A, 0xA2, 0x57, 0x60, 0xB7, 0x5B, 0xA9, 0x84, 0xAE, 0x64, 0x88, 0x69
    }
};

static inline void pki_initialize_keyset(nca_keyset_t *keyset, keyset_variant_t variant) {
    switch (variant) {
        case KEYSET_DEV:
            memcpy(keyset, &nca_keys_dev, sizeof(*keyset));
            break;
        case KEYSET_RETAIL:
            memcpy(keyset, &nca_keys_retail, sizeof(*keyset));
            break;
        default:
            memset(keyset, 0, sizeof(*keyset));
            break;
    }
}

#endif
