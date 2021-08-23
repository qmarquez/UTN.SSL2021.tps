/* 3 posibles tokens:
- EOF
- SEP: coma ","
- CAD: sucesion de caracteres que no incluya los anteriores o espacios
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "./scanner.h"

int main(void)
{
  char c;
  int printingString = 0;
  int i = 0;

  while ((c = getchar()) != EOF)
  {
    if (isspace(c))
    {
      printingString = 0;
      continue;
    }
    else if (c == ',')
    {
      printingString = 0;
      printf("\nSeparador: %c", c);
    }
    else
    {
      if (!printingString)
      {
        printingString = 1;
        printf("\nCadena: ");
      }
      printf("%c", c);
    }
  }
  printf("\nFin de texto:\n");
}