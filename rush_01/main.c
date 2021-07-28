#include <unistd.h>

int main(int argc, char **argv)
{
	char args[16];
	int j;
	int i;

	if (argc !=2)
	{
		write(1, &"Numero de parametros invalido", 29);
		return (0);
	}
	i = 0;
	j = 0; 
	while (i < 31 || j < 16)
	{
		if(argv[1][i] != '\0')
		{
			args[j] = argv[1][i];
			j++;
		}
		j++;
	}
}