#include <unistd.h>

/**
 * main - Write a C program that prints exactly and that piece of art is useful - Dora Korpar, 2015-10-19, followed by a new line, to the standard error
 *
 * Return: Always 0 (Success)
 */
int main() {
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, message, 51);
    return 1;
}

