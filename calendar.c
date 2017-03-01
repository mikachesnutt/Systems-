//author: Mika Chesnutt
// date: February 8, 2017 
// Problem Set #2 Calendar 


#include <stdio.h>

  int main() {
    int daysmonth, startday;
    //int weekcounter = 3;

    printf("Enter number of days in month:");
    scanf("%d", &daysmonth);

    printf("Enter starting day of the week (1=Sun, 7=Sat):"); 
    scanf("%d", &startday);

    //check to see if it is a valid month 
    if ((daysmonth < 28) || (daysmonth > 31)) {
       printf("Not a real month!");
	}
       
 		// padding with spacing until the first day, if start at 5, need 4 spaces 
        int spacing = (((startday-1) * 4)); 
		for (int i = 0; i < spacing; i++) {
          printf(" ");
        }


        int counter = 1;
        int weekday = startday;  
        for (int i = 0; i < daysmonth; i++) {
            printf("%4d", counter);
            counter++; 
            weekday++;     
            if ((weekday % 7) == 1) {
          	printf("\n"); 
          } 
            } 

        printf("\n"); 

   
  }






    

