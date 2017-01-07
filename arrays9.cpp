#include <stdio.h>
//Dizilerde Arama
int main()
{

 int sayi,i;
 int bulundu=0;
 int sayilar[]={15,6,32,23,76,65,23,98,11,56};
 printf("Aranacak sayiyi giriniz : ");
 scanf("%d",&sayi);
  
  for ( i = 0; i < 10; i++)
  {
    if(sayilar[i]==sayi)
    {
      bulundu=1; break;
    }
  }
  if(bulundu==1)
  {
    printf("Aranan %d sayisi dizinin %d. ci indisinde bulundu\n",sayi,i);
  }
  else
  {
    printf("Aranan sayı bulunamadı\n");
  }
}