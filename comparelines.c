// author: Mika Chesnutt
// date: February 15, 2017 
//compares two lines of input and determines which one is earliest in lexicographical order ("dictionary order")

#include <stdio.h>
  
  int A[40];
  int B[40];

int main() {
  int *p = A;
  int i;
  int j; 
  int lengthp = 0, lengthq = 0, lengthLoop = 0;       //initializing the length of the arrays and the loop 
  int *q = B;



  while ((i = getchar()) != ('\n')) {         //reading in the first array       
    *p = i;
    p = p + 1;
    lengthp++;
  } 
  
  while ((j = getchar()) != ('\n')){        //reading in the second array 
      *q = j;
      q = q + 1;
      lengthq++; 
  }


p = A;
q = B;
while ((*p != 0) && (*q != 0)) {            //compare the values when both are not null 
    if (*p == *q) {
    p = p + 1;
    q = q + 1;
    lengthLoop++;
    if ((lengthp == lengthq) && (lengthp == lengthLoop)) {     //if the length of the two inputs is the same as the loop and the values , the lines are the same 
      printf("The lines are the same!\n");
      break;
    }
  } else if (*p > *q) {
      printf("The second line is lexicographically smaller!\n");
      break; 
  } else if ( *p < *q) {
    printf("The first line is lexicographically smaller!\n");
    break;
  }
}
}

