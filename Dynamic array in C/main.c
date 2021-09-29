
//Dynamic array example code
#include<stdio.h>
main()
{
        int *dynArry;
        int size;
        int index;
        printf(" Enter The size of the array \n");
        scanf("%d",&size);
        dynArry  = (int *)malloc(size * sizeof(int));
        printf("Assigning the values using index \n");
        for(index = 0; index < size; index++)
        {
                *(dynArry + index) = 4000 + index;
        }

        /* Printing the array using Index */
        for(index = 0; index < size; index++)
        {
                printf(" dynArry[%d] = %d\n",index,*(dynArry + index));
        }
}
