#include <stdio.h>
int main()
{
  FILE *dosya;
  dosya = fopen("deneme.txt","w");
  //fputs fonksiyonu dosya içerisine sadece metin ekler.
  fputs("Merhaba Dunya",dosya);
  char isim[]="Oguz";
  dosya = fopen("oguz.txt","w");
  //fprintf fonksiyonunda tip belirleyicileri kullanılabilir.
  fprintf(dosya,"Bu dosya %s'un dosyasıdır.",isim);
  dosya = fopen("carpimtablosu.txt","w");
  for (int i = 1; i <=10; i++)
  {
    for (int j= 1; j<=10; j++)
    {
      fprintf(dosya,"%dx%d = %d\n",i,j,i*j);
    }
  }
    dosya = fopen("ogrenci.txt","a");
    char isim2[20];
    char okul[20];
    char bolum[20];

    printf("İsim soyisim giriniz : "); scanf("%s",isim2);
    printf("Okul bilgisini giriniz : "); scanf("%s",okul);
    printf("Bolumu giriniz : "); scanf("%s",bolum);
    fprintf(dosya,"%s\t%s\t%s\n",isim,okul,bolum);
    fclose(dosya);

} 