

#include <stdio.h>



int check_is_array(char a, char *s)
{
	int found;
	int i;

	found = 0;
	i = 0;

	while(s[i] != '\0')
	{

		if(s[i] == a)
			found++ ;
		
		i++;
	}

	return found;

}



int firstUniqChar(char *s)
{
	int i;

	i = 0;

	while(s[i] != '\0')
	{
		if(check_is_array(s[i], s) <= 1)
			return i;

		i++;
	}


	return -1;
}




int main(int argc, char **argv)
{

	int index;
	index = firstUniqChar(argv[1]);

	printf("outuput => %d\n", index);
}
