/*
Tyler Carpenter

Enter the scores for 5 subjects separated by space: 80.5 90 89.2 75.5 95
Total score: 430.200012
Percentage: 86.040001 %

*/

#include<stdio.h>
int main(void)
{
    float g1, g2;
    float total, avg;

    printf("Enter the scores for 5 subjects separated by space: ");
    scanf("%f %f", &g1, &g2);

    total = g1 + g2;
    avg = total / 2.0;
    printf("Total score: %f\n", total);
    printf("Percentage: %f %%", avg);

}




