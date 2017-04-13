

#include "libft.h"

void	ft_putnbr(int	nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	else if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10);
}
