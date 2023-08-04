#ifndef main_h
#define main_h

#include <stdio.h>

int _putchar(char c);

unsigned int binary_to_uint(const char *binary_num);

void print_binary(unsigned long int number);

int get_bit(unsigned long int numb, unsigned int idx);

int set_bit(unsigned long int *num, unsigned int i);

int clear_bit(unsigned long int *num, unsigned int i);

unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
