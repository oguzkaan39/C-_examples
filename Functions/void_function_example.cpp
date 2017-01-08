#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sayisal_loto()
{
  srand(time(NULL));
for (int i = 0; i < 6; i++)
{
  printf("%d.Kolon = ",i+1);
  for (int j = 0; j < 6; j++)
  {
    printf("%d ",1+rand()%45);
  }
  printf("\n");
}
}
int main()
{
sayisal_loto();
}