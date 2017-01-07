#include <stdio.h>
#include <stdlib.h>
//Kullanıcıdan değer alınarak oluşturulan dizinin içinde arama
int main()
{
  int j,sayi;
  int bulundu=0;
  int sayilar[10];
  for (int i = 0; i < 10; i++)
  {
    printf("Dizi elemanlarını giriniz : ");
    scanf("%d",&sayilar[i]);
  }
  //Sayılar girildikten sonra ekran temizlenecektir
  system("CLS");
  printf("Aranacak değeri giriniz : \n");
  scanf("%d",&sayi);
  for(j=0; j<10; j++)
  {
    if(sayi==sayilar[j])
    {
      bulundu=1; break;
    }
  }
  if(bulundu==1)
  {
    printf("Aranan %d değeri dizinin %d indisinde bulundu",sayi,j);
  }
  else
  {
    printf("Aranan değer bulunamadı.");
  }
  
}