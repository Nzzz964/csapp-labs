#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "show_bytes.h"

void show_hex_bytes(byte_pointer const start, size_t const len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_bin_bytes(byte_pointer const start, size_t const len)
{
    unsigned char byte;
    int i, j;
    for (i = 0; i < len; i++)
    {
        //从最高位开始
        for (j = 7; j >= 0; j--)
        {
            byte = (start[i] >> j) & 1;
            printf("%u", byte);
        }
        printf(" ");
    }
    printf("\n");
}