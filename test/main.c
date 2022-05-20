#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main-Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len1, len2;
	//unsigned int ui;
	//void *addr;

	len1 = _printf("let's try to printf a simple sentence.\n");
	len2 = printf("let's try to printf a simple sentence.\n");
	_printf("my name is %s, with a first letter of %c ,i dont like %%\n", "Gift", 'G');

	return (0);
}

