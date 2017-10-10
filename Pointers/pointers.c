//
//  pointers.c
//  pointers
//
//  Created by Oğuzkaan Gündüz on 10.10.2017.
//  Copyright © 2017 Oğuzkaan Gündüz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Pointers çalışmaları
    int sayi, *sayiPtr; //sayi değişkeni ve pointer tanımlaması
    printf("Sayı değerini giriniz : ");
    scanf("%d",&sayi);
    
    sayiPtr = &sayi; //sayiPtr sayının adresine eşittir.
    printf("Sayının adresi = %p\n",sayiPtr);//Sayının adresini yazdırır.
    printf("Sayının değeri = %d\n",*sayiPtr);//Sayının kendisini yazdırır
    
    
    
    return 0;
}
