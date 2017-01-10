#include <stdio.h>
#define n 5
#define m 5

void maximumbul(int dizi[], int boyut)
{
  int max=0;
  for (int i = 0; i <boyut; i++)
  {
    printf("%d. değeri giriniz : ",i+1);
    scanf("%d",&dizi[i]);
    if(dizi[i]>max)
      {
        max=dizi[i];
      } 
  }
  printf("Maximum değer = %d\n",max); 
}

  void fonksiyon2(int dizi2[], int boyut2)
  {
    for (int j = 1; j <=boyut2; j++)
    {
      printf("%d. ci ogrencinin notu : ",j);
      scanf("%d",&dizi2[j]);
    }
    printf("\n\n");
    for (int j = 1; j <=boyut2; j++)
    {
      printf("%d. ci ogrencinin notu : %d\n",j,dizi2[j]);
    }
  }
  float orthesapla(int dizi2[], int boyut2)
  {
    float toplam=0;
    for (int i = 1; i <=boyut2; i++)
    {
      toplam+=dizi2[i];
    }
    float ortalama=toplam/boyut2;
    printf("Sınıf ortalaması = %.2f\n",ortalama);
    return ortalama;
  }
int main()
{
  int dizi[n];
  int dizi2[m]; 
  maximumbul(dizi,n);
  fonksiyon2(dizi2, m);
  orthesapla(dizi2, m);
}