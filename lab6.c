//Jung Min Cho
//csc251
//02/19/2020
//lab6


#include <stdio.h>
#include <stdlib.h>
#include<time.h>	
#define SIZE 5

void swaparr(int *arr1, int *arr2, int s)
{
	int i=0, temp = 0;
	
	for(i = 0; i<s; i++)
	{
		temp = arr1[i];
		arr1 [i] = arr2[i];
		arr2 [i] = temp;
	}
}

int main ()
{
	int i =0;
	
	int array1 [SIZE] = {0,2,4,6,8};
	int array2 [SIZE] = {1,3,5,7,9};


	printf ("Before Swap \n");
	
	for (i=0; i <SIZE; i++)
	{
		printf("firstArray[%d] = %d", i, array1[i]);
		printf(", secondArray[%d] = %d \n ", i, array2[i]);
	}	

	
	swaparr(array1, array2, SIZE);

	printf ("After Swap \n");

	for (i=0; i<SIZE; i++)
	{
		printf("firstArray[%d] = %d",i,array1[i]);
		printf(", secondArray[%d] = %d \n", i ,array2[i]);
	}	
	return 0;
}

	

