#include "shell.h"
/**
*
*
*
*/
int main()
{

  char *line;
  size_t len = 20;

  char ** arguments;

  line = malloc(sizeof(char)* len);
  printf("myshel$ ");

  while (getline(&line, &len, stdin) != -1)
  {
    arguments = _split_string(line);
      _exec(arguments);
    printf("myshel$ ");
  }
  return (0);
}
