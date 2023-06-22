#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Variable text
 * Return: Always 0.
 */

int _isupper(int c)
{
  
int i = 0;

char tab[] = {A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, X, Y, Z};

for (i; tab[i] != '\0'; i++)
{
if (c == tab[i])
return (1);
}
return (0);
}
