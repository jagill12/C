#include <stdio.h>

int main() {
	
	char *ptr;
	
	ptr = "abcdefghijklmnopqrstuvwxyz";
	
	while (*ptr != NULL) {
		printf("%c ", *ptr);
		ptr++;
	}
	return 0;
}
