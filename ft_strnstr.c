
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	if (*needle == 0)
		return ((char *)haystack);
	j = 0;
	while (j < len && haystack[j])
	{
		k = j;
		i = 0;
		while (haystack[k] == needle[i] && (j + i) < len)
		{
			i++;
			if (needle[i] == '\0')
				return ((char *)(haystack + (k - i + 1)));
			k++;
		}
		j++;
	}
	return (0);
}
