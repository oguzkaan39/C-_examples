#include <stdio.h>
//Struct'lara dizi ekleme ve dizilerle çalışma
struct arabalar
  {
    char marka[50];
    char model[20];
    int model_yili;
    float fiyat;
  }arac[3]=
  {
    {"Mercedes-Benz","CLK 270",2005,70.000},
    {"BMW","3.20si",2006,70.000},
    {"Audi","A5",2011,120.000}
  };
  struct rehber
  {
    char ad[50];
    char soyad[50];
    char sehir[50];
    int tel_no;
  }rehber[3]={
    {},
    {},
    {}
  };

int main()
{
  printf("Aracın Markası\tAracın Modeli\tAracın Model Yılı\tFiyatı\n");
  for (int i = 0; i < 3; i++)
  {
    printf("%s\t",arac[i].marka);
    printf("%s\t\t\t",arac[i].model);
    printf("%d\t\t",arac[i].model_yili);
    printf("%.3f\n\t",arac[i].fiyat);
  }
  //Kullanıcıdan değer alınarak struct ile çalışma,
  for (int j = 0; j < 3; j++)
  {
    printf("Kayıt edilecek %d kişinin ismini giriniz : ",j+1);
    scanf("%s",rehber[j].ad);
    printf("Kayıt edilecek %d kişinin soyismini giriniz : ",j+1);
    scanf("%s",rehber[j].soyad);
    printf("Kayıt edilecek %d kişinin Yasadıgı sehri giriniz : ",j+1);
    scanf("%s",rehber[j].sehir);
    printf("Kayıt edilecek %d kişinin numarasını giriniz : ",j+1);
    scanf("%d",&rehber[j].tel_no);
  }
  for (int m= 0; m < 3; m++)
  {
    printf("%d.Kisinin ismi = %s\n",m+1,rehber[m].ad);
    printf("%d.Kisinin soyismi = %s\n",m+1,rehber[m].soyad);
    printf("%d.Kisinin Yasadıgı Sehir = %s\n",m+1,rehber[m].sehir);
    printf("%d.Kisinin numarası = %d\n",m+1,rehber[m].tel_no);

  }
}