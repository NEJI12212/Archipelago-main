#include "sfx.h"

void playSFX()
{
    int val = crand() % (124 + 1);
    switch (val)
    {
        case 0:
            gvr_fn_sounds(0x2, 0x99, 0x83, 0);
            break;
        case 1:
            gvr_fn_sounds(0x8, 0x99, 0x83, 0);
            break;
        case 2:
            gvr_fn_sounds(0xA, 0x99, 0x83, 0);
            break;
        case 3:
            gvr_fn_sounds(0xB, 0x99, 0x83, 0);
            break;
        case 4:
            gvr_fn_sounds(0xD, 0x99, 0x83, 0);
            break;
        case 5:
            gvr_fn_sounds(0x10, 0x99, 0x83, 0);
            break;
        case 6:
            gvr_fn_sounds(0x12, 0x99, 0x83, 0);
            break;
        case 7:
            gvr_fn_sounds(0x13, 0x99, 0x83, 0);
            break;
        case 8:
            gvr_fn_sounds(0x14, 0x99, 0x83, 0);
            break;
        case 9:
            gvr_fn_sounds(0x15, 0x99, 0x83, 0);
            break;
        case 10:
            gvr_fn_sounds(0x16, 0x99, 0x83, 0);
            break;

        case 11:
            gvr_fn_sounds(0x1B, 0x99, 0x83, 0);
            break;
        case 12:
            gvr_fn_sounds(0x1C, 0x99, 0x83, 0);
            break;
        case 13:
            gvr_fn_sounds(0x1F, 0x99, 0x83, 0);
            break;
        case 14:
            gvr_fn_sounds(0x21, 0x99, 0x83, 0);
            break;
        case 15:
            gvr_fn_sounds(0x22, 0x99, 0x83, 0);
            break;
        case 16:
            gvr_fn_sounds(0x25, 0x99, 0x83, 0);
            break;
        case 17:
            gvr_fn_sounds(0x27, 0x99, 0x83, 0);
            break;
        case 18:
            gvr_fn_sounds(0x28, 0x99, 0x83, 0);
            break;
        case 19:
            gvr_fn_sounds(0x2A, 0x99, 0x83, 0);
            break;
        case 20:
            gvr_fn_sounds(0x19, 0x99, 0x83, 0);
            break;

        case 21:
            gvr_fn_sounds(0x2C, 0x99, 0x83, 0);
            break;
        case 22:
            gvr_fn_sounds(0x2D, 0x99, 0x83, 0);
            break;
        case 23:
            gvr_fn_sounds(0x31, 0x99, 0x83, 0);
            break;
        case 24:
            gvr_fn_sounds(0x32, 0x99, 0x83, 0);
            break;
        case 25:
            gvr_fn_sounds(0x34, 0x99, 0x83, 0);
            break;
        case 26:
            gvr_fn_sounds(0x36, 0x99, 0x83, 0);
            break;
        case 27:
            gvr_fn_sounds(0x37, 0x99, 0x83, 0);
            break;
        case 28:
            gvr_fn_sounds(0x39, 0x99, 0x83, 0);
            break;
        case 29:
            gvr_fn_sounds(0x3A, 0x99, 0x83, 0);
            break;
        case 30:
            gvr_fn_sounds(0x3B, 0x99, 0x83, 0);
            break;

        case 31:
            gvr_fn_sounds(0x3D, 0x99, 0x83, 0);
            break;
        case 32:
            gvr_fn_sounds(0x3E, 0x99, 0x83, 0);
            break;
        case 33:
            gvr_fn_sounds(0x42, 0x99, 0x83, 0);
            break;
        case 34:
            gvr_fn_sounds(0x43, 0x99, 0x83, 0);
            break;
        case 35:
            gvr_fn_sounds(0x45, 0x99, 0x83, 0);
            break;
        case 36:
            gvr_fn_sounds(0x48, 0x99, 0x83, 0);
            break;
        case 37:
            gvr_fn_sounds(0x49, 0x99, 0x83, 0);
            break;
        case 38:
            gvr_fn_sounds(0x4B, 0x99, 0x83, 0);
            break;
        case 39:
            gvr_fn_sounds(0x4C, 0x99, 0x83, 0);
            break;
        case 40:
            gvr_fn_sounds(0x4D, 0x99, 0x83, 0);
            break;

        case 41:
            gvr_fn_sounds(0x4E, 0x99, 0x83, 0);
            break;
        case 42:
            gvr_fn_sounds(0x4F, 0x99, 0x83, 0);
            break;
        case 43:
            gvr_fn_sounds(0x50, 0x99, 0x83, 0);
            break;
        case 44:
            gvr_fn_sounds(0x51, 0x99, 0x83, 0);
            break;
        case 45:
            gvr_fn_sounds(0x54, 0x99, 0x83, 0);
            break;
        case 46:
            gvr_fn_sounds(0x57, 0x99, 0x83, 0);
            break;
        case 47:
            gvr_fn_sounds(0x58, 0x99, 0x83, 0);
            break;
        case 48:
            gvr_fn_sounds(0x60, 0x99, 0x83, 0);
            break;
        case 49:
            gvr_fn_sounds(0x61, 0x99, 0x83, 0);
            break;
        case 50:
            gvr_fn_sounds(0x62, 0x99, 0x83, 0);
            break;

        case 51:
            gvr_fn_sounds(0x63, 0x99, 0x83, 0);
            break;
        case 52:
            gvr_fn_sounds(0x68, 0x99, 0x83, 0);
            break;
        case 53:
            gvr_fn_sounds(0x74, 0x99, 0x83, 0);
            break;
        case 54:
            gvr_fn_sounds(0x75, 0x99, 0x83, 0);
            break;
        case 55:
            gvr_fn_sounds(0x76, 0x99, 0x83, 0);
            break;
        case 56:
            gvr_fn_sounds(0x77, 0x99, 0x83, 0);
            break;
        case 57:
            gvr_fn_sounds(0x78, 0x99, 0x83, 0);
            break;
        case 58:
            gvr_fn_sounds(0x7A, 0x99, 0x83, 0);
            break;
        case 59:
            gvr_fn_sounds(0x7C, 0x99, 0x83, 0);
            break;
        case 60:
            gvr_fn_sounds(0x7D, 0x99, 0x83, 0);
            break;
            
        case 61:
            gvr_fn_sounds(0x80, 0x99, 0x83, 0);
            break;
        case 62:
            gvr_fn_sounds(0x82, 0x99, 0x83, 0);
            break;
        case 63:
            gvr_fn_sounds(0x8B, 0x99, 0x83, 0);
            break;
        case 64:
            gvr_fn_sounds(0x8C, 0x99, 0x83, 0);
            break;
        case 65:
            gvr_fn_sounds(0x8D, 0x99, 0x83, 0);
            break;
        case 66:
            gvr_fn_sounds(0x8E, 0x99, 0x83, 0);
            break;
        case 67:
            gvr_fn_sounds(0x8F, 0x99, 0x83, 0);
            break;
        case 68:
            gvr_fn_sounds(0x90, 0x99, 0x83, 0);
            break;
        case 69:
            gvr_fn_sounds(0x91, 0x99, 0x83, 0);
            break;
        case 70:
            gvr_fn_sounds(0x92, 0x99, 0x83, 0);
            break;

        case 71:
            gvr_fn_sounds(0x93, 0x99, 0x83, 0);
            break;
        case 72:
            gvr_fn_sounds(0x94, 0x99, 0x83, 0);
            break;
        case 73:
            gvr_fn_sounds(0xA0, 0x99, 0x83, 0);
            break;
        case 74:
            gvr_fn_sounds(0xA1, 0x99, 0x83, 0);
            break;
        case 75:
            gvr_fn_sounds(0xA2, 0x99, 0x83, 0);
            break;
        case 76:
            gvr_fn_sounds(0xAF, 0x99, 0x83, 0);
            break;
        case 77:
            gvr_fn_sounds(0xB0, 0x99, 0x83, 0);
            break;
        case 78:
            gvr_fn_sounds(0xC9, 0x99, 0x83, 0);
            break;
        case 79:
            gvr_fn_sounds(0xD3, 0x99, 0x83, 0);
            break;
        case 80:
            gvr_fn_sounds(0xD4, 0x99, 0x83, 0);
            break;

        case 81:
            gvr_fn_sounds(0xD5, 0x99, 0x83, 0);
            break;
        case 82:
            gvr_fn_sounds(0xD6, 0x99, 0x83, 0);
            break;
        case 83:
            gvr_fn_sounds(0xD8, 0x99, 0x83, 0);
            break;
        case 84:
            gvr_fn_sounds(0xDA, 0x99, 0x83, 0);
            break;
        case 85:
            gvr_fn_sounds(0xDB, 0x99, 0x83, 0);
            break;
        case 86:
            gvr_fn_sounds(0xE0, 0x99, 0x83, 0);
            break;
        case 87:
            gvr_fn_sounds(0xE1, 0x99, 0x83, 0);
            break;
        case 88:
            gvr_fn_sounds(0xE2, 0x99, 0x83, 0);
            break;
        case 89:
            gvr_fn_sounds(0xE3, 0x99, 0x83, 0);
            break;
        case 90:
            gvr_fn_sounds(0xE4, 0x99, 0x83, 0);
            break;

        case 91:
            gvr_fn_sounds(0xE8, 0x99, 0x83, 0);
            break;
        case 92:
            gvr_fn_sounds(0xF4, 0x99, 0x83, 0);
            break;
        case 93:
            gvr_fn_sounds(0xF4, 0x99, 0x83, 0);
            break;
        case 94:
            gvr_fn_sounds(0xF5, 0x99, 0x83, 0);
            break;
        case 95:
            gvr_fn_sounds(0xF8, 0x99, 0x83, 0);
            break;
        case 96:
            gvr_fn_sounds(0xF9, 0x99, 0x83, 0);
            break;
        case 97:
            gvr_fn_sounds(0xFA, 0x99, 0x83, 0);
            break;
        case 98:
            gvr_fn_sounds(0xFD, 0x99, 0x83, 0);
            break;
        case 99:
            gvr_fn_sounds(0xFE, 0x99, 0x83, 0);
            break;
        case 100:
            gvr_fn_sounds(0xFF, 0x99, 0x83, 0);
            break;

        case 101:
            gvr_fn_sounds(0x101, 0x99, 0x83, 0);
            break;
        case 102:
            gvr_fn_sounds(0x105, 0x99, 0x83, 0);
            break;
        case 103:
            gvr_fn_sounds(0x106, 0x99, 0x83, 0);
            break;
        case 104:
            gvr_fn_sounds(0x109, 0x99, 0x83, 0);
            break;
        case 105:
            gvr_fn_sounds(0x10A, 0x99, 0x83, 0);
            break;
        case 106:
            gvr_fn_sounds(0x10B, 0x99, 0x83, 0);
            break;
        case 107:
            gvr_fn_sounds(0x10C, 0x99, 0x83, 0);
            break;
        case 108:
            gvr_fn_sounds(0x10D, 0x99, 0x83, 0);
            break;
        case 109:
            gvr_fn_sounds(0x10E, 0x99, 0x83, 0);
            break;
        case 110:
            gvr_fn_sounds(0x10F, 0x99, 0x83, 0);
            break;

        case 111:
            gvr_fn_sounds(0x110, 0x99, 0x83, 0);
            break;
        case 112:
            gvr_fn_sounds(0x111, 0x99, 0x83, 0);
            break;
        case 113:
            gvr_fn_sounds(0x112, 0x99, 0x83, 0);
            break;
        case 114:
            gvr_fn_sounds(0x113, 0x99, 0x83, 0);
            break;
        case 115:
            gvr_fn_sounds(0x114, 0x99, 0x83, 0);
            break;
        case 116:
            gvr_fn_sounds(0x119, 0x99, 0x83, 0);
            break;
        case 117:
            gvr_fn_sounds(0x11A, 0x99, 0x83, 0);
            break;
        case 118:
            gvr_fn_sounds(0x11B, 0x99, 0x83, 0);
            break;
        case 119:
            gvr_fn_sounds(0x11C, 0x99, 0x83, 0);
            break;
        case 120:
            gvr_fn_sounds(0x11D, 0x99, 0x83, 0);
            break;

        case 121:
            gvr_fn_sounds(0x11E, 0x99, 0x83, 0);
            break;
        case 122:
            gvr_fn_sounds(0x120, 0x99, 0x83, 0);
            break;
        case 123:
            gvr_fn_sounds(0x121, 0x99, 0x83, 0);
            break;
        case 124:
            gvr_fn_sounds(0x125, 0x99, 0x83, 0);
            break;

      default:
        gvr_fn_sounds(0x8C, 0x99, 0x83, 0);
    }
}