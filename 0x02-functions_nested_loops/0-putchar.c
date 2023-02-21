#include "main.h"
/**
 * main - prints _putchar, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char fel[] = "_putchar";

	int f;

	for (f = 0; f < 8; f++)
	{
		_putchar(fel[f]);
	}
	_putchar('\n');
	return (0);
}
