#include <cctype>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int isUppercase(char c) {
    if (isupper(c)) {
        return 1;
    } else {
        return 0;
    }
}
