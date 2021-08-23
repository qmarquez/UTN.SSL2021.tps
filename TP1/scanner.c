#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int get_token()
{
  char c;

  while ((c = getchar()) != EOF)
  {
    if (isspace(c))
    {
      return ' ';
    }
    else
    {
      return c;
    }
  }

  return EOF;
}