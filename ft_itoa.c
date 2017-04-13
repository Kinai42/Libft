
#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	int	nlen;
	char	*fresh;

	nlen = ft_digitlen(n);
	if (!(fresh = (char *)malloc(sizeof(char) * nlen + 1)))
		return (0);
	fresh[nlen] = '\0';
	nlen -= 1;
	if (n < 0)
	{
		n = -n;
		fresh[0] = '-';
	}
	while (nlen >= 0)
	{
		fresh[nlen--] = (n % 10) + '0';
		n /= 10;
	}
	return (fresh);
}
