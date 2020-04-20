//Jung Min Cho
//04/06/20
//csc 251
//lab8


//create an array size 10 in the main function.
//create a separate function that fills the array with random numb bt 20-51 inc. use pointers to fill(*arr =x).
//create a separate function to print array using pointers.



#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10

int ran (int number[]);
void prinA(int *ptr,size_t length);

int main()
{
	int arr[SIZE] = {0};
	int x;
	int *ptr;


	srand(time(NULL));
	
	x = random();
	*ptr = &x;

	prinA(arr,SIZE);


	return EXIT_SUCCESS;
}

int ran (int number[])
{
	int i;
	 for (i=0; i<SIZE; i++)
	 {
		 number[i] = (rand() % (51-20)+1);
	 }

	 return number[i];
}

void prinA (int *ptr,size_t length)
{
	size_t i = 0;
	for (; i <length;i++)
	printf("Array[%d]= %d",i ,ptr[i])
}

