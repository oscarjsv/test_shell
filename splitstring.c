#include "shell.h"
/**
*
*
*
*/
char **_split_string(char *line)
{
  int i;
  char *piece;
  char **pieces = malloc(sizeof(char) * 1024);

  piece = strtok(line," \n");
  i = 0;
  while (piece)
  {
    while (piece != NULL)
    {
      pieces[i] = piece;
      i++;
      piece = strtok(NULL," \n");
    }

  }

  return (pieces);
}