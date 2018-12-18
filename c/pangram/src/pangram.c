#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "pangram.h"

bool is_pangram(const char *sentence){
if(sentence == NULL) {
    return false;
}

  int len = strlen(sentence);
  char word[len + 1];
  strcpy(word, sentence);

  if (len == 0)
  	return false;
    
  for(int i = 0; i < len; i++){
  	word[i] = tolower(word[i]);
  }

  int used[26]={0},total=0;

  for(int i=0;word[i]!='\0';i++){
        if('a'<=word[i] && word[i]<='z'){
            total += !used[word[i]-'a'];
            used[word[i]-'a']=1;
        }
  }

  if (total == 26)
  	return true;
  else return false;
}