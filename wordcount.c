//author:Mika Chesnutt 
//date: February 8th, 2016 
//Problem Set #2 Wordcount
#include <stdio.h>

  int main() {

    
    //counting variables  
    int chars = 0;
    int words = 0;
    int lines = 0;
    int startcount = 0;
    int spacing = ' ';

    while (1) {
      int k = getchar();
      if (k < 0) break;
      char c = (char) k;

      if ((c != '\n') || (c != spacing)) {
        chars++;
        if ((k > 33) && (k < 126)) {
          startcount = 1;
        }
      }

      //lines and words
      if ((c == spacing) && (startcount == 1)) {
        words++;
        startcount = 0;
    }


    if ((c == '\n') && (startcount == 1)) {
      lines++;
      words++;
      startcount = 0;
    } 
      else if ((c == '\n') && (startcount == 0)) {
      lines++;
      startcount = 0;
    }
}

    printf("Your text has %d chars, %d words, %d lines\n", chars, words, lines);
  }