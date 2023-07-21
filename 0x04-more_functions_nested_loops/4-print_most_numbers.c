#include "main.h"
/**
*print_most_numbers-checksforchecksforadigit(0through9).
*Return:Always0.
*/
void print_most_numbers(void)
{
int c;
for (c = 48; c < 58; c++)
{
if (c != 50)
{
if (c != 52)
{
_putchar(c);
}
}
}
_putchar('\n');
}

