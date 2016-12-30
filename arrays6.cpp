#include <stdio.h>
//COK BOYUTLU DİZLERE 
//2 fabrikanın 5 çalışanının maaşı 1000 tl den yüksek ise maaşına %10 zam yapan program.
//Birinci iç içe geçmiş for döngüsü kullanıcıdan eski maasları alır ve eğer 1000 tl den
//yüksek ise maaşına %10 zam yapar ve aynı değişkene atar.
//ikinci iç içe geçmiş for döngüsü ise yeni maaşları tekrar kullanıcıya geri döndürür.
int main()
{
  int fabrika[2][5];
  for (int i = 0; i <2; i++)
  {
    for(int j=0; j<5; j++)
    {
      printf("%d. ci fabrikanın %d. elemanının eski maası : ",i+1,j+1);
      scanf("%d",&fabrika[i][j]);
      if(fabrika[i][j]>=1000)
      {
        fabrika[i][j]+=fabrika[i][j]*0.10;
      }
    }
  }
  for(int i=0; i<2; i++)
  {
    for (int j=0; j<5; j++)
    {
      printf("%d. ci fabrikanın %d. elemanının yeni maası : %d\n",i+1,j+1,fabrika[i][j]);
    }
  }
}