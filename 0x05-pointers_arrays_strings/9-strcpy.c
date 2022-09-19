/**
 * _strcpy - copies a str from one pointer to another*
 *including the terminating null byte (\0)
 *
 * @src: source of string parameter input
 * @dest: string dest
 *
 * Return: pointer to parameter input
 */

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
