

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	while (len)
	{
		if (s[len] == c)
			return ((char*)(s + len));
		len--;
	}
	if (s[len] == c)
		return ((char*)(s + len));
	return (0);
}
