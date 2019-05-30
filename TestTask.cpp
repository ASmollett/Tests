int summofmins(int *array)
{
	int sol;
	int i;
	int min1;
	int min2;
	int count1;
	int count2;
	
	if (array[0] < array[1])
	{
		min1 = array[0];
		min2 = array[1];
		count1 = 0;
		count2 = 1;
	} else
		{
			min1 = array[1];
			min2 = array[0];
			count1 = 1;
			count2 = 0;
		}
	
	for (i = 0; i < sizeof(array) / sizeof(*array); i++)
	{
		if (array[i] < min1)
		{
			min2 = min1;
			count2 = count1;
			min1 = a;
			count1 = i;
		}
		if ((array[i] < min2)&&(i != count1))
		{
			min2 = array[i];
			count2 = i;
		}
	}

	sol = min1 + min2;

	return sol;
}