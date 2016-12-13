#include <stdio.h>
//DİZİLER VE DÖNGÜLER
//Dizi elemanların for döngüsü ile ekrana yazdırılması alıştırmaları
int main(){
//Dizinin tüm elemanlarını ekrana yazdıran program
int dizi[]={1,2,3,4,5,6,7,8,9,10};
for(int i=0; i<=9; i++){
  printf("Dizinin %d. elemanı : %d\n",i+1,dizi[i]);
  
}
//-----------------------------------------------------------------------------------------
//Dizinin tüm elemanlarının karelerini yazdıran program
int dizi1[]={2,4,6,8,10};
for (int j=0; j<=4;j++){
  printf("Dizi elemanlarının kareleri : %d\n",dizi1[j]*dizi1[j]);
}
//-----------------------------------------------------------------------------------------
//Dizideki tüm elemanların toplamını ekrana yazdıran program
int dizi2[]={1,2,3,4,5,6,7,8,9,10};
int toplam=0;
for(int m=0; m<=9; m++){
  
  toplam=dizi[m]+toplam;
}
 printf("Dizi elemanlarının toplamı : %d\n",toplam);
 //-----------------------------------------------------------------------------------------
 //Kullanıcıdan girilen değerleri diziye atayan ve ekrana yazdıran program
 int dizi3[5];
for(int k=0;k<=4;k++){
  printf("Sayi giriniz : ");
  scanf("%d",&dizi3[k]);

}
for(int k=0;k<=4;k++){
  printf("%d. sayi = %d\n",k+1,dizi3[k]);
}
//-----------------------------------------------------------------------------------------
//Kullanıcıdan girilern değerleri diziye atayan ve girilen değerlerin toplamını ekrana yazdıran program
int dizi4[5];
int toplam2=0;
for(int k=0;k<=4;k++){
  printf("Sayi giriniz : ");
  scanf("%d",&dizi4[k]);

}
for(int k=0;k<=4;k++){
  printf("%d. sayi = %d\n",k+1,dizi4[k]);
  toplam2=dizi4[k]+toplam2;
  
}
printf("Alınan sayilarin toplami : %d\n",toplam2);
}


