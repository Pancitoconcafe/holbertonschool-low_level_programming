#include <unistd.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/* more headers goes there */

/**
 *times_table - check the code
 *void: Input int
 * Description:  The script pritn the hour
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i;
	int j;
	int k;

for (i = 0; i <= 9; i++)
{
_putchar('\n');
for (j = 0; j <= 9; j++)
{	
k = i * j;
if ((k / 10) == 0);						
{
if (j != 0)
{
putchar(' ');
putchar(k + '0');
}
if(j!= 9)
{
_putchar(',');
_putchar(' ');
}
}						
else	
{															_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
if (j == 9)
{									
_putchar(',');
_putchar(' ');														}	
}
}
}
}
