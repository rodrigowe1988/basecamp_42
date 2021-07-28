char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i - 1] > 47 && str[i - 1] < 58)
			|| (str[i - 1] > 64 && str[i - 1] < 91)
			|| (str[i - 1] > 96 && str[i - 1] < 123))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
