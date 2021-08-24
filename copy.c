#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/* 
    char *s - ref of strings in C 
    e.g:
    
    char *s = "HI!"
    printf("%c\n", *s) = H
    printf("%c\n", *(s + 1)) = I

    A string is the address of its first character
 */

int main(void)
{
    char *s = get_string("s: ");
    char *t = malloc(strlen(s) + 1);

    if (t == NULL)
    {
        return 1;
    }

    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    if (strlen(t) > 0)
    {
        toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
}