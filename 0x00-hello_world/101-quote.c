#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 * Return: always 0 (Success)
 */
int main(void)
{
	 const char* str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(STDERR_FILENO, str, strlen(str));
	return 1;
}
