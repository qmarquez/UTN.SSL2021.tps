#include <ctype.h>
#include <stdio.h>

#include "scanner.h"

int get_token(char *buffer) {
  char c;
  int index = 0;

  while ((c = getchar()) != EOF) {
    if (isspace(c)) {
      if (index) {
        return CADENA;
      }
      continue;
    } else if (c == ',') {
      if (index) {
        ungetc(c, stdin);

        return CADENA;
      }
      buffer[0] = c;
      buffer[1] = '\0';

      return COMA;
    } else {
      buffer[index++] = c;
    }
  }

  return FDT;
}