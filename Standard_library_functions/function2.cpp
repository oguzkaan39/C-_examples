#include <stdio.h>
#include <string.h>
//strcpy Fonksiyonu kullanımı ve örnekleri
int main()
{
  //strcpy(parametre1,parametre2) Parametre2'yi Parametre2'ye kopyalar.
  char isim[10]="Oguz";
  char isim2[10];
  printf("%s\n",strcpy(isim2,isim));

}