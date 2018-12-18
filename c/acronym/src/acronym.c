#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "acronym.h"

char *abbreviate(const char* phrase){
	if(phrase == NULL){
    	return NULL;
  	}
  	
	int len = strlen(phrase);
	if(len == 0)
		return NULL;
  	char ph[len + 1];
  	
  	strcpy(ph, phrase);
  	
  	int count = 0;

  	char *ab;
  	ab = malloc(sizeof(char)*100);

	ab[0] = ph[0]; 
	int i = 1; 	
  	while(ph[count] != '\0'){
  		if(ph[count] == ' ' || ph[count] == '-'){
  			count++;
  			ab[i] = ph[count];
  			i++;
  		}
  		count++;
  	}
  	ab[i] = '\0';
  	for(int i = 0; i < count; i++){
  		ab[i] = toupper(ab[i]);
  	}

  	return ab;
    
}