#include <stdio.h>
#include <iostream>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Turkish");

	int number;
	float floatNumber;
	double doubleNumber;
	char character;
	char text[5];

	printf("lütfen bir integer değer giriniz...\n");
	scanf_s("%d", &number);
	printf("lütfen bir float değer giriniz...\n");
	scanf_s("%f", &floatNumber);
	printf("lütfen bir double değer giriniz...\n");
	scanf_s("%lf", &doubleNumber); 
	printf("lütfen bir karakter değer giriniz...\n");
	scanf_s(" %c", &character); // yazabilmek için bir boşlukbırak.
	printf("lütfen 4 karakter değeri giriniz...\n");
	scanf_s("%s", text, _countof(text));  

	printf("Girdiğniz sayı: %d\n", number);
	printf("Girdiğniz sayı: %f\n", floatNumber);
	printf("Girdiğniz sayı: %lf\n", doubleNumber);
	printf("Girdiğniz karakter: %c\n", character);
	printf("Girdiğniz karakterdizisi: %s\n", text);
	
	return 0;
}