#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>

int main (void)
{
	char name[30];
	int x;

	srand(time(NULL));

	printf("Please enter a string.");
	scanf("%s", name);

	x=(rand()% (1300-1200))+1200;

	printf("%s %d",name,x);

	return EXIT_SUCCESS;
}
