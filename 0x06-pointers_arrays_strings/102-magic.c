#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
* Add one line of code here to make the program
* print "a[2] = 98\n" without modifying p or using a.
*/
;

*(p + 5) = 98;

/* This prints "a[2] = 98\n" */
printf("a[2] = %d\n", a[2]);
return (0);
}

