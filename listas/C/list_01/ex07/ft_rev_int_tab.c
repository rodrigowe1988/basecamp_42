void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	size -= 1;
	while (i < size)
	{
		ft_swap(&tab[i++], &tab[size--]);
	}
}

int	main(void)
{
	int	size = 10;
	int	array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	// int	size = 2;
	// int	array[2] = {0, 1};
	// int	size = 1;
	// int	array[1] = {50};
	print_int_array(array, size);
	ft_rev_int_tab(array, size);
	print_int_array(array, size);
}