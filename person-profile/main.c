#include <stdio.h>
struct person {
    char name[50];
    int age;
};

int main() {

    struct person p1 = {"John Doe", 30};
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    return 0;
}