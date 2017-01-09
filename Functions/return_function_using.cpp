#include <stdio.h>
#include <stdlib.h>
//En basit kullanımı ile return fonksiyonu kullanımı
int topla(int x,int y)
{
  int sonuc=x+y;
  return sonuc;
}
int carp(int x, int y)
{
  int sonuc=x*y;
  return sonuc;
}
int nTopla(int x)
{
  int toplam=0;
  for (int i = 1; i <=x; i++)
  {
    
    
    toplam+=i;
    
  }
  return toplam;
}
int us_al(int taban,int us)
{
  int sonuc=1;
  for (int i = 1; i <=us; i++)
  {
    
    sonuc*=taban;
    
  }
  return sonuc;
}
int main()
{
  int a,b,sayi,x,y;
  printf("Birinci değeri giriniz : ");
  scanf("%d",&a);
  printf("İkinci değeri giriniz : ");
  scanf("%d",&b);
  printf("Toplam = %d\n",topla(a,b));
  printf("Carpim = %d\n",carp(a,b));
  printf("1'den kaça kadar sayılar toplansın ? \n");
  scanf("%d",&sayi);
  printf("Toplam = %d",nTopla(sayi));
  printf("Birinci değeri giriniz : ");
  scanf("%d",&x);
  printf("İkinci değeri giriniz : ");
  scanf("%d",&y);
  printf("%d üzeri %d = %d'dir \n",x,y,us_al(x,y));

}