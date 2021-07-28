void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	width;
	int	height;

	width = 1;
	while (width <= y)
	{
		height = 1;
		while (height <= x)
		{
			if ((height == 1 && width == 1) || (height == 1 && width == y))
				ft_putchar('A');
			else if ((height == x && width == 1) || (height == x && width == y))
				ft_putchar('C');
			else if ((height > 1 && height < x) && (width == 1 || width == y))
				ft_putchar('B');
			else if ((width > 1 && width < y) && (height == 1 || height == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			height++;
		}
		ft_putchar('\n');
		width++;
	}
}	
