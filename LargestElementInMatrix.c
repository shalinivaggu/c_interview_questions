#include<stdio.h>
#include<stdlib.h>

int main()
{
    int row,col,i,j;

    printf("\ninput the no of rows in the matrix:");
    scanf("%d",&row);

     printf("\ninput the no of colomns in the matrix:");
    scanf("%d",&col);

    int mat[row][col];

    printf("\ngive the elements of matrix:");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nmat[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    printf(" \nprinting the elements of matrix\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%4d",mat[i][j]);
            
        }
        printf("\n");

    }


    printf("\nfinding the largest element in the matrix....");

    int max = mat[0][0];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(max<mat[i][j])
            {
                max = mat[i][j];
            }
        }
    }  
      printf("\nthe maximum number in the matrix is %d ",max);

}