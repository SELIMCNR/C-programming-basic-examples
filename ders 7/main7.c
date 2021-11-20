#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float sayi1,sayi2,toplam;
	printf("Birinci sayi : ");
	scanf("%f",&sayi1);
	printf("Ýkinci sayi :");
	scanf("%f",&sayi2);
	toplam=sayi1+sayi2;
	printf("Toplam Sonucu: %f",toplam);
	
	return 0;
}
