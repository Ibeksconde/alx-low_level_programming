#include"main.h"
/**
* print_alphabet - function to print the alphabet
*
* Description: prints the alphabet in lowercase
*/
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar(10);
}
