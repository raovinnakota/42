#include <stdlib.h>

char	*strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((*s + '0') == c)
		{
			(char *)(*s);
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		(char *)(*s);
		return (s);
	}
	else
		return NULL;
}
