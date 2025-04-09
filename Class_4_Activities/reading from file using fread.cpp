#include <stdio.h>
#include <stdlib.h>
struct person {
	int id;
	char fname[20];
	char lname[20];
};
int main()
{
	FILE* infile;
	infile = fopen("person1.dat", "wb+");
	if (infile == NULL) {
		fprintf(stderr, "\nError opening file\n");
		exit(1);
	}
	struct person write_struct = {1, "Tala", "Talaei" };
	fwrite(&write_struct, sizeof(write_struct), 1, infile);
	struct person read_struct;
	rewind(infile);
	fread(&read_struct, sizeof(read_struct), 1, infile);
	printf("Name: %s %s \nID: %d", read_struct.fname, read_struct.lname, read_struct.id);
	fclose(infile);
	return 0;
}
