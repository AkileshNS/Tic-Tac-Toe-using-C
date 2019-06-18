#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<time.h>

int main(){

/* variables declared*/
int i,j,y,z,x,a,b;
int n = 0;
int r = 0;
int t = 0;
int q;
int arr[3][3]={{0,0,0},{0,0,0},{0,0,0}};
/*switch statement to choose game mode*/
printf("Choose Difficulty serial number:\n");
printf("1.Computer\n");
printf("2.Manual\n");
scanf("%d",&x);
printf(" | | \n");
printf(" | | \n");
printf(" | | \n"); 


switch(x){

case 1:
/* The while case below is all the possible combinations of the game ending in a win/loss*/
if(r<5){
while(!(
	 ((arr[0][0]==1)&&(arr[0][1]==1)&&(arr[0][2]==1))||
	 ((arr[1][0]==1)&&(arr[1][1]==1)&&(arr[1][2]==1))||
	 ((arr[2][0]==1)&&(arr[2][1]==1)&&(arr[2][2]==1))||
	 ((arr[0][0]==1)&&(arr[1][1]==1)&&(arr[2][2]==1))||
     ((arr[0][2]==1)&&(arr[1][1]==1)&&(arr[2][0]==1))||
     ((arr[0][0]==1)&&(arr[1][0]==1)&&(arr[2][0]==1))||
	 ((arr[0][1]==1)&&(arr[1][1]==1)&&(arr[2][1]==1))||
	 ((arr[0][2]==1)&&(arr[1][2]==1)&&(arr[2][2]==1))||
     ((arr[0][0]==2)&&(arr[0][1]==2)&&(arr[0][2]==2))||
     ((arr[1][0]==2)&&(arr[1][1]==2)&&(arr[1][2]==2))||
     ((arr[2][0]==2)&&(arr[2][1]==2)&&(arr[2][2]==2))||
	 ((arr[0][0]==2)&&(arr[1][1]==2)&&(arr[2][2]==2))||
	 ((arr[0][0]==2)&&(arr[1][0]==2)&&(arr[2][0]==2))||
	 ((arr[0][1]==2)&&(arr[1][1]==2)&&(arr[2][1]==2))||
	 ((arr[0][2]==2)&&(arr[1][2]==2)&&(arr[2][2]==2))||
     ((arr[0][2]==2)&&(arr[1][1]==2)&&(arr[2][0]==2))
			
			)){

	
printf("Enter your move designated by row number,column number:\n");

scanf("%d,%d",&i,&j);
i = i-1;
j = j-1;

while((arr[i][j]==1)||(arr[i][j]==2)){
		
printf("Enter a valid move:\n");

scanf("%d,%d",&i,&j);
i = i-1;
j = j-1;
			
}


arr[i][j]=1;

printf("Your move is\n");
printf("%d|%d|%d\n",arr[0][0],arr[0][1],arr[0][2]);
printf("%d|%d|%d\n",arr[1][0],arr[1][1],arr[1][2]); 
printf("%d|%d|%d\n",arr[2][0],arr[2][1],arr[2][2]);

/* This is case is to check whether player 1 has won or not, in order to continue the game*/
if(!(
	 ((arr[0][0]==1)&&(arr[0][1]==1)&&(arr[0][2]==1))||
	 ((arr[1][0]==1)&&(arr[1][1]==1)&&(arr[1][2]==1))||
	 ((arr[2][0]==1)&&(arr[2][1]==1)&&(arr[2][2]==1))||
	 ((arr[0][0]==1)&&(arr[1][1]==1)&&(arr[2][2]==1))||
     ((arr[0][2]==1)&&(arr[1][1]==1)&&(arr[2][0]==1))||
	 ((arr[0][0]==1)&&(arr[1][0]==1)&&(arr[2][0]==1))||
	 ((arr[0][1]==1)&&(arr[1][1]==1)&&(arr[2][1]==1))||
	 ((arr[0][2]==1)&&(arr[1][2]==1)&&(arr[2][2]==1))			
				)){
            
 /* srand generates a random integer. Tht time function is involved in order to generate different
						random variables at different times. This is used to make the computer's
						moves*/
			    srand(t);
                a = rand(); 
                z = a%3;
            

                srand(t+1);
                b = rand();
                y= b%3;
t = t+2;

while(!(arr[z][y]==0)){

for(t;t<1000;t++){

						
				srand(t);
                a = rand(); 
                z = a%3;

				srand(t+1);
                b = rand();
                y= b%3;

					
			}	
            
			

		}


		
				arr[z][y] = 2;
			

printf("\n");
printf("Computer's move is\n");
printf("%d|%d|%d\n",arr[0][0],arr[0][1],arr[0][2]);
printf("%d|%d|%d\n",arr[1][0],arr[1][1],arr[1][2]); 
printf("%d|%d|%d\n",arr[2][0],arr[2][1],arr[2][2]);




}
}

if(( ((arr[0][0]==1)&&(arr[0][1]==1)&&(arr[0][2]==1))||
	 ((arr[1][0]==1)&&(arr[1][1]==1)&&(arr[1][2]==1))||
	 ((arr[2][0]==1)&&(arr[2][1]==1)&&(arr[2][2]==1))||
	 ((arr[0][0]==1)&&(arr[1][1]==1)&&(arr[2][2]==1))||
     ((arr[0][2]==1)&&(arr[1][1]==1)&&(arr[2][0]==1))||
     ((arr[0][0]==1)&&(arr[1][0]==1)&&(arr[2][0]==1))||
	 ((arr[0][1]==1)&&(arr[1][1]==1)&&(arr[2][1]==1))||
	 ((arr[0][2]==1)&&(arr[1][2]==1)&&(arr[2][2]==1))
		
		)){
	
	printf("Congratulations! You have won\n");
		exit(0);
	
	}

else if(

	 ((arr[0][0]==2)&&(arr[0][1]==2)&&(arr[0][2]==2))||
     ((arr[1][0]==2)&&(arr[1][1]==2)&&(arr[1][2]==2))||
     ((arr[2][0]==2)&&(arr[2][1]==2)&&(arr[2][2]==2))||
	 ((arr[0][0]==2)&&(arr[1][1]==2)&&(arr[2][2]==2))||
	 ((arr[0][0]==2)&&(arr[1][0]==2)&&(arr[2][0]==2))||
	 ((arr[0][1]==2)&&(arr[1][1]==2)&&(arr[2][1]==2))||
	 ((arr[0][2]==2)&&(arr[1][2]==2)&&(arr[2][2]==2))||
     ((arr[0][2]==2)&&(arr[1][1]==2)&&(arr[2][0]==2))
		
		){

	printf("The Computer has won\n");
	exit(0);
	}


}


printf("Sorry, it's a draw!");



case 2: 
if(r<5){
while(!(
	 ((arr[0][0]==1)&&(arr[0][1]==1)&&(arr[0][2]==1))||
	 ((arr[1][0]==1)&&(arr[1][1]==1)&&(arr[1][2]==1))||
	 ((arr[2][0]==1)&&(arr[2][1]==1)&&(arr[2][2]==1))||
	 ((arr[0][0]==1)&&(arr[1][1]==1)&&(arr[2][2]==1))||
     ((arr[0][2]==1)&&(arr[1][1]==1)&&(arr[2][0]==1))||
     ((arr[0][0]==1)&&(arr[1][0]==1)&&(arr[2][0]==1))||
	 ((arr[0][1]==1)&&(arr[1][1]==1)&&(arr[2][1]==1))||
	 ((arr[0][2]==1)&&(arr[1][2]==1)&&(arr[2][2]==1))||
     ((arr[0][0]==2)&&(arr[0][1]==2)&&(arr[0][2]==2))||
     ((arr[1][0]==2)&&(arr[1][1]==2)&&(arr[1][2]==2))||
     ((arr[2][0]==2)&&(arr[2][1]==2)&&(arr[2][2]==2))||
	 ((arr[0][0]==2)&&(arr[1][1]==2)&&(arr[2][2]==2))||
	 ((arr[0][0]==2)&&(arr[1][0]==2)&&(arr[2][0]==2))||
	 ((arr[0][1]==2)&&(arr[1][1]==2)&&(arr[2][1]==2))||
	 ((arr[0][2]==2)&&(arr[1][2]==2)&&(arr[2][2]==2))||
     ((arr[0][2]==2)&&(arr[1][1]==2)&&(arr[2][0]==2))
			
			)){

	
printf("Player 1 enter your move designated by row number,column number:\n");

scanf("%d,%d",&i,&j);
i = i-1;
j = j-1;

while((arr[i][j]==1)||(arr[i][j]==2)){
		
printf("Enter a valid move:\n");

scanf("%d,%d",&i,&j);
i = i-1;
j = j-1;
			
}


arr[i][j]=1;

printf("Player 1 your move is\n");
printf("%d|%d|%d\n",arr[0][0],arr[0][1],arr[0][2]);
printf("%d|%d|%d\n",arr[1][0],arr[1][1],arr[1][2]); 
printf("%d|%d|%d\n",arr[2][0],arr[2][1],arr[2][2]);

 
if(!(
	 ((arr[0][0]==1)&&(arr[0][1]==1)&&(arr[0][2]==1))||
	 ((arr[1][0]==1)&&(arr[1][1]==1)&&(arr[1][2]==1))||
	 ((arr[2][0]==1)&&(arr[2][1]==1)&&(arr[2][2]==1))||
	 ((arr[0][0]==1)&&(arr[1][1]==1)&&(arr[2][2]==1))||
     ((arr[0][2]==1)&&(arr[1][1]==1)&&(arr[2][0]==1))||
	 ((arr[0][0]==1)&&(arr[1][0]==1)&&(arr[2][0]==1))||
	 ((arr[0][1]==1)&&(arr[1][1]==1)&&(arr[2][1]==1))||
	 ((arr[0][2]==1)&&(arr[1][2]==1)&&(arr[2][2]==1))			
				)){


printf("Player 2 enter your move designated by row number,column number:\n");

scanf("%d,%d",&i,&j);
i = i-1;
j = j-1;

while((arr[i][j]==1)||(arr[i][j]==2)){
		
printf("Enter a valid move:\n");

scanf("%d,%d",&i,&j);
i = i-1;
j = j-1;
			
}


arr[i][j]=2;
            
 
}

printf("\n");
printf("Player 2 your move is\n");
printf("%d|%d|%d\n",arr[0][0],arr[0][1],arr[0][2]);
printf("%d|%d|%d\n",arr[1][0],arr[1][1],arr[1][2]); 
printf("%d|%d|%d\n",arr[2][0],arr[2][1],arr[2][2]);
r++;

if(( ((arr[0][0]==1)&&(arr[0][1]==1)&&(arr[0][2]==1))||
	 ((arr[1][0]==1)&&(arr[1][1]==1)&&(arr[1][2]==1))||
	 ((arr[2][0]==1)&&(arr[2][1]==1)&&(arr[2][2]==1))||
	 ((arr[0][0]==1)&&(arr[1][1]==1)&&(arr[2][2]==1))||
     ((arr[0][2]==1)&&(arr[1][1]==1)&&(arr[2][0]==1))||
     ((arr[0][0]==1)&&(arr[1][0]==1)&&(arr[2][0]==1))||
	 ((arr[0][1]==1)&&(arr[1][1]==1)&&(arr[2][1]==1))||
	 ((arr[0][2]==1)&&(arr[1][2]==1)&&(arr[2][2]==1))
		
		)){
	
	printf("Congratulations!Player 1 has won\n");
		exit(0);
	
	}

else if(

	 ((arr[0][0]==2)&&(arr[0][1]==2)&&(arr[0][2]==2))||
     ((arr[1][0]==2)&&(arr[1][1]==2)&&(arr[1][2]==2))||
     ((arr[2][0]==2)&&(arr[2][1]==2)&&(arr[2][2]==2))||
	 ((arr[0][0]==2)&&(arr[1][1]==2)&&(arr[2][2]==2))||
	 ((arr[0][0]==2)&&(arr[1][0]==2)&&(arr[2][0]==2))||
	 ((arr[0][1]==2)&&(arr[1][1]==2)&&(arr[2][1]==2))||
	 ((arr[0][2]==2)&&(arr[1][2]==2)&&(arr[2][2]==2))||
     ((arr[0][2]==2)&&(arr[1][1]==2)&&(arr[2][0]==2))
		
		){

	printf("Congratulations! Player 2 has won\n");
	exit(0);
}

}
}
printf("Sorry, it's a draw!");
}
}

