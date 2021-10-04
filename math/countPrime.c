
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int countPrimes(int n)
{
	bool *array;
	array = (bool *)malloc(sizeof(bool) * n);

	memset(array, true, sizeof(bool) * n);


	int i;
	i = 2;
	while( i * i < n)
	{
		if(array[i] == false)
			continue;

		int j;
		j = i * i;

		while(j < n )
		{
			printf("j = > %d\n", j);
			array[j] = false;
			j = j + i;
		}
		i++;
		printf("i => %d", i);
	}
	
	int count;

	count = 0;
	i = 2;

	while(i < n)
	{
		if(array[i] == true)
		{
			printf("%d, ", i);
			count++;
		}
		i++;
	}
;

	return count;
}



int main(int argc, char **argv)
{
	int ret;
	ret = countPrimes(17);

	printf("%d\n", ret);

	return 0;
}
