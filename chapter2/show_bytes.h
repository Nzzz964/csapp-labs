#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_hex_bytes(byte_pointer const start, size_t const len);

void show_bin_bytes(byte_pointer const start, size_t const len);