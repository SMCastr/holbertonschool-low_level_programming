#include "main.h"

/**
 * string_nconcat - concatenates string to n bytes
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to concatenate
 *
 * Return: ptr to new allocated spacet
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, len = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
		len++;
	}
	if (s2 == NULL)
	{
		s2 = "";
		len2++;
	}
	for (i = 0; s1[i] != '\0'; i++, len++)
		;
	for (i = 0; s2[i] != '\0' &&  i < n; i++, len2++)
		;
	s3 = malloc((sizeof(char) * len) + (sizeof(char) * len2) + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
		s3[i] = s2[j];
	s3[i] = '\0';
	return (s3);
}
