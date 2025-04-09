#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fptr;

fptr = fopen("filename.txt", "a");
fprintf(fptr, "\nHi everybody!");

fclose(fptr);
return 0;
}
