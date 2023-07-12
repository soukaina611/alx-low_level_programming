#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - function pointer two dimentional array
 *@width: width
 *@height: height
 *Return:pointer to a 2 dimensional array of integers
*/

int **alloc_grid(int width, int height)
{
int **ac;
int a, b;

if (width <= 0 || height <= 0)
return (NULL);

ac = malloc(sizeof(int *) * height);

if (ac == NULL)
return (NULL);

for (a = 0; a < height ; a++)
{
ac[a] = malloc(sizeof(int) * width);

if (ac[a] == NULL)
{
for (; a >= 0; a++)
{
free(ac[a]);
}
free(ac);
return (NULL);
}
}
for (a = 0; a < height ; a++)
for (b = 0; b < width; b++)
{
ac[a][b] = 0;
}
return (ac);
}


