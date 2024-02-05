#include <stdio.h>  // you have to declare functions before to achieve reusability
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

//void decision();
//void score();
//int combined();
//void endGame();


int scored,end,marks, total = 0;

// Decision	making function	
    void decision(){
	printf("Click 1 to Get Total Marks\n");
	scanf("%d", &marks);
	
	if(marks == 1){
	if(total > total/2 ) {	
    	printf("Your total marks are %d \n", total);	
     }
     
    else if(total >= total / 3) {
     	printf("Your Total Marks are %d \n", total);
     }
     
     else if(total == total / 2 ) {
    	printf("You've tried");
	}
   
    else {
   	    system("color 03");
   	    printf("Your Marks are %d out of 30. You Loose\n", total); 
    }
    
}
    else { printf(" Game Over !"); }

}

// end of decision making

  void score()
{
      	printf("Click 1 to See your marks\n");
      	scanf("%d", &scored);
      		
      	
    if(scored == 1) { 	
		printf("You scored %d\n\n\n", marks);
	}
	else { printf(" Continued...\n\n\n"); }	
}


// Ending Game function
  void endGame()
{
  	printf("Click 1 to end the game or any number to continue \n\n");
  	scanf("%d", &end);
  	
  	if(end == 1){
  		decision();
	  }
	else {
	 main();
	  }
  }
	// combined function
 int combined(){
 score(); 
 endGame();
 return 0;
 }
 
// game function
		
 int myGame(char chosen, char value) {	
	if(chosen == value) {
	return -1;	
	} 
	else if((chosen == 'r' && value=='p') || 
	(chosen == 's' && value== 'r' )||
	(chosen == 'p' && value== 's')) {		 
		return 0;		
   }
    else { 
    return 1;
	}
  }

 
/// main function


int main() 
{	int n,start;
    char value,chosen,result;
	printf("ROCK , PAPER, SCISSORS Game\n\n\n");
	printf("Click 1 to Start\n");
	scanf("%d", &start);
	 
	 if(start != 1) {
	 	printf("Game over.\n");
	 }
	 
	if(start ==1){
	system("color 03");

	printf("input p for paper, s for scsissor, and r for rock: \n");
	scanf(" %c", &chosen);

	srand(time(NULL));
	n = rand() %3;
    
    switch(n) {
    case 0: value = 's';
    break;
    case 1: value = 'r';
    break;
    case 2: value = 'p';
    break;
    default: value = 'k';
	}
	
	result = myGame(chosen,value);
	
    if(result == 0) {
    	total +=0;
    	printf("You loose\n");
    	combined();
	}
	else if(result == 1) {
		total +=10; 
		printf("You Win\n");
		combined();
	}
	else {
	total +=0;
	printf(" It's a match !' \n Repeat Again\n\n\n");
	combined();
	}
   
  }
  return 0;
}
