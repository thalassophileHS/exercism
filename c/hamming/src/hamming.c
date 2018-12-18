#include "hamming.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int compute(const char *dna1, const char *dna2) {
  int count = 0;
  if (dna1 && dna2) {
    int len_a = strlen(dna1);
    int len_b = strlen(dna2);
    if (len_a != len_b) {
      count = -1;
    } else {
        for (int i = 0; i < len_a ; i++)
          if (dna1[i] != dna2[i]) count++; 
      }
  } else {
        count = -1; 
  }

  return count;
  
}