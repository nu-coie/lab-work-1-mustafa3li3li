#include <stdio.h>

int main(void)
{
  printf("Hello, World! \n");

  char name[20];
  printf("Whats your name? ");
  scanf("%c", &name);

  printf("Hello, %c", name);
getchar();
}
