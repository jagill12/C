#include <stdio.h>
#include <stdlib.h>

struct person {
	int id;
	char fname[20];
	char lnam[20];
};

int main()
{
	FILE* outfile;
	outfile = fopen("person.bin", "wb");
	if (outfile == NULL) {
		fprintf(stderr, "\nError opened file\n");
		exit(1);
	}
	struct person input1 = {1, "Tala", "Talaei" };
	
	int flag = 0;
	flag = fwrite(&input1, sizeof(struct person), 1, outfile);
	if (flag) {
		printf("contents of the structure written successfully");
	}
	else
		printf("Error writing to file!");
	fclose(outfile);
return 0;
}
