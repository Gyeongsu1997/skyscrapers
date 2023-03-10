int	view_count_asc(int *arr)
{
	int	i;
	int	max;
	int	cnt;

	i = 1;
	cnt = 1;
	max = arr[0];
	if (max == 4)
		return (1);
	while (i < 4)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			cnt++;
		}
		i++;
	}
	return (cnt);
}

int	view_count_desc(int *arr)
{
	int	i;
	int	max;
	int	cnt;

	i = 2;
	cnt = 1;
	max = arr[3];
	if (max == 4)
		return (1);
	while (i >= 0)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			cnt++;
		}
		i--;
	}
	return (cnt);
}

int	view_count(int *arr, int dir)
{
	int	cnt;

	if (!dir)
		cnt = view_count_asc(arr);
	else
		cnt = view_count_desc(arr);
	return (cnt);
}

int	compare(int *arr, int clue, int dir)
{
	if (view_count(arr, dir) == clue)
		return (1);
	else
		return (0);
}