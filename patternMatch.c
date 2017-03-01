//author: Mika Chesnutt
//date: February 24, 2017 
//patternmatch.c takes in a text and a pattern and checks to see if the pattern is matched in the text 



#include <stdio.h>
//function declarations 
int readline(int array, int n); 
int* findmatch(int pattern, int *text, int patternlen, int textlen);  
int printmessage(int* position, int *text, int patternlen, int textlen); 


int main() {
   int text[40], pattern[40], *position;
   int textlen, patternlen;

   printf("Enter text: ");
   textlen = readline(text, 40);
   printf("Enter pattern: ");
   patternlen = readline(pattern, 40); 
   position = findmatch(pattern, text, patternlen, textlen);
   printmessage(position, text, patternlen, textlen);
}



//read line of characters from keyboard, max number, if more than that
//ignore rest, returns number of characters read 
int readline(int array, int n) { 
   int *t = array; 
   //int s;  
   int counttxt = 0; 
   while ((counttxt != n)) { 
      int c = getchar(); 
      if ((c  == '\n') || (c < '\0')) {
         return counttxt; 
      }
      *t = c; 
      t = t + 1; 
      counttxt = counttxt + 1; 
   } 
   while (1) { 
      int c = getchar(); 
      if ((c  == '\n') || (c < '\0')) {
         break; 
      } 
   }
   return counttxt; 
}



int* findmatch(int pattern, int *text, int patternlen, int textlen) {
      int plength = patternlen; 
      int tlength = textlen; 
      int* p = pattern; 
      int* t = text; 
      int* firstposition = text; 
      int checkpattern = 0; 
      int* found; 

      if (plength > tlength) {     //if length of pattern is greater than text there can be no match 
         found = NULL; 
         return found;
      }   
      while (t < (text + tlength) ){   //loop until t is less than (text plus textlength)
         if ((*t == *p) || (*p == 63)) { 
         t = t + 1; 
         p = p + 1; 
         checkpattern++; 
            if (checkpattern == plength) {      //when yes reaches length of pattern, pattern was found, return position 
               found = firstposition; 
            return found;
            }
         }
         else { 
            p = pattern;
            checkpattern = 0; 
            firstposition++; 
            t = firstposition;   
         }
      }
      return found = NULL;                       //return null
   }
   
   


//print about what happened, if no match then no match message printed
// if match then function prints position where match begins and the remaining text characters 
int printmessage(int* position, int *text, int patternlen, int textlen) {
   int length = patternlen;
   int pos = (position - text)+1;  
   if (position == NULL) { 
      printf("No match was found!\n"); 
   }
   else { 
      int x = pos; 
      int *i = position + length; 
      int counter = 0;   
      printf("The pattern was found at character %d\n", x); 
      printf("The remaining text chars are:  ");
      while (counter <= (textlen - (pos + length))) {
         putchar(*i); 
         i++; 
         counter++;  
      }
      printf("\n");
   }
}


