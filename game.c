#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int choice1,num,i,choice,won=0,lose=0,draw=0;
	while(1)
	{
		printf("\n\n\t PRESS ONE  TO ENTER THE GAME  AND ANY NUMBER TO EXIT :");
		scanf("%d",&choice1);
		if(choice1==1)	
		{
			printf("\n\t!!!Enter [0] for SCISSOR!!!\n");
			printf("\n\t!!!Enter [1] for PAPER!!!\n");
			printf("\n\t!!!Enter [2] for ROCK!!!\n");
			printf("\n\t\t**ENTER YOUR WEAPON**:");
			scanf("%d",&choice);
			printf("\n\tYOU CHOSE: [%d]",choice);
			for(i=1;i<=1;i++)
			{
				if(choice>=0 && choice<=2)
				{
					srand(time(NULL));
					num=rand()%3;
					printf("\t\t The COMPUTER CHOSE:[%d]\n",num);
				}
				else 
				{
					printf("\tINVALID WEAPON");
					break;
				}
				if(choice==0&& num==1)
				{
					printf("\n\n\t\t\t!!!YOU WON!!!");
					won++;
				}
				else if(choice==0 &&num==2)
				{
					printf("\n\n\t\t\t!!!COMPUTER WON!!!");
					lose++;
				}
				else if(choice==1&& num==0)
				{
					printf("\n\n\t\t\t!!!COMPUTER WON!!!");
					lose++;
				}
				else if(choice==1&& num==2)
				{
					printf("\n\n\t\t\t!!!YOU WON!!!");
					won++;
				}
				else if(choice==2 && num==0)
				{
					printf("\n\n\t\t\t!!!YOU WON!!!");
					won++;
				}
				else if(choice==2 && num==1)
				{
					printf("\n\n\t\t\t!!!COMPUTER WON!!!");
					lose++;
				}
				else
				{
					printf("\n\n\t\t\t!!!DRAW!!!");
					draw++;
				}
			}
		}
		else
		{	
			printf("\nSCORE BOARD--->>");
			printf("\tWon:[%d]",won);
			printf("\t\tLose:[%d]",lose);
			printf("\t\tDraw:[%d]",draw);
			if(won>lose)
			{
				printf("\n\n\t\t!!!YOU WON THE GAME!!!");
			}	
			if(won<lose)
			{
				printf("\n\n\t\t!!!COMPUTER WON THE GAME!!!\n\t\t(!!BETTER LUCK NEXT TIME!!)");
			}	
			if(won==lose)
			{
				printf("\n\n\t\t!!!DRAW!!!");
			}	
			break;
		}
	}
	return 0;
}
