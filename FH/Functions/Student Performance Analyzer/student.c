#include <stdio.h>
#include "student.h"

int getmathematicsScore(void) {
    int mathematicsScore;
    printf("Enter your Mathematics Score: ");
    scanf("%d", &mathematicsScore);
    return mathematicsScore;
}

int getphysicsScore(void) {
    int physicsScore;
    printf("Enter your Physics Score: ");
    scanf("%d", &physicsScore);
    return physicsScore;
}

int getchemistryScore(void) {
    int chemistryScore;
    printf("Enter your Chemistry Score: ");
    scanf("%d", &chemistryScore);
    return chemistryScore;
}

int getenglishScore(void) {
    int englishScore;
    printf("Enter your English Score: ");
    scanf("%d", &englishScore);
    return englishScore;
}

int getelectronicsScore(void) {
    int electronicsScore;
    printf("Enter your Electronics Score: ");
    scanf("%d", &electronicsScore);
    return electronicsScore;
}


int calculateTotal(int mathematicsScore, int physicsScore, int chemistryScore, int englishScore, int electronicsScore) {
    int totalScore = mathematicsScore + physicsScore + chemistryScore + englishScore + electronicsScore;
    return totalScore;
}

int calculateAverage(int totalScore) {
    int averageScore = totalScore / 5;
    return averageScore;

}

int findHighest(int mathematicsScore, int physicsScore, int chemistryScore, int englishScore, int electronicsScore) {

    if (mathematicsScore > physicsScore && mathematicsScore > chemistryScore && mathematicsScore > englishScore && mathematicsScore > electronicsScore) {
        return mathematicsScore;
    } else if (physicsScore > mathematicsScore && physicsScore > chemistryScore && physicsScore > englishScore && physicsScore > electronicsScore) {
        return physicsScore;
    } else if (chemistryScore > mathematicsScore && chemistryScore > physicsScore && chemistryScore > englishScore && chemistryScore > electronicsScore) {
        return chemistryScore;
    } else if (englishScore > mathematicsScore && englishScore > physicsScore && englishScore > chemistryScore && englishScore > electronicsScore) {
        return englishScore;
    } else {
        return electronicsScore;
    }
    
}

int findLowest(int mathematicsScore, int physicsScore, int chemistryScore, int englishScore, int electronicsScore) {

    if (mathematicsScore < physicsScore && mathematicsScore < chemistryScore && mathematicsScore < englishScore && mathematicsScore < electronicsScore) {
        return mathematicsScore;
    } else if (physicsScore < mathematicsScore && physicsScore < chemistryScore && physicsScore < englishScore && physicsScore < electronicsScore) {
        return physicsScore;
    } else if (chemistryScore < mathematicsScore && chemistryScore < physicsScore && chemistryScore < englishScore && chemistryScore < electronicsScore) {
        return chemistryScore;
    } else if (englishScore < mathematicsScore && englishScore < physicsScore && englishScore < chemistryScore && englishScore < electronicsScore) {
        return englishScore;
    } else {
        return electronicsScore;
    }

}   

int calculateGrade( int percentage , int totalScore) {
    percentage = totalScore / 500 * 100;

    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;

}

int displayReport(int mathematicsScore , int physicsScore, int chemistryScore , int englishScore , int electronicsScore) {
    
    printf("\n--- Student Performance Report ---\n");
    printf("Mathematics Score: %d\n", mathematicsScore);
    printf("Physics Score: %d\n", physicsScore);
    printf("Chemistry Score: %d\n", chemistryScore);
    printf("English Score: %d\n", englishScore);
    printf("Electronics Score: %d\n", electronicsScore);
    
    return 0;
}