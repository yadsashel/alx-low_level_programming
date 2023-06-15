#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void removeTrailingWhitespace(char *str) {
    int len = strlen(str);
    int i;

    for (i = len - 1; i >= 0; i--) {
        if (!isspace(str[i])) {
            break;
        }
    }

    str[i + 1] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing whitespace
    removeTrailingWhitespace(str);

    printf("Modified string: %s\n", str);

    return 0;
}

int main(void)
{ 
	printf("with proper grammar, but the outcome is a piece of art,\n");
	
	return (0);
}
