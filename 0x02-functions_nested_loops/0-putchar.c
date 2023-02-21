#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void){
	char arr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;
	while (i <= 7)
	{
		_putchar(arr[i]);
		i++;
	}
	return 0;
}
