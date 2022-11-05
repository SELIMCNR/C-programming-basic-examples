#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Girilen iki sayýný ortalamasý
	float sayi ;
	float sayi2 ;
	float ort;
	
	printf("Sayiyi giriniz: \n ");
	scanf("%f",&sayi);     //dýþardan veri alma iþlemi 
	printf("Girilen sayi: %f \n",sayi);
	
	printf("Ýkinci sayiyi giriniz: \n");
	scanf("%f",&sayi2);
	printf("Ýkinci girilen sayi : %f \n",sayi2);
	ort = (sayi+sayi2)/2;
	
	printf("Ortalama: %f",ort);
	
	
	
	// üçgen alan ve çevre hesabý
	int kenaruzunluk ; 
	int yukseklik;
	int alan ;
	int cevre;
	
	printf("Kenaruzunluðu giriniz: \n");
	scanf("%d",&kenaruzunluk);
	printf("Kenaruzunluðu: %d |\n",kenaruzunluk);
	
	printf("Yükseklik deðerini giriniz: \n");
	scanf("%d",&yukseklik);
	printf("Yükseklik : %d \n",yukseklik);
	
	alan = (yukseklik*kenaruzunluk)/2;
	cevre= kenaruzunluk * 3 ;
	
	
	printf("Ücgen alani : %d \n",alan);
	printf("Ücgen cevresi: %d",cevre);
	
	
	// vize ve final not hesabý
	
	
	float vize ;
	float final ;
	float ort1;
	
	printf("Vize notunu giriniz :  \n");
	scanf("%f",&vize);
	printf("Vize notunuz: %f \n",vize);
	
	printf("Final notunuz giriniz: \n ");
	scanf("%f",&final);
	printf("Final notunuz: %f \n",final);
	
	ort1=vize*0.4 + final*0.6;
	
	printf("Ortalamanýz: %f",ort1);
	
	
	
	//Yarýçapý girilen dairenin çevre ve alan hesabý 
	const float pi=3.14 ; 
	float yaricap;
	float cevre1 ;
	float alan1;
	
	printf("Yaricapi giriniz: \n ");
	scanf("%f",&yaricap);
	printf("Yaricapiniz: %f \n",yaricap);
	
	alan = pi*yaricap*yaricap;
	cevre1=2*pi*yaricap;
	
	printf("Daire alaný: %f \n",alan1);
	printf("Daire cevresi: %f \n",cevre1);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
