#include<stdio.h>
// DİZİLERİN  OLUŞTURULMASI VE DİZİ ELEMANLARIN EKRANA BASILMASI
int main(){


    // 5 elemanlı bir dizi oluşturma ve dizinin birinci elemanını ekrana yazdırma komutu
  int dizi[5]={1,2,3,4,5};
  printf("Dizinin birinci elemanı %d ' dir. \n",dizi[0]);
//------------------------------------------------------------------------------------------------
  // 5 elemanlı bir diziyi farklı biçimde oluşturma ve dizinin birinci elemanını ekrana yazdırma
  int dizi1[5];
  dizi[0]=15;
  dizi[1]=2;
  dizi[2]=3;
  dizi[3]=4;
  dizi[4]=5;

  printf("Dizinin birinci elemanı %d dir. \n",dizi[0] );
//------------------------------------------------------------------------------------------------
  int dizi2[]={1,2,3,4,5,6};
  //Aşağıdaki komut dizinin 2. elemanını çağıracaktır.
  printf("%d\n",dizi[1] );
  //Dizinin ikinci elemanını aşağıdaki gibi değiştirebiliriz.
  dizi[1]=10;
  //Aşağıdaki komut dizinin 2. elemanını 10 olarak yazdıracaktır.
  printf("%d\n",dizi[1]);
  //Dizi elemanının diğer biçimde de değiştirebiliriz.
  dizi[1]=dizi[3]*4;
  //Aşağıdaki komut, dizinin 2.elemanını dizinin 4.elemanının 4 ile çarpılmış biçimiyle yazdıracaktır.
  //Çünkü yukarıdaki komut, dizinin 2. elemanına başka bir değer atamıştır.
  printf("%d\n",dizi[1]);
  //----------------------------------------------------------------------------------------------
  

}