/*Write a function to fund the largest number .*/

#include <stdio.h>

//Function defination 

int find_Largest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3, largest;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest = find_Largest(num1, num2, num3);

    printf("The largest number is: %d\n", largest);

    return 0;
}
