#include <stdio.h>
#include  <string.h>

int main(void)
{
    printf("Aliyan Navaid - 23k0686\n");
    
    int details[5][2] = {{2,12}, {3,15}, {1,64}, {4,23}, {7,14}};
    
    //Sorted as per price - Descending
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<4; j++)
        {
            int temp[2]={0};
            if (details[j][1]<details[j+1][1])
            {
                memcpy(temp, details[j], sizeof(details[j]));
                memmove(details[j], details[j+1], sizeof(details[j]));
                memmove(details[j+1], temp, sizeof(details[j]));
            }
        }
    }

    printf("Sorted as per Price \n");
    for (int i=0; i<5;i++)
    {
        printf("Age:%dYrs Price:$%d || ", details[i][0], details[i][1]);
    }

    //Sorted as per Age - Ascending
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<4; j++)
        {
            int temp[2]={0};
            if (details[j][0]>details[j+1][0])
            {
                memcpy(temp, details[j], sizeof(details[j]));
                memmove(details[j], details[j+1], sizeof(details[j]));
                memmove(details[j+1], temp, sizeof(details[j]));
            }
        }
    }

    printf("\nSorted as per Age\n");
    for (int i=0; i<5;i++)
    {
        printf("Age:%dyears Price:$%d || ", details[i][0], details[i][1]);
    }

}