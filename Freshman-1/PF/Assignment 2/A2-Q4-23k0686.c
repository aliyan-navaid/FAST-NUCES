#include <stdio.h>
int main(void)
{
    //Verification
    printf("Aliyan Navaid - 23k0686\n");

    //Inputs
    int x,y;
    char maze[5][5];
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            printf("Maze[%d][%d]: ", i, j);
            scanf(" %c", &maze[i][j]);
            if (maze[i][j]=='S')
            {
                x=j;
                y=i;
            }
        }
     }

    //Logic
    int count=0;
    int moves[25][2];
    while (1)
    {
        moves[count][0]=y;
        moves[count][1]=x;
        
        if (maze[y][x] == 'E')
        {
            break;
        }
        else if (!(maze[y][x+1]=='W'))
        {
            x++;
        }
        else if (!(maze[y+1][x]=='W'))
            y++;
        else if (maze[y+1][x] == 'W' && maze[y][x+1]=='W')
        {
            maze[y][x]='W';
            y=0;
            x=0;
            for (int i=0; i<25; i++)
            {
                for (int j=0; j<2; j++)
                moves[i][j]=0;
            }
            count=0;
            continue;
        }

        count++;
    }

    //Print Path
    for (int i=0; i<25; i++)
    {
        if (moves[i+1][0]==0 && moves[i+1][1]==0)
        {
            printf("(%d, %d)", moves[i][0], moves[i][1]);
            break;
        }
        printf("(%d, %d)", moves[i][0], moves[i][1]);
    }
    

}