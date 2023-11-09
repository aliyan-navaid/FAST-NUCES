#include <stdio.h>

int main(void)
{
    printf("Aliyan Navaid - 23k0686\n");

    int number;
    printf("Number: ");
    scanf("%d", &number);

    
    //Check if Number = Ramanujan-Hardy
    int ramanujan[1000]={0};
    for (int a=0; a<number; a++)
    {
        for (int b=0; b<number; b++)
        {
            for (int c=0; c<number; c++)
            {
                for (int d=0; d<number;d++)
                {
                    if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
                    {
                        int firstsumofcubes =a*a*a+b*b*b, secondsumofcubes =  c*c*c+d*d*d;
                        if (firstsumofcubes==secondsumofcubes)
                        {
                            //check if already isn't present
                            int found=0, free=0;;
                            for (int i=0; i<1000;i++)
                            {
                                if (ramanujan[i]==firstsumofcubes)
                                found=1;
                                if (ramanujan[i]==0)
                                {free = i; break;}
                            }
                            if (!found)
                            {
                                printf("%d ", firstsumofcubes);
                                ramanujan[free]=firstsumofcubes;
                            }
                        }
                    }
                }  
            }
        }


    }
}