#include <stdio.h>

int main() {
    int option = 0;

    // Simulated data counters
    int totalAttendanceLogs = 0;
    int totalGradeRecords = 0;

    while (option != -999) {
        printf("\n=====================================\n");
        printf("   SCHOOL HARDWARE & RESULT SYSTEM   \n");
        printf("=====================================\n");
        printf("1. Simulate Fingerprint Scan (Daily Attendance)\n");
        printf("2. Upload End-of-Semester Grades (Teacher)\n");
        printf("3. View System Summary\n");
        printf("-999. Exit System\n");
        printf("Select option: ");
        scanf("%d", &option);

        switch (option) {
            case 1: {
                int studentID = 0;
                printf("\n[HARDWARE SIMULATION] Touch Sensor...\n");
                printf("Enter Student ID: ");
                scanf("%d", &studentID);
                if (studentID > 0) {
                    totalAttendanceLogs = totalAttendanceLogs + 1;
                    printf("Attendance marked Present for today.");
                }
                // TODO: Increment totalAttendanceLogs by 1
                // Print: "Attendance marked Present for Student ID: <studentID>"
                break;
            }

            case 2: {
                int studentID = 0;
                float caScore, examScore, totalScore;

                printf("\n--- Teacher Grade Entry ---\n");
                printf("Enter Student ID: ");
                scanf("%d", &studentID);
                if (studentID > 0) {
                   
                    printf("Enter CA score (/40): \n");
                    scanf("%f", &caScore);

                   
                    printf("Enter Exam score (/60): ");
                    scanf("%f", &examScore);

                    totalScore = caScore + examScore;
                    (totalScore >= 60) ? printf("PASS\n") : printf("FAIL\n");
                }

                // TODO: 
                // 1. Prompt for CA Score (0-40) and Exam Score (0-60)
                // 2. Add them up for totalScore
                // 3. Use a ternary operator to assign grade status:
                //    (totalScore >= 40) ? "PASS" : "FAIL"
                // 4. Increment totalGradeRecords by 1
                break;
            }

            case 3:
                // TODO: Print summary of total attendance logs processed 
                // and total grade records uploaded.
                break;

            case -999:
                printf("\nShutting down system...\n");
                break;

            default:
                printf("\nInvalid selection! Please choose 1, 2, 3, or -999.\n");
                break;
        }
    }

    return 0;
}