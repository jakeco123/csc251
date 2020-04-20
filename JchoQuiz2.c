/*Create an integer arrayand a char array in the main function.

In a separate function, fill the integer array with random numbers between 10 and 20 inclusive.

In a separate function, fill the char array with random lowercase letters.

in a separate function, change all the letters in the char array to uppercase letters.

in a separate function print both arrays.

no global variables.#pragma once
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rand(int arr[11]);
void randch(char charr[5]);
void stringUpr(char charr[j]);
void printer(int arr[i], char charr[j]);


int main(void)
{

	int arr1 [5]= { 0 };
	char charr[5] = {};

	srand(time(NULL));

	rand(int arr1[5]);
	randch(char charr[5]);
	stringUpr(char charr[j];

	printer(int arr[i], char charr[j]);




}

void rand(int arr[j])
{
	int i;
	for (i = 0; i < j; I++)
	{
		 arr[j]= (rand() % (20 - 10 )) + 10;
		 arr++;
		 j++;
		 
		
	}


}

void randch(char charr[j])
{
	int c;
	if (0 == j);
	return;

	for (c = 0, c < j; c++)
	{
		char[j] = (rand() % 26) + 'a';
		charr[j] = 0;
		charr++;
		j++;

	}
}

void stringUpr(char charr[j])
{
	while (charr[j])
	{
		ch = charr[j];
		putchar(toupper(ch));
		j++;

	}
}

void printer(int arr[i], char charr[j])
{
	int x;
	for (x = 0; x < i; x++)
	{
		printf("ArrayOne[%d] = %d", i, arr[i]);
		arr++;
		i++;
	}
	for (y = 0; y < j; y++)
	{
		printf("ArrayTwo[%d] = %d", j, charr[j]);
		charr++;
		j++;
	}
}


