#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Variable text
 * Return: Always 0.
 */

int _isupper(int c)
{
    int i = 0;
  
    char tab[] = "ABCDEFGHIJKLMNOPQRSTXYZ";

    for (i; tab[i] != '\0'; i++)
    {
        if (c == tab[i])
            return (1);
    }
    return (0);
}
