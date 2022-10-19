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
	*/
	
	// vize ve final not hesabý
	
	
	float vize ;
	float final ;
	float ort;
	
	printf("Vize notunu giriniz :  \n");
	scanf("%f",&vize);
	printf("Vize notunuz: %f \n",vize);
	
	printf("Final notunuz giriniz: \n ");
	scanf("%f",&final);
	printf("Final notunuz: %f \n",final);
	
	ort=vize*0.4 + final*0.6;
	
	printf("Ortalamanýz: %f",ort);
	
	
	
	//Yarýçapý girilen dairenin çevre ve alan hesabý 
	const float pi=3.14 ; 
	float yaricap;
	float cevre ;
	float alan;
	
	printf("Yaricapi giriniz: \n ");
	scanf("%f",&yaricap);
	printf("Yaricapiniz: %f \n",yaricap);
	
	alan = pi*yaricap*yaricap;
	cevre=2*pi*yaricap;
	
	printf("Daire alaný: %f \n",alan);
	printf("Daire cevresi: %f \n",cevre);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
