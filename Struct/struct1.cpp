#include <stdio.h>
//Struct(Yapılar)'a giriş
//Struct oluşturulması ve main fonksiyonu içerisinde kullanımı.
struct ogrenci
{
  char ad[20];
  char soyad[20];
  char bolum[50];
  int numara;

}
ogr1={"Oguz","Gündüz","Bilişim Sistemleri Mühendisliği",151601036};
struct kitaplar
{
  char ad[50];
  char yazar[50];
  int sayfa_sayisi;
  float fiyat;
}
ktp1={"Kaşağı","Ömer Seyfettin",155,14.50};

int main()
{
  
  printf("İsim = %s\n",ogr1.ad);
  printf("Soyad = %s\n",ogr1.soyad);
  printf("Bolum = %s\n",ogr1.bolum);
  printf("Numara = %d\n",ogr1.numara);
  printf("\n\n");
  printf("İsim = %s\n",ktp1.ad);
  printf("Yazarı = %s\n",ktp1.yazar);
  printf("Sayfa Sayısı = %d\n",ktp1.sayfa_sayisi);
  printf("Fiyat = %.2f\n",ktp1.fiyat);
  
}