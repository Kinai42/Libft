
#include "libft.h"

int	ft_digitlen(int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size += 1;
		n = -n;
	}
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size += 1);
}
