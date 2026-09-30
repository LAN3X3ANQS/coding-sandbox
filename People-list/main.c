#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main(void) {
    // Create an array that can hold 3 Person records

    // Give each person a name and age

    // Use a loop to display all 3 people

    struct Person people[3]; 
    strcpy(people[0].name, "Alice");
    people[0].age = 30;
    strcpy(people[1].name, "Bob");
    people[1].age = 25;
    strcpy(people[2].name, "Charlie");
    people[2].age = 35;

    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
    }

    return 0;
    
}