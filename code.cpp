//  Sayak Pramanik
//  CSE(3rd Year)
//  Kalyani Govt Engg College
//  Date-10/04/2016

//  Code1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){	
	int i,j,k,m,n,x,a[3][3],r,menu;
	char p[10],q[10],p1[2];
	printf("\n\n\n   Welcome to Tic-Tac-Toe Game\n\n");
	for(r=1;r>0;r++)
	{
		if(r==1){
			system("COLOR 2F");
			printf("\n   To Play Press -> 1          For Help Press -> 2\n\n   Enter : ");
			scanf("%d",&menu);
			system("cls");
		}
		else{
			system("COLOR 2F");
			printf("\n\n\n   To Play press -> 1          For Help Press -> 2");
			printf("\n\n	   To Exit Press -> 3\n\n   Enter : ");
			scanf("%d",&menu);
			system("cls");
		}
		
		if(menu==2)
		{
			system("COLOR 5F");
			printf("\n\n\n   Position map & regarding no is given below :\n\n");
			printf("   1 2 3\n   4 5 6\n   7 8 9\n\n   Press 10 to Cancel a Running Game\n\n   Press ENTER to Go Back to Menu");
			gets(p1);
			gets(p1);
			system("cls");
		}
		else if(menu==3){
			system("cls");
			system("COLOR 6F");
			printf("\n\n   See You Again %c\n\n",1);
			gets(p1);
			gets(p1);
			exit(0);
		}

		else if(menu==1){


			for(i=0;i<3;i++){ 
				for(j=0;j<3;j++)
					a[i][j]=-1;
			}
			fflush(stdin);
			printf("\n\n\n   Enter the Name of Player 1 : ");
			gets(p);
			printf("\n\n   Enter the Name of Player 2 : ");
			gets(q);
			system("cls");
			
//SHOW
			printf("\n\n");
			for(i=0;i<3;i++){
				printf("     ");
				for(j=0;j<3;j++){
					if(j<2)
						printf("%c%c",32,179);
					else
						printf("%c",32);
				}
				if(i<2)
					printf("\n     %c%c%c%c%c\n",196,179,196,179,196);
			}
			printf("\n");
				

//GAME
			for(k=0;k<9;k++){
				printf("\n\n");
				if(k%2==0){
					system("COLOR 1F");
					printf("  %s : ",p);
				}
				else{
					system("COLOR 4F");
					printf("  %s : ",q);
				}
					
				scanf("%d",&m);
				if(m==1){
					m=0;n=0;
				}
				else if(m==2){
					m=0;n=1;
				}
				else if(m==3){
					m=0;n=2;
				}
				else if(m==4){
					m=1;n=0;
				}
				else if(m==5){
					m=1;n=1;
				}
				else if(m==6){
					m=1;n=2;
				}
				else if(m==7){
					m=2;n=0;
				}
				else if(m==8){
					m=2;n=1;
				}
				else if(m==9){
					m=2;n=2;
				}
				else if(m==10){
					system("COLOR 0F");
					printf("\n\n  Current Game Canceled...Try Again\n\n");
					gets(p1);
					gets(p1);
					system("cls");
					break;
				}
				else{
					system("COLOR 0F");
					printf("\n\n  Wrong Input...Try Again\n\n");
					gets(p1);
					gets(p1);
					k=k-1;
					continue;
				}
				if(k%2==0){
					if(a[m][n]!=-1){
						system("COLOR 0F");	
						printf("\n\n  Overplay...Try Again\n\n");
						gets(p1);
						gets(p1);
						k=k-1;
						continue;
					}	
					a[m][n]='O';
				}
				else{
					if(a[m][n]!=-1){
						system("COLOR 0F");
						printf("\n\n  Overplay...Try Again\n\n");
						gets(p1);
						gets(p1);
						k=k-1;
						continue;
					}
					a[m][n]='X';
				}
				system("cls");
				printf("\n\n");
				for(i=0;i<3;i++){
					printf("     ");
					for(j=0;j<3;j++){
						if(j<2){
							if(a[i][j]==-1)
								x=32;
							else if(a[i][j]=='X')
								x=88;
							else
								x=79;
							printf("%c%c",x,179);
						}
						else{
							if(a[i][j]==-1)
								x=32;
							else if(a[i][j]=='X')
								x=88;
							else
								x=79;
							printf("%c",x);
						}
					}
					if(i<2)
						printf("\n     %c%c%c%c%c\n",196,179,196,179,196);
				}
				printf("\n");
				if(k>3)
				{
					if(((a[0][0]==a[1][0]&&a[0][0]==a[2][0]&&a[0][0]!=-1)
							||(a[0][1]==a[1][1]&&a[0][1]==a[2][1]&&a[0][1]!=-1)
								||(a[0][2]==a[1][2]&&a[0][2]==a[2][2]&&a[0][2]!=-1))||
						((a[0][0]==a[0][1]&&a[0][0]==a[0][2]&&a[0][0]!=-1)
							||(a[1][0]==a[1][1]&&a[1][0]==a[1][2]&&a[1][0]!=-1)
								||(a[2][0]==a[2][1]&&a[2][0]==a[2][2]&&a[2][0]!=-1))||
						((a[0][0]==a[1][1]&&a[0][0]==a[2][2]&&a[0][0]!=-1)
							||(a[1][1]==a[2][2]&&a[1][1]==a[0][0]&&a[1][1]!=-1)
								||(a[2][2]==a[1][1]&&a[2][2]==a[0][0]&&a[2][2]!=-1))||
						((a[0][2]==a[1][1]&&a[0][2]==a[2][0]&&a[0][2]!=-1)
							||(a[1][1]==a[0][2]&&a[1][1]==a[2][0]&&a[1][1]!=-1)
								||(a[2][0]==a[1][1]&&a[2][0]==a[0][2]&&a[2][0]!=-1)))
						{
							if(k%2==0){
								system("COLOR 1F");
								printf("\n\n   And the Winner is %s\n\n",p);
								gets(p1);
								gets(p1);
								system("cls");
							}
								
							else{
								system("COLOR 4F");
								printf("\n\n   And the Winner is %s\n\n",q);
								gets(p1);
								gets(p1);
								system("cls");
							}
							break;
						}
				}
				if(k==8){
					system("COLOR 0F");
					printf("\n\n   Its Draw...Try Again\n\n");
					gets(p1);
					gets(p1);
					system("cls");
				}
			}
		}
		else{
			system("COLOR 0F");
			printf("\n\n   Wrong Keyword...Try Again\n\n   Press ENTER to Go Back to Menu");
			gets(p1);
			gets(p1);
			system("cls");
		}
	}
}
