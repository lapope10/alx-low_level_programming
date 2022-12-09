<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Print the alphabet in lowercase letters, except for e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
         	if (letter != 'e' && letter != 'q')
                putchar(letter);
      	}
        putchar('\n');

 return (0);
}
=======

>>>>>>> 0d65b42ebf35158e1038c5c7bbeff31d73ed866a
