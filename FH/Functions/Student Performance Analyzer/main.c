#include <stdio.h>
#include "student.h"

int main(void) {

    /* Taking input for the various several courses/subjects */

    int mathematicsScore = getmathematicsScore();
    int physicsScore = getphysicsScore();
    int chemistryScore = getchemistryScore();   
    int englishScore = getenglishScore();
    int electronicsScore = getelectronicsScore();

    int totalScore = calculateTotal(mathematicsScore, physicsScore, chemistryScore, englishScore, electronicsScore);
    int averageScore = calculateAverage(totalScore);
    int HighestScore = findHighest(mathematicsScore, physicsScore, chemistryScore, englishScore, electronicsScore);
    int LowestScore = findLowest(mathematicsScore, physicsScore, chemistryScore, englishScore, electronicsScore);
    int percentage = (totalScore * 100) / 500;
    
    displayReport(mathematicsScore, physicsScore, chemistryScore, englishScore, electronicsScore);
    printf("Total Score: %d\n", totalScore);
    printf("Average Score: %d\n", averageScore);
    printf("Highest Score: %d\n", HighestScore);
    printf("Lowest Score: %d\n", LowestScore);
    calculateGrade(percentage, totalScore);


    return 0;
}