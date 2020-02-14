//Jung Min Cho
//csc251
//02/10/2020
//lab6

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{	
	int x=0,y=0,z=0,t;
	//printf("Enter a seed \n");
	//scanf("%d" ,&y);
	srand(time(NULL));
	for ( t=0; t<10; t++)
   	{
		x=rand()%10;
		printf("z=%d y=%d x=%d \n",z,y,x);
	}
	
	return EXIT_SUCCESS;
}
 
