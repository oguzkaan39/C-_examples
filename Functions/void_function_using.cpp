#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mesaj()
{
  printf("Bu bir mesaj fonksiyonudur.\n");
}
void zar_at()
{
  //srand fonksiyonu bilgisayarın sürekli farklı değer üretmesini sağlar.
  srand(time(NULL));
  int deger=1+rand()%6;
  printf("%d\n",deger );
}
//kontrol edilecek sayi sadece bir tane olduğu için alınan parametre değeri (int sayi)'dir.
void kontrol_et(int sayi)
{
  if(sayi%2==0)
  {
    printf("Bu sayi cifttir.");
  }
  else 
  {
    printf("Bu sayi tektir.\n");
  }
}
void kutu_ciz(int boy, int en)
{
  for (int i=0;i<boy;i++)
  {
    for (int j=0;j<en;j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
int main()
{
  mesaj();
  zar_at();
  int s;
  printf("Bir sayi giriniz : ");
  scanf("%d",&s);
  //Fonksiyonda kontrol edilecek değeri kullanıcının girdiği değer olan s değeridir.
  //Bu yüzden parametre olarak parantez içine s değeri girilir. 
  //Girilen 's' değeri fonksiyonda 'sayi' değerine eşitlenerek işlem yapılır.
  kontrol_et(s);
  int boy;
  int en;
  printf("Cizilecek kutunun boy degerini giriniz : \n");
  scanf("%d",&boy);
  printf("Cizilecek kutunun en degerini giriniz : \n");
  scanf("%d",&en);
  kutu_ciz(boy,en);
}
  

