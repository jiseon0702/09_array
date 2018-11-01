#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printMatrix(int A[][COLS])
{
	int i,j;
	
	for(i=0;i<ROWS;i++){
		for (j=0;j<COLS;j++)
		{
		printf("%d ",A[i][j]);
		}
		printf("\n");	
	}
	
	return;
}
void addMatrix(int A[][COLS],int B[][COLS],int C[][COLS])
{
	int i,j;
	
	for(i=0; i<ROWS; i++)
	{ for (j=0;j<COLS;j++)
	
	{
		C[i][j]=A[i][j]+B[i][j];
		
		}
	}
	
	return 1;
}

