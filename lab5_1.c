//Jung Min Cho
//csc251
//02/12/20
//lab5

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int generator(void);
int question(void);



int main(void)
{
 
	unsigned int frec1 = 0; //rolled 1
	unsigned int frec2 = 0;
	unsigned int frec3 = 0;
	unsigned int frec4 = 0;
	unsigned int frec5 = 0;
	unsigned int frec6 = 0;
	unsigned int frec7 = 0;
	unsigned int frec8 = 0;
	unsigned int frec9 = 0;
	unsigned int frec10 = 0;
	
	unsigned int roll;
	int face;
	int y = question();

	srand(time(NULL));
	for (roll = 0; roll < y; roll++)
	{
		face = generator();

		switch(face)
		{
			case 1: 
				++frec1;
				break;
			case 2:
				++frec2;
				break;
			case 3:
				++frec3;
				break;
			case 4: 
				++frec4;
				break;
			case 5:
				++frec5;
				break;
			case 6:
				++frec6;
				break;
			case 7: 
				++frec7;
				break;
			case 8: 
				++frec8;
				break;
			case 9:
				++frec9;
				break;
			case 10:
				++frec10;
				break;

		}
	}
   	//print results in tabular format
        printf("You had: \n");
	printf("%d ones \n",frec1 );
	printf("%d twos \n ",frec2 );
	printf("%d threes \n ",frec3);
	printf("%d fours \n ",frec4);
	printf("%d fives \n ",frec5);
	printf("%d sixes \n ",frec6);
	printf("%d sevens \n ",frec7);
	printf("%d eights \n ",frec8);
	printf("%d nines \n ",frec9);
	printf("%d tens \n ",frec10);
}

int generator(void)
{
	int x = rand()%10+1;
	return x; 
}
int question(void)
{
	int y;
	printf("Please enter the number of times you want to roll the 10 sided dice.");
	scanf("%d", &y);
	return y;
}


