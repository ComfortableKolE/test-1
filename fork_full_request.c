#include <stdio.h>

int main()
{
  int i;
  for (i = 0; i < 9; i++) {
  	printf("%d단\n");
    for (j = 0; j < 9; j++) {
      printf("%dx%d=%d \n", i, j, i * j);
    }
  }
  
  return 0;
}
