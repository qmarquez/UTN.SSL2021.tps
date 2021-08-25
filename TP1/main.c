#include <stdio.h>
#include "scanner.h"

int main(void)
{
  char buffer[128];
  char token;

  while ((token = get_token(buffer)) != FDT)
  {
    if (token == COMA)
    {
      printf("Separador: ");
    }
    else if (token == CADENA)
    {
      printf("Cadena: ");
    }

    printf("%s\n", buffer);
  }
  printf("Fin de texto: \n");
}