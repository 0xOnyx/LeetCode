

#include <stdio.h>



int reverse(int x)
{
	int res; 

	res = 0;

	while( x > 0)
	{
		res *= 10;
		res += x % 10;
		x /= 10;
	}

	return res;

}



int main(int argc, char **argv)
{

	int res = reverse(120);

	printf("%d\n", res);
	return 0;
}
