#include <stdio.h>
//Struct(Yapılar)'ın Fonksiyonlar ile kullanımı.
struct futbolcu
{
  char ad[20];
  char takim[30];
  int yas;
}ftb={"Ricardo Quaresma","Beşiktaş",33};
struct kariyer
{
  char takim1[20];
  char takim2[20];
  char takim3[20];
}tkm={"Porto","Al Ahli","Beşiktaş"};
void yazdir(struct futbolcu x, struct kariyer y)
{
  printf("İsim = %s\n",x.ad);
  printf("Takım = %s\n",x.takim);
  printf("Yas = %d\n",x.yas);
  printf("Kariyeri = %s\n",y.takim1);
  printf("Kariyeri = %s\n",y.takim2);
  printf("Kariyeri = %s\n",y.takim3);
}


int main()
{
  yazdir(ftb,tkm);
}