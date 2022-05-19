#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  printf("%s\n", argv[1]);
  while (true) {
    int i = 0;
    while (argv[1][i] != 0) {
      printf("%c ", argv[1][i]);
      i++;
  }
  //char nombre[20] = "antezana";
  //printf("%s\n", nombre);

}
return 0;
}
