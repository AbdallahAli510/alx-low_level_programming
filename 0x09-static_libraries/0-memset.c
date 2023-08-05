#include "main.h"
/**
* _memset - fill a blockofmemorywithaspecificvalue
* @s: starting addressofmemorytobefilled
* @b: the desiredvalue
* @n: numberofbytes to be changed
* Return:changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}

