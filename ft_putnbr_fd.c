

#include "libft.h"
#include <unistd.h>

void	ft_putnbr(int	nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(fd, '-', 1);
	}
	else if (nb > 9)
		ft_putnbr(nb / 10, fd);
	ft_putchar(nb % 10, fd);
}
