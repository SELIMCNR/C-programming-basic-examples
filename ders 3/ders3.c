#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
/*	char kitapad[30];
	printf("Kitabin Adini Giriniz:  ");
	scanf("%s",kitapad);
	printf("Girmis oldugunuz Kitap: %s",kitapad);*/
	char Ad[10],Soyad[10],Yas[2],Sehir[13],Meslek[10];
	printf("Adiniz: ");
	scanf("%s",Ad);
	
	printf("Soyadiniz: ");
	scanf("%s",Soyad);
	
	printf("Yasiniz: ");
	scanf("%s",Yas);
	
	printf("Sehiriniz: ");
	scanf ("%s",Sehir);
	
	printf("Mesleginiz: ");
	scanf("%s",Meslek);
	
	pribtf("\n");
	
	printf("Adi: %s - Soyadi: %s\n ",Ad,Soyad);
	printf("Yasi: %s\n" ,Yas);
	printf("Meslek: %\n - Sehir: %s",Meslek,Sehir);
	
	
	
	return 0;
}
