
#include <stdio.h>



int maxProfit(int *prices, int pricesSize)
{
	int res;
	int i;
	
	res = 0;
	i = 0;

	int peak = prices[0];
	int valley = prices[0];



	while(i < pricesSize - 1)
	{
		while(i < pricesSize - 1 && prices[i] >= prices[i + 1])
			i++;
		valley = prices[i];

		while(i < pricesSize - 1 && prices[i] <= prices[i + 1])
			i++;
		peak = prices[i];

		res += peak - valley;


	}

	return res;
}


int main(int argc, char **argv)
{
	int prices[] = {7,1,5,3,6,4};
	int res;

	res = maxProfit(prices, 6);

	printf("%d", res);
    


	return 0;
}
