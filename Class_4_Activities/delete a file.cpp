#include <stdio.h>
#include <stdlib.h>
struct person {
	int id;
	char fname[20];
	char lname[20];
};
int main()
{
	if (remove("abc.txt") == 0)
		printf("Deleted successfully");
	else
		printf("Unable to delete the file");
		
	return 0;
}
