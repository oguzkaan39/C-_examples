#include <stdio.h>
//ÇOK BOYUTLU DİZİLER
int main()
{
  //Çok boyutlu diziler matris elemanı gibi tanımlanabilir.
  //int matris=[satirdegeri][sutundegeri];

  int matris[2][2];
   matris[0][0]=1;
   matris[0][1]=2;
   matris[1][0]=3;
   matris[1][1]=4;

  printf("%d ",matris[0][0]);
  printf("%d\n",matris[0][1]);
  printf("%d ",matris[1][0]);
  printf("%d\n",matris[1][1]);

  //Matris elemanları üzerinde değişiklikler yapılabilir.
  matris[0][0]=matris[1][0]*3+5;
  //Yeni değişikliğin ekrana yazılması aşağıdaki gibidir.
  printf("0'a 0 elamanının yeni değeri : %d\n",matris[0][0]);
  //----------------------------------------------------------------------------------
  //Bir matrise değer ataması ;
  //int matris[satir_degeri][sutun_degeri];
  int matris2[2][2]={{1,2},{3,4}};
  printf("%d ",matris2[0][0]);
  printf("%d\n",matris2[0][1]);
  printf("%d ",matris2[1][0]);
  printf("%d\n",matris2[1][1]);

  int matris3[2][3]={{1,2,3},{4,5,6}};
  printf("%d ",matris3[0][0]);
  printf("%d ",matris3[0][1]);
  printf("%d\n",matris3[0][2]);
  printf("%d ",matris3[1][0]);
  printf("%d ",matris3[1][1]);
  printf("%d\n",matris3[1][2]);
  //-----------------------------------------------------------------------------------
  
}
