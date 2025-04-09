#include <stdio.h>
void bucketsort(int a[], int n){
	int max = a[0];
	for(int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	int b[max], i;
	for (int i = 0; i <= max; i++) {
		b[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		b[a[i]]++;
	}
	for (int i = 0, j = 0; i <= max; i++) {
		while (b[i] > 0) {
			a[j++] = i;
			b[i]--;
		}
	}
}
int main(){
	int a[] = {12, 45, 33, 87, 56, 9, 11, 7, 67};
	int n = sizeof(a) / sizeof(a[0]);
	printf("Before sorting array elements are: \n");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
		bucketsort(a, n);
	printf("\nAfter sorting array elements are: \n");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
}
