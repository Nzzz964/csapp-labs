#include <stdio.h>
#include <assert.h>
#include "show_bytes.h"

//使用bis指令，这种修改就是在m为1的每个位置，将z设置为1
int bis(int x, int m)
{
    int result = x | m;
    return result;
}

//使用bic指令，这种修 改就是在m为0的每个位置，将z设置为0
int bic(int x, int m)
{
    int result = x & m;
    return result;
}

int main()
{
    int result1 = bis(0b00001110, 0b10110001);
    show_hex_bytes((byte_pointer)&result1, sizeof(result1));
    show_bin_bytes((byte_pointer)&result1, sizeof(result1));
    assert(result1 == 0b10111111);

    int result2 = bic(0b11111111, 0b10110001);
    assert(result2 == 0b10110001);
    show_hex_bytes((byte_pointer)&result2, sizeof(result2));
    show_bin_bytes((byte_pointer)&result2, sizeof(result2));
}