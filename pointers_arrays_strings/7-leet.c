#include "main.h"
#include <stdio.h>

/**
 * leet - encode into 1337speak
 * @t: Input value
 * Return: n value
 */

char *leet(char *t)
{
	int i;

	for (i = 0; input_string[i] != '\0'; i++)
		switch (tolower(input_string[i])) {
            case 'a':
                input_string[i] = '4';
                break;
            case 'b':
                input_string[i] = '8';
                break;
            case 'c':
                input_string[i] = '<';
                break;
            case 'e':
                input_string[i] = '3';
                break;
            case 'g':
                input_string[i] = '9';
                break;
            case 'h':
                input_string[i] = '#';
                break;
            case 'i':
                input_string[i] = '1';
                break;
            case 'l':
                input_string[i] = '|';
                break;
            case 'o':
                input_string[i] = '0';
                break;
            case 's':
                input_string[i] = '$';
                break;
            case 't':
                input_string[i] = '7';
                break;
            case 'z':
                input_string[i] = '2';
                break;
            // Default case for other characters, do nothing
            default:
                break;
        }
    }
}

int main() {
    char input_string[] = "Hello, World!";
    to_leet_speak(input_string);
    printf("%s\n", input_string);

    return 0;
}
