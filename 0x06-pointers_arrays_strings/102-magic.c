#include <stdio.h>
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
/*
* The added line of code below uses pointer arithmetic to access a memory location
* five integers ahead of the address pointed by 'p' and assigns the value 98 to that location.
*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return 0;
}

