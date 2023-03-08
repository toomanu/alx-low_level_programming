#include "main.h"
#include <stdio.h>
#include <string.h>


void _print_rev_recursion(char *s) 
{
int r = strlen(s);
_putchar(s[r]);

if (s[r] != '\0')
{
    _putchar('\n');
}
else
{
    _putchar(s[]);
    _print_rev_recursion(s-1);
}

}
