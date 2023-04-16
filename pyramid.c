#include <stdio.h>

int main()
{
int L;

printf("Enter the base length of the pryamid : ");
scanf("%d", &L);

for(int i=1;i<=L;i+2)
  {
    for(int j=0;j<=i;j+1)
        printf("#");

   printf("\n");
  }
  return 0;
}