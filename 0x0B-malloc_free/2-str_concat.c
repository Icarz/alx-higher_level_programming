#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string (s1 + s2), or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
int len1 = 0, len2 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* Calculate the lengths of s1 and s2 */
while (s1[len1])
len1++;
while (s2[len2])
len2++;
/* Allocate memory for concatenated string (+1 for null terminator) */
concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat_str == NULL)
return (NULL);
/* Copy s1 to concat_str */
for (i = 0; i < len1; i++)
concat_str[i] = s1[i];
/* Copy s2 to concat_str */
for (j = 0; j < len2; j++)
concat_str[i + j] = s2[j];
/* Add null terminator */
concat_str[len1 + len2] = '\0';
return (concat_str);
}
