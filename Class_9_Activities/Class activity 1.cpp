#include <stdio.h>
#include <string.h>

typedef struct students {
	char name[50];
	char branch[50];
	int ID_no;
} stu;

int main()
{
	stu st;
	strcpy(st.name, "Tala Khoei");
	strcpy(st.branch, "Khoury College of Computer Sciences");
	st.ID_no = 100;
	
	printf("Name: %s\n", st.name);
	printf("Branch: %s\n", st.branch);
	printf("ID_NO: %d\n", st.ID_no);
	return 0;
}
