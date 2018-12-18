#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "isogram.h"

bool is_isogram(const char* w) { 
  if(w== NULL) {
    return false;
  }

  int len = strlen(w);
  char word[len + 1];
  strcpy(word, w);
  char temp;
    
  for(int i = 0; i < len; i++){
  	word[i] = tolower(word[i]);
  }

  for (int i = 0; i < len-1; i++) {
    for (int j = i+1; j < len; j++) {
      if (word[i] > word[j]) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
      }
    }
  }

  for (int i = 0; i + 1 < len; i++)
    for (int j = i + 1; j < len; j++)
      if (word[i] == word[j] && word[i] != '-' && word[i] != ' ')  
        return false; 
  return true;
   
}
