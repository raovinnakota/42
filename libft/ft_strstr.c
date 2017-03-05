#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	lenh;
	int	lenn;
	
	lenh = 0;
	lenn - 0;
	while (*haystack && (*haystack != *needle))
		haystack++;
	if (*haystack == '\0')
		return (NULL);
	while (*haystack && *needle && (*haystack == *needle)
	{
		haystack++;
		needle++;
		lenh++;
		lenn++;
	}
	if (*needle)
		ft_strstr(haystack, needle);
	return ((char*)(haystack - lenh));
}
