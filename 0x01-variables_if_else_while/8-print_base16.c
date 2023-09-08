#include <stdio.h>
/**
 * main - prints all numbers of base 16.
(*
 * Return: 0 on success
 */
int main(void)
{
	int k = '0';

	while (k <= '9')
	{
		putchar(k);
		k++;
	}
	k = 'a';
	while (k <= 'f')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);

}
