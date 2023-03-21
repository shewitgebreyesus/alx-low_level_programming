#include "main.h"

/**
 * Description - print _putchar that is on pchar[] array  
 *
*/

int main(void)
{
	int var = 0;
	char pchar[10] = "_putchar\n";
	while (var < 9)
	{
		_putchar(pchar[var]);
		var++;
	}
	return (0);
}

