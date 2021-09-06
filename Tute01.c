/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */
#include <stdio.h>

int main() {
        int no1,no2;
        float avr;
        int total;
        printf("enter first subjects of marks:");
        scanf("%d",&no1);
        printf("enter second subject of marks:");
        scanf("%d",&no2);
        //total of subject marks
        total=no1+no2;
        printf("the total is %d\n",total);
        //average of subject marks
        avr=total/2;
        printf("the avrage is %.2f",avr);

  
  return 0;
}
