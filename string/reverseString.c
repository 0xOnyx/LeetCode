

#include <stdio.h>





void ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}


void ft_reverseString(char *s, int sSize)
{
	int lenght;
	int i;
	


	lenght = sSize / 2;
	i = 0;

	while(i < lenght)
	{
		int position;
		position = sSize - 1 - i;
		ft_swap(s+i, s+position);
		i++;

	}

}


int main(int argc, char **argv)
{
	char string[10] = "HelloWorld";
	
	puts(string);

	ft_reverseString(string, 10);

	puts(string);

	return 0;
}
