#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ls1, ls2, lsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	sout = malloc(lsout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < ls1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - ls1];
https://github.com/engrproama/alx-low_level_programming/blob/master/0x0C-more_malloc_free/1-string_nconcat.c#:~:text=s2%5Bi%20%2D%20ls1%5D%3B-,sout%5Bi%5D%20%3D%20%27%5C0%27%3B,-return%20(sout)%3B
