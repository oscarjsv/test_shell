#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

int _exec(char **token);
void handler(int num);
char ** strtok_(char *line);
char **_split_string(char *line);