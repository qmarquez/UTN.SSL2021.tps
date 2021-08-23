#include <stdio.h>
#include "scanner.h"

enum tokenType
{
  COMA = ',',
  FDT = EOF,
  ESPACIO = ' '
}

main(void)
{
  char token;
  int printingString = 0;
  int printNewLine = 0;
  while ((token = get_token()) != FDT)
  {
    if (token == ESPACIO)
    {
      if (printingString)
      {
        printf("\n");
      }
      printingString = 0;
      continue;
    }
    else if (token == COMA)
    {
      if (printingString)
      {
        printingString = 0;
        printf("\n");
      }
      printf("Separador: ");
      printNewLine = 1;
    }
    else if (!printingString)
    {
      printf("Cadena: ");
      printNewLine = 1;
      printingString = 1;
    }

    printf("%c", token);

    if (printNewLine && !printingString)
    {
      printNewLine = 0;
      printf("\n");
    }
  }
  printf("Fin de texto: \n");
}