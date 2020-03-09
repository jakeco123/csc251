//Jung Min Cho
////csc 251
//03/09/20
//lab 7


#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 30


void rando(int lower, int upper, int arr[SIZE]);
void printer(int r1[SIZE]);
void sort(number[]);

int main(void)
{
 	int arr[SIZE] = {0};
	int lower = 55;
	int upper = 205;

	printer(arr);

	srand(time(NULL));

	rando(arr,lower,upper);
	printer(arr);

	sort(arr)
	print(arr)

	}	

void printer(int r1[SIZE])
{
	int i;
	for (i = 0; i<SIZE;i++)
	{
		printf("a[%d] = %d \n", i, r1[i]);
	}
}





void rando(int lower, int upper,int arr[SIZE]) 
{ 
	    int i; 
	        for (i = 0; i < SIZE; i++) 
		{	
			arr[i] = (rand() % (upper - lower + 1)) + lower; 	
		} 
		return arr[i];
}

void sortN(int number[])
{
	   int temp, i, j, k;
	      for (j = 0; j < SIZE; ++j)
	      {
		      for (k = j + 1; k < count;j++) 
		      {
		         if (number[j] > number[k])
			 {
				 temp = number[j];
				 number[j] = number[k];
				 number[k] = temp;
			 } 
		      }
	      }   
	      printf("Numbers in ascending order:\n");
	      for (i = 0; i < count; ++i)
	      {
		      printf("%d\n", number[i]);
	      }
}
