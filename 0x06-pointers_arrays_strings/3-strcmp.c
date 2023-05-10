#include "main.h"
/**
 * _strcmp - takes two strings (s1 and s2) as parametres and compares them.
 * @s1: passed as parameters to the string.
 * @s2: passed as a parameter to the string.
 *
 * Return: returns an integer that is negative if s1 is less than s2.
 * 0 if they are equal, or positive is s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
