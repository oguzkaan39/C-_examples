#include <stdio.h>
int main()
{
  //10 Kişilik bir sınıftaki öğrencilerin notlarını kullanıcıdan alan ve ortalamasını bulan program
  int ogrNot[10];
  int toplam=0;
  float ortalama;
  for (int i = 0; i<=9; i++)
  {
    printf("%d. Ogrencinin notunu giriniz : ",i+1);
    scanf("%d",&ogrNot[i]);
    toplam=ogrNot[i]+toplam;
  }
  ortalama=toplam/10;
  printf("Ogrencilerin not ortalamasi : %.2f\n",ortalama);

//-------------------------------------------------------------------------------------------------
//Kalabalık bir sınıfta öğrenci notlarının sınıflandırılmasını ve 
//hangi harf notuna karşılık geldiğini bulan program
int note[10];
int aanotu=0,bbnotu=0,ccnotu=0,ddnotu=0,ffnotu=0;
for (int i = 0; i <10; i++)
{
  printf("%d. ci öğrencinin notunu giriniz : ",i+1);
  scanf("%d",&note[i]);
  
if(note[i]>=90 && note[i]<=100)
  {
    aanotu++;
  }
else if(note[i]>=70 &&note[i]<=89)
{
  bbnotu++;
}
else if(note[i]>=50 &&note[i]<=69)
{
  ccnotu++;
}
else if(note[i]>=30 &&note[i]<=49)
{
  ddnotu++;
}
else 
{
  ffnotu++;
}
}
printf("%d adet AA notu \n",aanotu);
printf("%d adet BB notu \n",bbnotu);
printf("%d adet CC notu \n",ccnotu);
printf("%d adet DD notu \n",ddnotu);
printf("%d adet FF notu \n",ffnotu);
}