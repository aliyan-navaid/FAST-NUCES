#include <stdio.h>

int main(void)
{
    //Verification
    printf("Aliyan Navaid - 23k0686\n");

    //Inputs
    int size;
    printf("Input size of Matrix: ");
    scanf("%d", &size);

    int matrix[size][size];
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            printf("Matrix[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMatrix Visualisation\n");

    //Print Matrix
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //SubMatrix
    int sum=0, i, j, row, column, found_size;
    //Alter Size of Submatrix
    for (int submatrixsize=size; submatrixsize>0; submatrixsize--)
    {
        //Shift SubMatrix Vertically
        for (int vertical=0; vertical<=(size-submatrixsize); vertical++)
        {
            //Shift SubMatrix Vertically
            for (int horizontal = 0; horizontal <= (size-submatrixsize); horizontal++)
            {
                //Sum Current SubMatrix
                sum=0;
                for (i=vertical; i<vertical+submatrixsize; i++)
                {
                    for (j=horizontal; j<horizontal+submatrixsize; j++)
                    sum+= matrix[i][j];
                }
                if (sum==submatrixsize*submatrixsize) { row=i-1; column= j-1, found_size=submatrixsize; break;}
            }
            if (sum==submatrixsize*submatrixsize) break;
            
        }
        if (sum==submatrixsize*submatrixsize) break;
    }

    printf("Submatrix Visualisation\n");
    for (int x=row-found_size+1; x<=row; x++) 
    {
        for (int y = column-found_size+1; y<=column; y++)
        {
            printf("Matrix[%d][%d]: %d ", x+1, y+1, matrix[x][y]);
        }
        printf("\n");
    }
}