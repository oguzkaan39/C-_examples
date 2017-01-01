#include <stdio.h>
int main()
//İki farklı sınıfta bulunan 3 öğrencinin vize ve final notlarının ortalamasının hesaplanması.
{
  char ogrenci[2][3][10]; int vize[2][3]; int final[2][3]; float ortalama[2][3];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Öğrenci adı : ");
      scanf("%s",ogrenci[i][j]);
      printf("%s'nin vize notu : ",ogrenci[i][j]);
      scanf("%d",&vize[i][j]);
      printf("%s'nin  final notu : ",ogrenci[i][j]);
      scanf("%d",&final[i][j]);
      ortalama[i][j]=vize[i][j]*0.4+final[i][j]*0.6;
      
    }
    
  }
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j <3 ; j++)
    {
      printf("%s'nin ortalaması: %.2f\n",ogrenci[i][j],ortalama[i][j]);
    }
    
  }
}
