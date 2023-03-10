#include <unistd.h>

int		backtrack(int arr[4][4], int arr_sub[4][4], int clue[4][4], int n);

void	init_arr(int arr[4][4], int arr_sub[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			arr[i][j] = 0;
			arr_sub[j][i] = 0;
			j++;
		}
		i++;
	}
}

void	init_clue(int clue[4][4], char *str)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (*str != ' ')
			{
				clue[i][j] = *str - 48;
				j++;
			}
			str++;
		}
		i++;
	}
}

void	write_arr(int arr[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			c = arr[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		c = arr[i][j] + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
		i++;
	}
}

int	check_input(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (!(str[i] >= '1' && str[i] <= '4'))
				return (0);
		}
		else
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	int	arr[4][4];
	int	arr_sub[4][4];
	int	clue[4][4];

	if (argc != 2 || !check_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	init_clue(clue, argv[1]);
	init_arr(arr, arr_sub);
	if (backtrack(arr, arr_sub, clue, 0))
		write_arr(arr);
	else
		write(1, "Error\n", 6);
	return (0);
}