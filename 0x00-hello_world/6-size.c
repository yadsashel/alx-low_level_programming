#include <stdio.h>

/**
 * main - Write a C program that prints the size of various types on the computer it is compiled and run on
 *
 * Return: Always 0 (Success)
 */

int main() 
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));

    return 0;
}

