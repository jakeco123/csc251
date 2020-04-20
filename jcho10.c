//Jcho
//lab10
//04/20/20


#include<stdlib.h>
#include<stdio.h>



void posBal(double x);
void negBal(double x);
void zBal(double x);


int main(void)

{

	int request;

	int account=0;

	char name[30];

	double balance=0;

	FILE *wptr,*rptr;

	  

	

	if((rptr = fopen("input.txt","r")) == NULL)

	{

		puts("File could not be opened");

	}

	else

	{
		while(!feof(rptr))
		{
			fscanf(rptr, "%d%29s%lf",&account,name,&balance);


			printf("%s", "enter request: \n"

					   "1. List negative balances. \n"

					   "2. List positive balances. \n"

					   "3.List Zero balances. \n"

					   "4. End program.\n");

			scanf("%d", &request);

			  

			switch(request)

			{

				case 1:
					posBal(balance);
					break;

				case 2:negBal(balance);

					break;  

				case 3:zBal(balance);

					break;
					  
				case 4:
				       printf("program is now ending ");

					 break;
				default: 
					printf("Choice invalid, please try again \n");
			       		break;		

			}

			  

		}

	}

	  

	return EXIT_SUCCESS;

}

void posBal(double x)
{
	if(x > 0)
	{
		printf(" This are all the positive balances : %lf \n",&x);
	}
}

void negBal(double x)
{
	if(x < 0)
	{
		printf(" This are all the negative balances: %lf \n",&x);
	}
}
void zBal(double x)
{
	if (x == 0)
	{
		printf( " This all the zero balances: %lf \n",&x);
	}
}
