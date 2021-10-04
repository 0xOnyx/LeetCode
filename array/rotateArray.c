

#include <stdio.h>

void print_array(int *array, int lenght);


void ft_memcpy_array(int *dest, int *src, int lenght)
{
	int i;
	i = 0;

	while(i < lenght)
	{
		dest[i] = src[i];
		i++;
	}
}


void rotate_array_v3(int *array, int lenght, int k)
{






}




void rotate_array_v2(int *array, int lenght, int k)
{
/*
array[3] = array[0] 
array[6] = array[3]
array[1] = array[6]
array[4] = array[1]
array[7] = array[4]
array[2] = array[7]
array[5] = array[2]
array[0] = array[5]



0	+3	1
3	+3 	2
6	+3	3


1	+3	4	
4	+3	5
7	+3	6	

2	+3	7
5	+3	8
*/

	int i;
	int j;
	int y;
	int current;

	i = 0;
	j = 0;
	y = 0;

	current = array[j];

	while(i < lenght - 1)
	{
		int tmp;

		printf("value current=> %d index => %d test=> %d\n", current, j, array[j]);
//		printf("from => %d\n",  j);
		if(j+k >= lenght)
		{
			y++;
			j = y;
		
		}
		else 
			j += k;

//		printf("iteration => %d copy tmp => %d to => %d\n", i, tmp, j );	
		tmp = array[j];
		array[j] = current;
		current = tmp;

		i++;
	}
	
	array[0] = current;
}


void rotate_array_v1(int *array, int lenght, int k)
{
	int old_array[lenght];
	int i;

	ft_memcpy_array(old_array, array, lenght);

	i = 0;

	while( i < lenght)
	{
		int index;
		index = i + k;

		if(index >= lenght)
			index = i - (lenght - k );
		array[index] = old_array[i];
		i++;
	}

}


int main(int argc, char **argv)
{
	int nums[] = {1, 2, 3, 4, 5, 6, 7, 8};
	
	print_array(nums, 8);
//	rotate_array_v1(nums,9, 3);
//	rotate_array_v2(nums,8, 5);
	rotate_array_v3(nums,8, 5);
	print_array(nums, 8);

	return 0;
}



void print_array(int *array, int lenght)
{
	int i;
	i = 0;

	putchar('[');
	while(i < lenght)
	{	
		printf( "%d", array[i]);
		if(i < lenght -1)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar(']');
	putchar('\n');

}
