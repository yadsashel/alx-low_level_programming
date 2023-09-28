#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') // Check if we have reached the end of the string (null terminator).
    {
        putchar('\n'); // Print a newline character to move to the next line.
        return; // Exit the function.
    }

    putchar(*s); // Print the current character.
    _puts_recursion(s + 1); // Recursively call the function with the next character.
}

