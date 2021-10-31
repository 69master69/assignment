#include <stdio.h>
#include <stdlib.h>

// Print int n times of char c.
void printChar(int n, char c) {
  int i;//Loop variable 
  for (i=0; i<n; i++) printf("%c", c); // Each iteration print one character c.
}

int main(void)
{
	int layer, side, growth, width, height, i, j, k, n;
	char c;	
	do
	{
	printf("Enter the number of layers(2 to 5):");
	scanf("%d",&layer);	
	}while((2>layer)||(5<layer));
	
	do
	{
	printf("Enter the side of top layer(3 to 6):");
	scanf("%d",&side);	
	}while((3>side)||(6<side));
	
	do
	{
	printf("Enter the growth of each layers(1 to 5):");
	scanf("%d",&growth);	
	}while((1>growth)||(5<growth));
	
	do
	{
	printf("Enter the trunk width(odd number, 3 to 9):");
	scanf("%d",&width);	
	}while(((3>width)||(9<width))||(width%2 == 0));
	
	do
	{
	printf("Enter the trunk height(4 to 10):");
	scanf("%d",&height);	
	}while((4>height)||(10<height));
	
  	j = layer*growth;
	
	printf("\n");
	printChar(j+10, ' ');
	printf("#");
	printf("\n");
	
	for(i=1; i<side-1; i++)
	{
	printChar(j-i+10, ' ');
	printChar(1,'#');
	printChar(2*i-1, '@');
	printChar(1,'#');
	printf("\n");
	}
	printChar(10+j-side+1,' ');
	printChar(2*side-1,'#');
	printf("\n");
	
	
	for(i=1; i<=layer; i++)
	{
		for(k=1; k<=growth; k++)
		{
		    for(n=1; n<k; n++)
			{
				printChar(j+10-n,' ');
				printChar(n,'#');
				printChar(2*n-1, '@');
				printChar(2*n, '#');
				printf("\n");	
			}
			printChar(j+10-i*k,' ');
			printChar(i*k-1,'#');
			printf("\n");
		}
		
	}
	for(n=1; n<height; n++)
	{
		printChar(j+width/2,' ');
		printChar(width, '|');
		printf("\n");
	}
	

return 0;	
}
