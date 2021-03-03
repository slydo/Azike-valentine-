#include <stdio.h>
#include <stdlib.h>

int main() {

    char str[100], ch;
    int i,grade[5];
    float credit[5], gpa = 0.0, totCredit = 1.0;

    /*get the letter grade and credits from the user*/
   {
    printf("Letter Grade and Credits for each subject for first semester:\n");
 }   for (i=0; i<8; i++){
        printf("Subject %d(Grade|Credit):", i+1);
        ch = getchar();
        grade[i] = ch;
        scanf("%f", &credit[i]);
        getchar();
    }

       {
    printf("Letter Grade and Credits for each subject for second semester:\n");
 }   for (i=0; i<8; i++){
        printf("Subject %d(Grade|Credit):", i+1);
        ch = getchar();
        grade[i] = ch;
        scanf("%f", &credit[i]);
        getchar();
 }
    /*print the input grades and credits */
    printf("\nSubject | Grade | Credit\n");
    for (i=0; i<16; i++){
        printf(" %d | %c | %.0f\n", i+1, grade[i], credit[i]);
    }

    /*calculate gpa value*/
    for (i=0; i<16; i++) {
        switch (grade[i]) {
         case 'A':
              gpa = gpa + 5 * credit[i];
              totCredit = totCredit + credit[i];
              break;
         case 'B':
              gpa = gpa + 4 * credit[i];
              totCredit = totCredit + credit[i];
              break;
         case 'C':
              gpa = gpa + 3 * credit[i];
              totCredit = totCredit + credit[i];
              break;
         case 'D':
              gpa = gpa + 2 * credit[i];
              totCredit = totCredit + credit[i];
              break;
         case 'F':
              gpa = gpa + 0 * credit[i];
              totCredit = totCredit + credit[i];
              break;
        }

    }
    printf("GPA:%f\tcredit: %f\n", gpa, totCredit);
    gpa = gpa / totCredit;
    printf("totcredit");
    scanf("%f", &credit[i]);
    printf("GPA for your score: %.1f\n", gpa);

    return 0;
}
