char **fizzBuzz(int n, int *returnSize){
    int i;
    i = 0;
    
    char **array;
    array = (char **)malloc(sizeof(char *) * n);
        
    while(i < n)
    {
        array[i] =  (char *)malloc(sizeof(char) * 8 );
        
	if(i % 3 && i % 5)
		strcpy(array[i], "FizzBuzz");
	else if(i % 3)
        	strcpy(array[i], "Fizz");
	else if(i % 5)
	        strcpy(array[i], "Buzz");   
	else 
		sprintf(array[i], "%d", i);
    }
    
    
    return array;
}
