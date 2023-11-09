#include <stdio.h>
int main(void)
{
    //Verification
    printf("Aliyan Navaid - 23k0686\n");

    //Inputs
    int flights[5][4] = {{1, 300, 0, -1},{1, 320, 1, 310},{0, -1, 1, 280},{1, 380, 0, -1},{1, 375, 1, 400}};
    char days[5][10] ={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    char slots[3][10] = {"Morning", "hi" , "Evening"};
    
    //Determine Day and Time Slot when flight Available (Based on Time)
    printf("\nFlights based on Time\n");
    for (int day=0; day<5; day++)
    {
        for (int slot=0;slot<=2;slot+=2)
        {
            if (flights[day][slot]==1)
            printf("%s - %s: $%d\n", days[day], slots[slot], flights[day][slot+1]);
        }
    }

    //Best Morning Slot in terms of Price of Ticket
    printf("\nMorning Slot:s\n");
    int cheapestDay=0, cheapestPrice=9999;
    for (int day=0; day<5; day++)
    {
        if (flights[day][0]==1)
        {
            printf("%s\n", days[day]);
            if (flights[day][1]<cheapestPrice && flights[day][3]!=-1)
            {
                cheapestDay = day;
                cheapestPrice = flights[day][1];
            }
        }
    }
    printf("Best Option for Morning: %s - $%d\n\n", days[cheapestDay], cheapestPrice);

    //Best Evening Slot in terms of Price of Ticket
    printf("\nEvening Slots:\n");
    cheapestDay=0, cheapestPrice=9999;
    for (int day=0; day<5; day++)
    {
        if (flights[day][2]==1)
        {
            printf("%s\n", days[day]);
            if (flights[day][3]<cheapestPrice)
            {
                cheapestDay = day;
                cheapestPrice = flights[day][3];
            }
        }
    }
    printf("\nBest Option for Evening: %s - %d\n\n", days[cheapestDay], cheapestPrice);

    //Flights for a specific Day
    int choice;
    printf("Which Day? (Monday-0, Tuesday-1, Wednesday-2, Thursday-3, Friday-4): ");
    scanf("%d", &choice);

    for (int slot=0;slot<=2;slot+=2)
    {
        if (flights[choice][slot]==1)
        printf("Flight Available in %s - %d\n", slots[slot], flights[choice][slot+1]);
    }
}
