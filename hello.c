#include <stdio.h>

int main(void)
{
  printf("Hello, World! \n");

  char name[20];
  printf("Whats your name? ");
  scanf("%s", &name);

  printf("Hello, %s", name);
}
