/*
 * GLCD_Fonts.c
 *
 *  Created on: 30 gen 2018
 *      Author: Manuel
 */

#include <stdint.h>
#include "GLCD_Fonts.h"

const Font6_t font_4x5 = {
    ' ', 58, 8, 6, 5,   //offset, numCharacters, stride, maxX, maxY
    {
    {2, 5, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},   // SPACE
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // !
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // "
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // #
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // $
    {6, 5, {0x13, 0x09, 0x04, 0x12, 0x19, 0x00}},   // %
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // &
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // '
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // (
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // )
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // *
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // +
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // ,
    {4, 5, {0x04, 0x04, 0x04, 0x00, 0x00, 0x00}},   // -
    {2, 5, {0x10, 0x00, 0x00, 0x00, 0x00, 0x00}},   // . 
    {6, 5, {0x10, 0x08, 0x04, 0x02, 0x01, 0x00}},   // /
    {5, 5, {0x1F, 0x11, 0x11, 0x1F, 0x00, 0x00}},   // 0
    {4, 5, {0x11, 0x1F, 0x10, 0x00, 0x00, 0x00}},   // 1
    {5, 5, {0x1D, 0x15, 0x15, 0x17, 0x00, 0x00}},   // 2
    {5, 5, {0x15, 0x15, 0x15, 0x1F, 0x00, 0x00}},   // 3
    {5, 5, {0x07, 0x04, 0x04, 0x1F, 0x00, 0x00}},   // 4
    {5, 5, {0x17, 0x15, 0x15, 0x1D, 0x00, 0x00}},   // 5
    {5, 5, {0x1F, 0x15, 0x15, 0x1D, 0x00, 0x00}},   // 6
    {5, 5, {0x01, 0x01, 0x01, 0x1F, 0x00, 0x00}},   // 7
    {5, 5, {0x1F, 0x15, 0x15, 0x1F, 0x00, 0x00}},   // 8
    {5, 5, {0x07, 0x05, 0x05, 0x1F, 0x00, 0x00}},   // 9
    {4, 5, {0x00, 0x0A, 0x00, 0x00, 0x00, 0x00}},   // :
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // ;
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // <
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // =
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // >
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // ?
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // @
    {5, 5, {0x1E, 0x05, 0x05, 0x1E, 0x00, 0x00}},   // A
    {5, 5, {0x1F, 0x15, 0x15, 0x0A, 0x00, 0x00}},   // B
    {4, 5, {0x1F, 0x11, 0x11, 0x00, 0x00, 0x00}},   // C
    {5, 5, {0x1F, 0x11, 0x11, 0x0E, 0x00, 0x00}},   // D
    {4, 5, {0x1F, 0x15, 0x15, 0x00, 0x00, 0x00}},   // E
    {5, 5, {0x1F, 0x05, 0x05, 0x05, 0x00, 0x00}},   // F
    {5, 5, {0x1F, 0x11, 0x15, 0x1D, 0x00, 0x00}},   // G
    {5, 5, {0x1F, 0x04, 0x04, 0x1F, 0x00, 0x00}},   // H
    {2, 5, {0x1F, 0x00, 0x00, 0x00, 0x00, 0x00}},   // I
    {5, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // J
    {5, 5, {0x1F, 0x04, 0x0A, 0x11, 0x00, 0x00}},   // K
    {5, 5, {0x1F, 0x10, 0x10, 0x10, 0x00, 0x00}},   // L
    {6, 5, {0x1F, 0x02, 0x04, 0x02, 0x1F, 0x00}},   // M
    {6, 5, {0x1F, 0x02, 0x04, 0x08, 0x1F, 0x00}},   // N
    {5, 5, {0x1F, 0x11, 0x11, 0x1F, 0x00, 0x00}},   // O
    {5, 5, {0x1F, 0x05, 0x05, 0x07, 0x00, 0x00}},   // P
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // Q
    {5, 5, {0x1F, 0x05, 0x0D, 0x17, 0x00, 0x00}},   // R
    {4, 5, {0x17, 0x15, 0x1D, 0x00, 0x00, 0x00}},   // S
    {4, 5, {0x01, 0x1F, 0x01, 0x00, 0x00, 0x00}},   // T
    {5, 5, {0x1F, 0x10, 0x10, 0x1F, 0x00, 0x00}},   // U
    {5, 5, {0x0F, 0x10, 0x10, 0x0F, 0x00, 0x00}},   // V
    {6, 5, {0x1F, 0x10, 0x0C, 0x10, 0x1F, 0x00}},   // W
    {5, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},   // X
    {5, 5, {0x17, 0x14, 0x14, 0x1F, 0x00, 0x00}},   // Y
    {5, 5, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}}    // Z
    } 
};

const Font18_t font_8x11 = {
    '-', 46, 20, 9, 11,   //offset, numCharacters, stride, maxX, maxY
    {
    {9, 11, {0x00, 0x00, 0x20, 0x00,  0x70, 0x00, 0x70, 0x00,  0x70, 0x00, 0x70, 0x00,  0x70, 0x00, 0x20, 0x00,  0x00, 0x00}},   // -
    {3, 11, {0x00, 0x06, 0x00, 0x06,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // .
    {9, 11, {0x80, 0x07, 0xC0, 0x03,  0xE0, 0x01, 0xF0, 0x00,  0x78, 0x00, 0x3C, 0x00,  0x1E, 0x00, 0x0F, 0x00,  0x00, 0x00}},   // /
    {9, 11, {0xDE, 0x03, 0xFF, 0x07,  0x03, 0x06, 0x03, 0x06,  0x03, 0x06, 0x03, 0x06,  0xFF, 0x07, 0xDE, 0x03,  0x00, 0x00}},   // 0
    {9, 11, {0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0xFF, 0x07, 0xDE, 0x03,  0x00, 0x00}},   // 1
    {9, 11, {0x82, 0x03, 0xE3, 0x07,  0x73, 0x06, 0x73, 0x06,  0x73, 0x06, 0x73, 0x06,  0x3F, 0x06, 0x1E, 0x02,  0x00, 0x00}},   // 2
    {9, 11, {0x02, 0x02, 0x23, 0x06,  0x73, 0x06, 0x73, 0x06,  0x73, 0x06, 0x73, 0x06,  0xFF, 0x07, 0xDE, 0x03,  0x00, 0x00}},   // 3
    {9, 11, {0x1E, 0x00, 0x3F, 0x00,  0x70, 0x00, 0x70, 0x00,  0x70, 0x00, 0x70, 0x00,  0xFF, 0x07, 0xFE, 0x03,  0x00, 0x00}},   // 4
    {9, 11, {0x3E, 0x02, 0x7F, 0x06,  0x73, 0x06, 0x73, 0x06,  0x73, 0x06, 0x73, 0x06,  0xF3, 0x07, 0xE2, 0x03,  0x00, 0x00}},   // 5
    {9, 11, {0xDE, 0x03, 0xFF, 0x07,  0x73, 0x06, 0x73, 0x06,  0x73, 0x06, 0x73, 0x06,  0xF3, 0x07, 0xE2, 0x03,  0x00, 0x00}},   // 6
    {9, 11, {0x02, 0x00, 0x03, 0x00,  0x03, 0x00, 0x03, 0x00,  0x03, 0x00, 0x03, 0x00,  0xFF, 0x07, 0xDE, 0x03,  0x00, 0x00}},   // 7
    {9, 11, {0xDE, 0x03, 0xFF, 0x07,  0x73, 0x06, 0x73, 0x06,  0x73, 0x06, 0x73, 0x06,  0xFF, 0x07, 0xDE, 0x03,  0x00, 0x00}},   // 8
    {9, 11, {0x3E, 0x02, 0x7F, 0x06,  0x73, 0x06, 0x73, 0x06,  0x73, 0x06, 0x73, 0x06,  0xFF, 0x07, 0xDE, 0x03,  0x00, 0x00}},   // 9
    {4, 5, {0x00, 0x0A, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // :
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // ;
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // <
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // =
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // >
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // ?
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // @
    {8, 11, {0xF0, 0x07, 0xF8, 0x07,  0x98, 0x01, 0x98, 0x01,  0x98, 0x01, 0xF8, 0x07,  0xF0, 0x07, 0x00, 0x00,  0x00, 0x00}},   // A
    {5, 5, {0x1F, 0x15, 0x15, 0x0A,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // B
    {4, 5, {0x1F, 0x11, 0x11, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // C
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // D
    {4, 5, {0x1F, 0x15, 0x15, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // E
    {5, 5, {0x1F, 0x05, 0x05, 0x05,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // F
    {5, 5, {0x1F, 0x11, 0x15, 0x1D,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // G
    {5, 5, {0x1F, 0x04, 0x04, 0x1F,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // H
    {2, 5, {0x1F, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // I
    {5, 5, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // J
    {5, 5, {0x1F, 0x04, 0x0A, 0x11,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // K
    {5, 5, {0x1F, 0x10, 0x10, 0x10,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // L
    {6, 5, {0x1F, 0x02, 0x04, 0x02,  0x1F, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // M
    {6, 5, {0x1F, 0x02, 0x04, 0x08,  0x1F, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // N
    {5, 5, {0x1F, 0x11, 0x11, 0x1F,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // O
    {5, 5, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // P
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // Q
    {5, 5, {0x1F, 0x05, 0x0D, 0x17,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // R
    {4, 5, {0x17, 0x15, 0x1D, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // S
    {4, 5, {0x01, 0x1F, 0x01, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // T
    {5, 5, {0x1F, 0x10, 0x10, 0x1F,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // U
    {8, 11, {0xF8, 0x01, 0xF8, 0x03,  0x00, 0x07, 0x00, 0x06,  0x00, 0x07, 0xF8, 0x03,  0xF8, 0x01, 0x00, 0x00,  0x00, 0x00}},   // V
    {4, 5, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // W
    {5, 5, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // X
    {5, 5, {0x17, 0x14, 0x14, 0x1F,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // Y
    {5, 5, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}}    // Z
    }
};

const Font14_t font_6x9 = {
    ' ', 27, 16, 7, 9,   //offset, numCharacters, stride, maxX, maxY
    {
    {7, 9, {0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // SPACE
    {7, 9, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF}},   // !
    {7, 9, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF}},   // "
    {7, 9, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF}},   // #
    {7, 9, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF}},   // $
    {7, 9, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF}},   // %
    {7, 9, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF}},   // &
    {7, 9, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF}},   // '
    {7, 9, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF}},   // (
    {7, 9, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF}},   // )
    {7, 9, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF}},   // *
    {7, 9, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF}},   // +
    {7, 9, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF}},   // ,
    {7, 9, {0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF}},   // -
    {3, 9, {0x80, 0x01, 0x80, 0x01,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}},   // .
    {7, 9, {0x80, 0x07, 0xC0, 0x03,  0xE0, 0x01, 0xF0, 0x00,  0x78, 0x00, 0x3C, 0x00,  0x1E, 0x00}},   // /
    {7, 9, {0xEE, 0x00, 0x01, 0x01,  0x01, 0x01, 0x01, 0x01,  0x01, 0x01, 0xEE, 0x00,  0x00, 0x00}},   // 0
    {7, 9, {0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0xEE, 0x00,  0x00, 0x00}},   // 1
    {7, 9, {0xE0, 0x00, 0x11, 0x01,  0x11, 0x01, 0x11, 0x01,  0x11, 0x01, 0x0E, 0x00,  0x00, 0x00}},   // 2
    {7, 9, {0x00, 0x00, 0x11, 0x01,  0x11, 0x01, 0x11, 0x01,  0x11, 0x01, 0xEE, 0x00,  0x00, 0x00}},   // 3
    {7, 9, {0x0E, 0x00, 0x10, 0x00,  0x10, 0x00, 0x10, 0x00,  0x10, 0x00, 0xEE, 0x00,  0x00, 0x00}},   // 4
    {7, 9, {0x0E, 0x00, 0x11, 0x01,  0x11, 0x01, 0x11, 0x01,  0x11, 0x01, 0xE0, 0x00,  0x00, 0x00}},   // 5
    {7, 9, {0xEE, 0x00, 0x11, 0x01,  0x11, 0x01, 0x11, 0x01,  0x11, 0x01, 0xE0, 0x00,  0x00, 0x00}},   // 6
    {7, 9, {0x01, 0x00, 0x01, 0x00,  0x01, 0x00, 0x01, 0x00,  0x01, 0x00, 0xEE, 0x00,  0x00, 0x00}},   // 7
    {7, 9, {0xEE, 0x00, 0x11, 0x01,  0x11, 0x01, 0x11, 0x01,  0x11, 0x01, 0xEE, 0x00,  0x00, 0x00}},   // 8
    {7, 9, {0x0E, 0x00, 0x11, 0x01,  0x11, 0x01, 0x11, 0x01,  0x11, 0x01, 0xEE, 0x00,  0x00, 0x00}},   // 9
    {7, 9, {0x00, 0x00, 0x00, 0x00,  0x83, 0x01, 0x83, 0x01,  0x00, 0x00, 0x00, 0x00,  0x00, 0x00}}    // :
    }
};