#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int i;
	int num=0;
	do{
	
		printf("Guess a number :");
		scanf("%d", &i);
		num++;
	
		if (i>answer)
		{	printf("low!\n");
		}
	
		else if(i<answer)
		{	printf("high!\n");
		}
		
		else
		{	printf("congratuation!!\n");
		}
	}
	while (i != answer);

	printf("trial : %i\n", num);	

	
	
	
		 
	
	
	return 0;
}
