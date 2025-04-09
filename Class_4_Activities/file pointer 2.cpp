#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	FILE* fptr;
	fptr = fopen("filename.txt", "w");
	
	fprintf(fptr, "some text");
	fclose(fptr);
	
	getch();
	return 0;
}
