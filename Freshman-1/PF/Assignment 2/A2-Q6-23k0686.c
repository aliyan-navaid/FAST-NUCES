#include <stdio.h>

int main(void)
{
    printf("Aliyan Navaid - 23k0686\n");
    
    int n;
    printf("N: ");
    scanf("%d", &n);

    int target;
    printf("Target: ");
    scanf("%d", &target);

    int numbers[n];
    for (int i=0; i<n; i++)
    scanf("%d", &numbers[i]);

    for (int first=0; first<n; first++)
    {
        for (int second=first+1; second<n; second++)
        {
            if (numbers[first]+numbers[second]==target)
            printf("(%d, %d) ", numbers[first], numbers[second]);
        }
    }
}