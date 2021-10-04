
#include <stdio.h>


int removeDuplicates(int *nums, int numsSize)
{
    int i;
    int j;

    i = 1;
    j = 0;

    while(i < numsSize)
    {
        if(nums[j] != nums[i])
        {
            j++;
            nums[j] = nums[i];
        }

        i++;
    }

    return i + 1;
}

int main(int argc, char **argv)
{
//                    i
//                  j  
    int nums[] = {1,1,2}; 


    int k = removeDuplicates(nums, 3); // Calls your implementation

    int i;
    i =0;
    putchar('[');
    while(i < 3)
    {
        printf("%d,", nums[i]);
        i++;
    }
    puts("]\n");

    return 0;

}

