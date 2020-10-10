#include <stdio.h>
#include <iostream>
#include <locale.h>
int main() 
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	float kesirlisayi;
	double kesirlisayı2;
	char karakter;
	char karakterdizisi[5];

	printf("lütfen bir integer değer giriniz...\n");
	scanf_s("%d", &sayi);
	printf("lütfen bir float değer giriniz...\n");
	scanf_s("%f", &kesirlisayi);
	printf("lütfen bir double değer giriniz...\n");
	scanf_s("%lf", &kesirlisayı2); 
	printf("lütfen bir karakter değer giriniz...\n");
	scanf_s(" %c", &karakter); // yazabilmek için bir boşlukbırak.
	printf("lütfen 4 karakter değeri giriniz...\n");
	scanf_s("%s",karakterdizisi,_countof(karakterdizisi));  



	printf("Girdiğniz sayı: %d\n", sayi);
	printf("Girdiğniz sayı: %f\n", kesirlisayi);
	printf("Girdiğniz sayı: %lf\n", kesirlisayı2);
	printf("Girdiğniz karakter: %c\n", karakter);
	printf("Girdiğniz karakterdizisi: %s\n", karakterdizisi);
	
	return 0;
}