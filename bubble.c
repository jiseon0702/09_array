#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&c[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d",c[i]);
	}
	return 0;
}
