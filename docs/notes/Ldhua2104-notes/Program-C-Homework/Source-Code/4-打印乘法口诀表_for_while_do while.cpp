#include "stdio.h"

void use_for()
{	
	for(int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d ¡Á %d = %d  ",j,i,j*i);
		}
		printf("\n");
	}
}

void use_while()
{
	int i = 1;
	
	while(i < 10)
	{
		int j = 1;
		while(j <= i)
		{
			
			printf("%d ¡Á %d = %d  ",j,i,j*i);
			j++;
		}
		printf("\n");
		
		i++;
	}
}

void use_do_while()
{
	int i = 1;	
	do
	{
		int j = 1;
		do
		{
			printf("%d ¡Á %d = %d  ",j,i,j*i);
			j++;
		}while(j <= i);
		
		printf("\n");
		
		i++;
	}while(i < 10);
}

int main()
{
	printf("---ues for now---\n");
	use_for();
	
	printf("\n");
	
	printf("---ues while now---\n");
	use_while();
	
	printf("\n");
	printf("---ues do while now---\n");
	use_do_while();
} 
