#include <stdio.h>

int main() {
	int a = 0, b = 0;
	int N = 4, M = 5;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			a = a + j;
			
			printf("value = %d\n", a);
		}
	}
	return(0);
}
