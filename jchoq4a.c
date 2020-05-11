//Jcho
//quiz 4a
//04/27/2020
//csc 251 



#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fPtr,*rPtr;
	char c;

	fPtr = open("file1.txt","r");
	rPtr = open("file2.txt","a");

	if (fPtr == NULL || rPtr==NULL)
	{
		puts("File not found");
	}
	

	while(fgets(line, sizeof(line),fPtr))
	{
		if (line[0]== '\n') continue;

		fprintf(rPtr,"%s \n",line);
	}
	fclose(fPtr);
	fclose(rPtr);
	
	return EXIT_SUCCESS;
}

