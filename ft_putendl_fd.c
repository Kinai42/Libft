
#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, fd)
{
	ft_putstr_fd(s, fd);
	write(1, '\n', 1);
}
