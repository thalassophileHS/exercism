#include "rna_transcription.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *to_rna(const char *dna) {
  int i, len = strlen(dna);
  char *rna = (char *)malloc(len + 1);

  for (i = 0; i < len ; i++){
    if (dna[i] == 'A') rna[i] = 'U';
    else if (dna[i] == 'T') rna[i] = 'A';
        else if (dna[i] == 'C') rna[i] = 'G';
          else if (dna[i] == 'G') rna[i] = 'C';
            else return NULL;
  }

  rna[i] = '\0';
  return rna;
}