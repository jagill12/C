#include <stdio.h>

int stringLength(char *str) {
    int length = 0; //First iteration will put the ticker at 1.
    while (*(str + length) != '\0') { //While not NULL, add 1 to the length while we iterate through the string given to the function.
        length++;
    }
    return length; //Return the size counted to in each element of the string.
}

int main() {
    char str[] = "John Gill";
    printf("The length of the string \"%s\" is %d.\n", str, stringLength(str));
    return 0;
}
