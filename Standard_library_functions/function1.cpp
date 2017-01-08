#include <stdio.h>
#include <string.h>
//strlen Fonksiyonu kullanımı ve örnekleri

int main()
{
  char ad[10];
  printf("Bir isim giriniz : ");
  scanf("%s",ad);
  int uzunluk=strlen(ad);
  printf("Girilen %s değerinin uzunluğu %d'dir\n",ad,uzunluk);
  //-----------------------------------------------------------------------------------
  //Girilen kullanıcı adı 6 karakterden kısa ise;
  //Tekrardan kullanıcı adı girmeye zorlayan program
  geridon:
  char kullanici_adi[100];
  printf("Kullanici adinizi giriniz : ");
  scanf("%s",kullanici_adi);
  if(strlen(kullanici_adi)<=6)
  {
    printf("Lütfen 6 karakerden uzun bir kullanıcı adı giriniz ! \n");
    goto geridon;
  }
  else
  {
    printf("Kayıt başarılı !");
  }
  //-----------------------------------------------------------------------------------
  //Girilen film adını yukardan aşağıya yazan program
  char film[50];
  printf("Film adını giriniz: ");
  scanf("%s",film);
  for (int i=0;i<strlen(kullanici_adi); i++)
  {
    printf("%c\n",film[i]);
  }
  //-----------------------------------------------------------------------------------
  char karakter[60];
  printf("Bir karakter giriniz : ");
  scanf("%s",karakter);
  for (int i=strlen(karakter);i>=0;i--)
  {
    printf("%c",karakter[i]);
  }

  
}