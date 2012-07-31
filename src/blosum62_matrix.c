#include <stdint.h>

#include "blosum62.h"

/* This file is automatically generated using scripts/mkBlosum */

const int32_t BLOSUM62_MATRIX[BLOSUM62_SIZE][BLOSUM62_SIZE] = {
{4.0, -2.0, 0.0, -2.0, -1.0, -2.0, 0.0, -2.0, -1.0, -1.0, -1.0, -1.0, -2.0, -1.0, -1.0, -1.0, 1.0, 0.0, 0.0, -3.0, 0.0, -2.0, -1.0, -4.0},
{-2.0, 4.0, -3.0, 4.0, 1.0, -3.0, -1.0, 0.0, -3.0, 0.0, -4.0, -3.0, 3.0, -2.0, 0.0, -1.0, 0.0, -1.0, -3.0, -4.0, -1.0, -3.0, 1.0, -4.0},
{0.0, -3.0, 9.0, -3.0, -4.0, -2.0, -3.0, -3.0, -1.0, -3.0, -1.0, -1.0, -3.0, -3.0, -3.0, -3.0, -1.0, -1.0, -1.0, -2.0, -2.0, -2.0, -3.0, -4.0},
{-2.0, 4.0, -3.0, 6.0, 2.0, -3.0, -1.0, -1.0, -3.0, -1.0, -4.0, -3.0, 1.0, -1.0, 0.0, -2.0, 0.0, -1.0, -3.0, -4.0, -1.0, -3.0, 1.0, -4.0},
{-1.0, 1.0, -4.0, 2.0, 5.0, -3.0, -2.0, 0.0, -3.0, 1.0, -3.0, -2.0, 0.0, -1.0, 2.0, 0.0, 0.0, -1.0, -2.0, -3.0, -1.0, -2.0, 4.0, -4.0},
{-2.0, -3.0, -2.0, -3.0, -3.0, 6.0, -3.0, -1.0, 0.0, -3.0, 0.0, 0.0, -3.0, -4.0, -3.0, -3.0, -2.0, -2.0, -1.0, 1.0, -1.0, 3.0, -3.0, -4.0},
{0.0, -1.0, -3.0, -1.0, -2.0, -3.0, 6.0, -2.0, -4.0, -2.0, -4.0, -3.0, 0.0, -2.0, -2.0, -2.0, 0.0, -2.0, -3.0, -2.0, -1.0, -3.0, -2.0, -4.0},
{-2.0, 0.0, -3.0, -1.0, 0.0, -1.0, -2.0, 8.0, -3.0, -1.0, -3.0, -2.0, 1.0, -2.0, 0.0, 0.0, -1.0, -2.0, -3.0, -2.0, -1.0, 2.0, 0.0, -4.0},
{-1.0, -3.0, -1.0, -3.0, -3.0, 0.0, -4.0, -3.0, 4.0, -3.0, 2.0, 1.0, -3.0, -3.0, -3.0, -3.0, -2.0, -1.0, 3.0, -3.0, -1.0, -1.0, -3.0, -4.0},
{-1.0, 0.0, -3.0, -1.0, 1.0, -3.0, -2.0, -1.0, -3.0, 5.0, -2.0, -1.0, 0.0, -1.0, 1.0, 2.0, 0.0, -1.0, -2.0, -3.0, -1.0, -2.0, 1.0, -4.0},
{-1.0, -4.0, -1.0, -4.0, -3.0, 0.0, -4.0, -3.0, 2.0, -2.0, 4.0, 2.0, -3.0, -3.0, -2.0, -2.0, -2.0, -1.0, 1.0, -2.0, -1.0, -1.0, -3.0, -4.0},
{-1.0, -3.0, -1.0, -3.0, -2.0, 0.0, -3.0, -2.0, 1.0, -1.0, 2.0, 5.0, -2.0, -2.0, 0.0, -1.0, -1.0, -1.0, 1.0, -1.0, -1.0, -1.0, -1.0, -4.0},
{-2.0, 3.0, -3.0, 1.0, 0.0, -3.0, 0.0, 1.0, -3.0, 0.0, -3.0, -2.0, 6.0, -2.0, 0.0, 0.0, 1.0, 0.0, -3.0, -4.0, -1.0, -2.0, 0.0, -4.0},
{-1.0, -2.0, -3.0, -1.0, -1.0, -4.0, -2.0, -2.0, -3.0, -1.0, -3.0, -2.0, -2.0, 7.0, -1.0, -2.0, -1.0, -1.0, -2.0, -4.0, -2.0, -3.0, -1.0, -4.0},
{-1.0, 0.0, -3.0, 0.0, 2.0, -3.0, -2.0, 0.0, -3.0, 1.0, -2.0, 0.0, 0.0, -1.0, 5.0, 1.0, 0.0, -1.0, -2.0, -2.0, -1.0, -1.0, 3.0, -4.0},
{-1.0, -1.0, -3.0, -2.0, 0.0, -3.0, -2.0, 0.0, -3.0, 2.0, -2.0, -1.0, 0.0, -2.0, 1.0, 5.0, -1.0, -1.0, -3.0, -3.0, -1.0, -2.0, 0.0, -4.0},
{1.0, 0.0, -1.0, 0.0, 0.0, -2.0, 0.0, -1.0, -2.0, 0.0, -2.0, -1.0, 1.0, -1.0, 0.0, -1.0, 4.0, 1.0, -2.0, -3.0, 0.0, -2.0, 0.0, -4.0},
{0.0, -1.0, -1.0, -1.0, -1.0, -2.0, -2.0, -2.0, -1.0, -1.0, -1.0, -1.0, 0.0, -1.0, -1.0, -1.0, 1.0, 5.0, 0.0, -2.0, 0.0, -2.0, -1.0, -4.0},
{0.0, -3.0, -1.0, -3.0, -2.0, -1.0, -3.0, -3.0, 3.0, -2.0, 1.0, 1.0, -3.0, -2.0, -2.0, -3.0, -2.0, 0.0, 4.0, -3.0, -1.0, -1.0, -2.0, -4.0},
{-3.0, -4.0, -2.0, -4.0, -3.0, 1.0, -2.0, -2.0, -3.0, -3.0, -2.0, -1.0, -4.0, -4.0, -2.0, -3.0, -3.0, -2.0, -3.0, 11.0, -2.0, 2.0, -3.0, -4.0},
{0.0, -1.0, -2.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -2.0, -1.0, -1.0, 0.0, 0.0, -1.0, -2.0, -1.0, -1.0, -1.0, -4.0},
{-2.0, -3.0, -2.0, -3.0, -2.0, 3.0, -3.0, 2.0, -1.0, -2.0, -1.0, -1.0, -2.0, -3.0, -1.0, -2.0, -2.0, -2.0, -1.0, 2.0, -1.0, 7.0, -2.0, -4.0},
{-1.0, 1.0, -3.0, 1.0, 4.0, -3.0, -2.0, 0.0, -3.0, 1.0, -3.0, -1.0, 0.0, -1.0, 3.0, 0.0, 0.0, -1.0, -2.0, -3.0, -1.0, -2.0, 4.0, -4.0},
{-4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, 0.0},
};