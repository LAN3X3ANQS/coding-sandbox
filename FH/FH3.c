#include <stdio.h>

int addNumbers(void);
int subtractNumbers(void);
int add(int x, int y);
int subtract(int x, int y);

int main() {

    int options;
    printf("Enter your choice (1 for addition, 2 for subtraction): ");
    scanf("%d", &options);

    switch (options) {
    case 1:
        int sum = addNumbers();
        printf("Sum: %d\n", sum);
        break;

    case 2:
        int difference = subtractNumbers();
        printf("Difference: %d\n", difference);
        break;

    // You can add as many cases as needed

    default:
        printf("Invalid choice!\n");
        break;
}
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