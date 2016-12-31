#include <stdio.h>
//Karakter dizilerine giriş ve karakter dizilerinin tanımlanması 
int main()
{
  //Karakter dizisi tanımlarken;
  //isim değişkeninin yanına, tanımlanacak stringin uzunluğu kadar bir değer yazılır.
  //Bu değer girilen değişkenin harf sayılarından en az 1 fazla olmalıdır.
  //Aşağıdaki tanımlamada en fazla 9 karakterli bir string girilebilir. 
  //Daha fazla karakterli bir string girilirse program hata verecektir. 
  char isim[10]="Oguz";
  //Aşağıda karater sayısını program otomatik olarak belirleyecektir.
  char isim1[]="Oguzz";
  //Aşağıdaki tanımlamada, harfler tek tek girilir ve sonuna 'null'(\0) karakteri eklenmelidir. 
  char isim2[]={'O','g','u','z','\0'};
  printf("%s\n",isim );
  printf("%s\n",isim1 );
  printf("%s\n",isim2);
  //3 elemanlı bir string dizisi tanımlama;
  char isim3[3][10]={"Oguz","Kaan","Gunduz"};
  //Yazdırılmak istenen indis numarası yazılır, Hepsi yazdırılmak istenirse buna döngü gerekir.
  printf("%s\n",isim3[0]);
  //----------------------------------------------------------------------------------------
  char sehirler[3][20]={"İstanbul","Kırklareli","Lüleburgaz"};
  for (int i = 0; i < 3; i++)
  {
    printf("%s\n",sehirler[i]);
  }
  //--------------------------------------------------------------------------------------------
  char dondurma[5][20];
  for (int j = 0; j < 5; j++)
  {
    printf("Dondurma cesidi giriniz : ");
    scanf("%s",dondurma[j]);
  }
  for (int i = 0; i < 5; ++i)
  {
    printf("Girilen %d.ci dondurma cesidi : %s\n",i+1,dondurma[i]);
  }
//----------------------------------------------------------------------------
  //Kac adet ülke girileceğini kullanıcıdan alan program
  char ulkeler[10][20];
  int n;
  printf("Kac adet ulke girilecek ? ");
  scanf("%d\n",&n);
  ulkeler[10][20]=n;
  for (int m = 0; m < n; m++)
  {
    printf("%d. ci ulkeyi giriniz : ",m+1);
    scanf("%s",ulkeler[m]);
  }


















}