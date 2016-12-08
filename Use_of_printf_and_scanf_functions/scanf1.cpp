#include<stdio.h>
int main(){
  //sayi adında bir değişken oluşturma
  int sayi;
  //'Bir sayi giriniz mesajını ekrana bastırma'
  printf("Bir sayi giriniz : ");
  //Scanf fonksiyonu kullanımı.
  //Scanf fonksiyonu klavyeden girilen veriyi okumak için kullanılır.
  scanf("%d",&sayi);
  //Klavyeden girilen sayıyı ekrana bastıran komut aşağıdaki gibi kullanılır.
  printf("Girdiğiniz sayi :  %d",sayi);
}