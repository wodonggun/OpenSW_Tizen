/******************************************************************
 *
 * Copyright 2018 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************/

/* ------------------------------------------------------------------
 * Copyright (C) 1998-2009 PacketVideo
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 * -------------------------------------------------------------------
 */
/*

 Pathname: ./src/digit_reversal_tables.c
 Funtions:

------------------------------------------------------------------------------
 REVISION HISTORY

 Who:                       Date:
 Description:

  ------------------------------------------------------------------------------
 MODULE DESCRIPTION

  Tables for digit reverse operation

------------------------------------------------------------------------------
*/


/*----------------------------------------------------------------------------
; INCLUDES
----------------------------------------------------------------------------*/

#include "digit_reversal_tables.h"
#include "imdct_fxp.h"

/*----------------------------------------------------------------------------
; MACROS
; Define module specific macros here
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; DEFINES
; Include all pre-processor statements here. Include conditional
; compile variables also.
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; LOCAL FUNCTION DEFINITIONS
; Function Prototype declaration
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; LOCAL VARIABLE DEFINITIONS
; Variable declaration - defined here and used outside this module
----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
; EXTERNAL FUNCTION REFERENCES
; Declare functions defined elsewhere and referenced in this module
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; EXTERNAL VARIABLES REFERENCES
; Declare variables used in this module but defined elsewhere
----------------------------------------------------------------------------*/

/*
------------------------------------------------------------------------------
 Digit Reverse tables
------------------------------------------------------------------------------
*/

const Int16 digit_reverse_64[ 64] =
{
    + 0,  + 32,  + 64,  + 96,
    + 8,  + 40,  + 72, + 104,
    + 16,  + 48,  + 80, + 112,
    + 24,  + 56,  + 88, + 120,
    + 2,  + 34,  + 66,  + 98,
    + 10,  + 42,  + 74, + 106,
    + 18,  + 50,  + 82, + 114,
    + 26,  + 58,  + 90, + 122,
    + 4,  + 36,  + 68, + 100,
    + 12,  + 44,  + 76, + 108,
    + 20,  + 52,  + 84, + 116,
    + 28,  + 60,  + 92, + 124,
    + 6,  + 38,  + 70, + 102,
    + 14,  + 46,  + 78, + 110,
    + 22,  + 54,  + 86, + 118,
    + 30,  + 62,  + 94, + 126
};


const Int16 digit_reverse_256[ 256] =
{
    + 0, + 128, + 256, + 384,
    + 32, + 160, + 288, + 416,
    + 64, + 192, + 320, + 448,
    + 96, + 224, + 352, + 480,
    + 8, + 136, + 264, + 392,
    + 40, + 168, + 296, + 424,
    + 72, + 200, + 328, + 456,
    + 104, + 232, + 360, + 488,
    + 16, + 144, + 272, + 400,
    + 48, + 176, + 304, + 432,
    + 80, + 208, + 336, + 464,
    + 112, + 240, + 368, + 496,
    + 24, + 152, + 280, + 408,
    + 56, + 184, + 312, + 440,
    + 88, + 216, + 344, + 472,
    + 120, + 248, + 376, + 504,
    + 2, + 130, + 258, + 386,
    + 34, + 162, + 290, + 418,
    + 66, + 194, + 322, + 450,
    + 98, + 226, + 354, + 482,
    + 10, + 138, + 266, + 394,
    + 42, + 170, + 298, + 426,
    + 74, + 202, + 330, + 458,
    + 106, + 234, + 362, + 490,
    + 18, + 146, + 274, + 402,
    + 50, + 178, + 306, + 434,
    + 82, + 210, + 338, + 466,
    + 114, + 242, + 370, + 498,
    + 26, + 154, + 282, + 410,
    + 58, + 186, + 314, + 442,
    + 90, + 218, + 346, + 474,
    + 122, + 250, + 378, + 506,
    + 4, + 132, + 260, + 388,
    + 36, + 164, + 292, + 420,
    + 68, + 196, + 324, + 452,
    + 100, + 228, + 356, + 484,
    + 12, + 140, + 268, + 396,
    + 44, + 172, + 300, + 428,
    + 76, + 204, + 332, + 460,
    + 108, + 236, + 364, + 492,
    + 20, + 148, + 276, + 404,
    + 52, + 180, + 308, + 436,
    + 84, + 212, + 340, + 468,
    + 116, + 244, + 372, + 500,
    + 28, + 156, + 284, + 412,
    + 60, + 188, + 316, + 444,
    + 92, + 220, + 348, + 476,
    + 124, + 252, + 380, + 508,
    + 6, + 134, + 262, + 390,
    + 38, + 166, + 294, + 422,
    + 70, + 198, + 326, + 454,
    + 102, + 230, + 358, + 486,
    + 14, + 142, + 270, + 398,
    + 46, + 174, + 302, + 430,
    + 78, + 206, + 334, + 462,
    + 110, + 238, + 366, + 494,
    + 22, + 150, + 278, + 406,
    + 54, + 182, + 310, + 438,
    + 86, + 214, + 342, + 470,
    + 118, + 246, + 374, + 502,
    + 30, + 158, + 286, + 414,
    + 62, + 190, + 318, + 446,
    + 94, + 222, + 350, + 478,
    + 126, + 254, + 382, + 510
};




const Int16 digit_reverse_swap_256[ 241] =
{
    + 2, + 128,   + 4, + 256,
    + 6, + 384,   + 8,  + 32,
    + 10, + 160,  + 12, + 288,
    + 14, + 416,  + 16,  + 64,
    + 18, + 192,  + 20, + 320,
    + 22, + 448,  + 24,  + 96,
    + 26, + 224,  + 28, + 352,
    + 30, + 480,  + 34, + 136,
    + 36, + 264,  + 38, + 392,
    + 42, + 168,  + 44, + 296,
    + 46, + 424,  + 48,  + 72,
    + 50, + 200,  + 52, + 328,
    + 54, + 456,  + 56, + 104,
    + 58, + 232,  + 60, + 360,
    + 62, + 488,  + 66, + 144,
    + 68, + 272,  + 70, + 400,
    + 74, + 176,  + 76, + 304,
    + 78, + 432,  + 82, + 208,
    + 84, + 336,  + 86, + 464,
    + 88, + 112,  + 90, + 240,
    + 92, + 368,  + 94, + 496,
    + 98, + 152, + 100, + 280,
    + 102, + 408, + 106, + 184,
    + 108, + 312, + 110, + 440,
    + 114, + 216, + 116, + 344,
    + 118, + 472, + 122, + 248,
    + 124, + 376, + 126, + 504,
    + 132, + 258, + 134, + 386,
    + 138, + 162, + 140, + 290,
    + 142, + 418, + 146, + 194,
    + 148, + 322, + 150, + 450,
    + 154, + 226, + 156, + 354,
    + 158, + 482, + 164, + 266,
    + 166, + 394, + 172, + 298,
    + 174, + 426, + 178, + 202,
    + 180, + 330, + 182, + 458,
    + 186, + 234, + 188, + 362,
    + 190, + 490, + 196, + 274,
    + 198, + 402, + 204, + 306,
    + 206, + 434, + 212, + 338,
    + 214, + 466, + 218, + 242,
    + 220, + 370, + 222, + 498,
    + 228, + 282, + 230, + 410,
    + 236, + 314, + 238, + 442,
    + 244, + 346, + 246, + 474,
    + 252, + 378, + 254, + 506,
    + 262, + 388, + 268, + 292,
    + 270, + 420, + 276, + 324,
    + 278, + 452, + 284, + 356,
    + 286, + 484, + 294, + 396,
    + 302, + 428, + 308, + 332,
    + 310, + 460, + 316, + 364,
    + 318, + 492, + 326, + 404,
    + 334, + 436, + 342, + 468,
    + 348, + 372, + 350, + 500,
    + 358, + 412, + 366, + 444,
    + 374, + 476, + 382, + 508,
    + 398, + 422, + 406, + 454,
    + 414, + 486, + 438, + 462,
    + 446, + 494, + 478, + 502
};


#ifdef __cplusplus
extern "C"
{
#endif

    void digit_reversal_swapping(Int32 *y, Int32 *x);

#ifdef __cplusplus
}
#endif

void digit_reversal_swapping(Int32 *y, Int32 *x)
{
    Int16 i, j;
    Int32 tmp[2];
    const Int16 *pTable;

    pTable = digit_reverse_swap_256;

    for (Int k = 120; k != 0; k--)
    {
        i = *pTable++;
        j = *pTable++;
        tmp[0] = y[i];
        tmp[1] = y[i+1];
        y[i]   = y[j];
        y[i+1] = y[j+1];
        y[j]   = tmp[0];
        y[j+1] = tmp[1];

        tmp[0] = x[j];
        tmp[1] = x[j+1];
        x[j]   = x[i];
        x[j+1] = x[i+1];
        x[i]   = tmp[0];
        x[i+1] = tmp[1];

    }

}
