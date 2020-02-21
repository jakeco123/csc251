//jcho3.c
//csc251
//02/03/20

#include<stdio.h>
#include<stdlib.h>


int main(void)
{

	int total;
	unsigned int counta=0;
	unsigned int countb=0;
	unsigned int countc=0;
	unsigned int countd=0;
	unsigned int countf=0;
	unsigned int counter;
	double average;
	int grade;
	
	counter = 0;

	printf("%s", "Enter a letter grade (press z to quit):");

	while((grade =getchar())  !='z')
	{
		counter = counta + countb + countc + countd + countf;
	
		printf("%s" , "Enter a letter grade (press z to quit):");	
	
		switch (grade)
		{
			case 'A':
			case 'a':
				++counta;
				break;

			case 'B':
			case 'b':
				++countb;
				break;

			case 'C':
			case 'c':
				++countc;
				break;

			case 'D':
			case 'd':
				++countd;
				break;

			case 'F':
			case 'f':
				++countf;
				break;

			default :
			       printf("%s", "Please enter a valid grade.");
			       break;
		}
	}




	


		
	average = ((4.0*counta)+(3.0*countb)+(2.0*countc)+(1.0*countd))/counter;

	puts("There are:"); 
	printf("%u A's",counta);
	printf(" %u B's",countb);
	printf(" %u C's",countc);
	printf(" %u D's",countd);
	printf(" %u F's",countf);
	printf(" The Class average is: %f.\n", average);

 
	
}

