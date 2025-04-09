#include <stdio.h>
int main() {
	int a = 12;
	int b = 1;
	int i = 0;
	//print the first line
	for (int j = 0; j < a; j++){
		printf(" ");
	}
	printf(".\n");
	//now write an algorithm for the first half that enlarges
	while (i <= 9){
		a--; //reducing a and increasing i needs to happen at the beginning of this loop
		i++;
		for (int k = 0; k < a; k++){
			printf(" ");
		}
		printf(".");
		for (int c = 0; c < 1; c++){
			for (int l = 0; l < b; l++){
			printf(" ");
		}
		b+=2; //has to increase by 2 each loop to mirror spacing across x-axis
		}
		printf(".\n");
	}
	b-=4; //resets the inner spaces to the necessary starting amount for the second half of the star descending 
	a++; //resets outer spaces to necessary starting amount as well
	//now write an algorithm for the second half that shrinks
	while (i >= 2){
		for (int m = 0; m < a; m++){
			printf(" ");
		}
		printf(".");
		for (int n = 0; n < b; n++){
			printf(" ");
		}
		printf(".\n");
		b-=2;
		i--; //i is reduced and a is increased at the end of this loop to stop it at the proper point
		a++;
	}
	for (int o = 0; o < a; o++){
		printf(" ");
	}
	printf(".");
	return 0;
}
