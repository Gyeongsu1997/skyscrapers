int	compare(int *arr, int clue, int dir);

void	init_cnt(int *cnt)
{
	int	i;

	i = 0;
	while (i < 4)
		cnt[i++] = 0;
}

int	is_twice(int arr[4][4])
{
	int	i;
	int	j;
	int	cnt[4];

	i = -1;
	while (++i < 4)
	{
		init_cnt(cnt);
		j = -1;
		while (++j < 4)
		{
			if (arr[i][j])
				cnt[arr[i][j] - 1] += 1;
		}
		j = -1;
		while (++j < 4)
			if (cnt[j] >= 2)
				return (1);
	}
	return (0);
}

int	is_valid(int arr[4][4], int arr_sub[4][4], int clue[4][4], int n)
{
	int	x;
	int	y;

	x = n / 4;
	y = n % 4;
	if (is_twice(arr) || is_twice(arr_sub))
		return (0);
	if (y == 3)
	{
		if (!(compare(arr[x], clue[2][x], 0)
			&& compare(arr[x], clue[3][x], 1)))
			return (0);
	}
	if (x == 3)
	{
		if (!(compare(arr_sub[y], clue[0][y], 0)
			&& compare(arr_sub[y], clue[1][y], 1)))
			return (0);
	}
	if (n == 15)
		return (2);
	return (1);
}

void	put_arr(int arr[4][4], int arr_sub[4][4], int n, int i)
{
	int	x;
	int	y;

	x = n / 4;
	y = n % 4;
	arr[x][y] = i;
	arr_sub[y][x] = i;
}

int	backtrack(int arr[4][4], int arr_sub[4][4], int clue[4][4], int n)
{
	int	res;
	int	i;
	int	val;

	res = 0;
	i = 0;
	while (++i <= 4)
	{
		put_arr(arr, arr_sub, n, i);
		val = is_valid(arr, arr_sub, clue, n);
		if (!val)
			continue ;
		if (val == 2)
			res = 1;
		else
			res = backtrack(arr, arr_sub, clue, n + 1);
		if (res)
			break ;
	}
	if (!res)
		put_arr(arr, arr_sub, n, 0);
	return (res);
}