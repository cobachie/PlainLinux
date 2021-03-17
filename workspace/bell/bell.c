// gcc bell.c -o bell
// ./bell
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("\007");
  exit(0);
}  