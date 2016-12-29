#include <stdio.h>
int main(){
  //2 ye 2lik bir matrisi for döngüsü ile yazdırma
  int matris1[2][2]={{4,5},{6,7}};
  for (int i = 0; i < 2; i++)//İlk for döngüsü satır sayısını döndürür
   {
     for (int j = 0; j < 2; j++)//İkinci for döngüsü sütun sayısını döndürür
     {
        printf("%d ",matris1[i][j]);
     }
     printf("\n");
   } 
   //--------------------------------------------------------------------------------
   //Matris değerlerini kullanıcıdan alarak for döngüsü ile ekrana yazdırma 
   int matris2[2][2];
   for(int i=0; i<2; i++)
   {
    for(int j=0; j<2;j++)
    {
      printf("Sayı giriniz : ");
      scanf("%d",&matris2[i][j]);
    }
   }
   for(int i=0; i<2; i++)
   {
    for(int j=0; j<2;j++)
    {
      printf("%d ",matris2[i][j]);
      
    }
    printf("\n");
   }
   
}

  