#include <stdio.h>
/**
 * main - prints the numbers between 012 and 789
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, x, y;

	i = 48;
	x = 48;
	y = 48;

	while (x < 58)
	{
		i = 48;
		while (i < 58)
		{
			y = 48;
			while (y < 58)
			{
				if (x != i && x != y && i != y && x < i && i < y)
				{
					putchar(x);
					putchar(i);
					putchar(y);
					if (i == 56 && x == 55 && y == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				y++;
			}
			i++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
