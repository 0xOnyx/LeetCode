
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>

int hammingWeight(uint32_t n)
{
	int res;
	int i;

	res = 0;
	i = 0;

	while(i < 32)
	{
		if(n & 1)
			res++;
		n = n >> 1;
		i++;
	}


	return res;
}


int main(int argc, char **argv)
{
	uint32_t nbr;
	nbr = (uint32_t)atoi(argv[1]);

	int res;
	res = hammingWeight(nbr);

	printf("resultat => %d\n", res);
	
	return 0;
}
