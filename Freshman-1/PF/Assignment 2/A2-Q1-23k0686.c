#include <stdio.h>

int main(void)
{
    //Verification
    printf("Aliyan Navaid - 23k0686\n");

    //Inputs
    int batsman, innings;
    printf("Enter Number of Batsmen: ");
    scanf("%d", &batsman);
    printf("Enter Number of Inning(s): ");
    scanf("%d", &innings);

    int scores[batsman][innings];
    for (int i=0; i<batsman; i++)
    {
        for (int j=0; j<innings; j++)
        {
            printf("Enter Score of Batsman %d for Inning %d: ", i+1, j+1);
            scanf("%d", &scores[i][j]);
        }
    }
   
   
    int total, highest, centuries, half_centuries;
    for (int i=0; i<batsman ; i++)
    {
        total = highest = centuries = half_centuries = 0;
        highest = scores[i][0];
        for (int j=0;j<innings; j++)
        {
            total += scores[i][j];
            if (scores[i][j]>highest) highest = scores[i][j];
            if (scores[i][j]>=100) centuries++;
            else if (scores[i][j]>50) half_centuries++;
        }
        printf("\nBatsman %d\n", i+1);
        printf("Total Score: %d\n", total);
        printf("Average Score per Inning: %d\n", (total/innings) );
        printf("Highest Score: %d\n", highest);
        printf("Centuries: %d\n", centuries);
        printf("Half-Centuries: %d\n", half_centuries);
    }
    
    
}