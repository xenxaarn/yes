#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc < 2 || strcmp(argv[1], "yes") != 0) {
    return 1;
  }
  while (1) {
    puts("y");
  }
  return 0;
}
