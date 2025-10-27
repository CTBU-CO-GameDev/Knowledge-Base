#include "stdio.h"

int main()
{
	char array[5][18] 
	= {"        *        ",
	   "      * * *      ",
	   "    * * * * *    ",
	   "  * * * * * * *  ",
	   "* * * * * * * * *"};
	   
	for(int i = 0 ; i < 5;i++)
	{
		for(int j = 0;j < 18;j++)
		{		
			printf("%c",array[i][j]);
		}
		printf("\n");
	} 
}
