#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	len;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		len = 0;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
			len++;
			if (*needle == '\0')
				return ((char*)(haystack - len));
		}
		haystack = haystack - len;
		needle = needle - len;
		haystack++;
	}
	return (NULL);
}
