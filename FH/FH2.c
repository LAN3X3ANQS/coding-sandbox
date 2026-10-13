#include <stdio.h>

int addNumbers(void);
int subtractNumbers(void);
int add(int x, int y);
int subtract(int x, int y);

int main(void) {

   int sum = addNumbers();
   printf("Sum: %d\n", sum);
   
   int difference = subtractNumbers();
   printf("Difference: %d\n", difference);

    return 0;
}

int addNumbers(void) {
    int a, b;
    printf("Enter two numbers to add: ");
    scanf("%d %d", &a, &b);
    return add(a, b);
}

int subtractNumbers(void) {
    int a, b;
    printf("Enter larger number and smaller number (e.g. 10 4): ");
    scanf("%d %d", &a, &b);
    
    return subtract(a, b);
}

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}