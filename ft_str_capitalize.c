

char	*ft_str_capitalize(char *str)
{
	int first;

	first = 1;
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9'))
		{
			if (first && *str >= 'a' && *str <= 'z')
				*str += 32;
			if (!first && *str >= 'A' && *str <= 'Z')
				*str -= 32;
			first = 0;
		}
		else
			first = 1;
		str++;
	}
	return (str);
}
