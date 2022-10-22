#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	int number1=5541554;
	char yazi[]="merhaba";
	printf("YAZI");

	puts("Yazi2");  // Karakter dizilerini yazdýrýrs
	puts("Yazi3");
	gets("");   //Karakter dizilerinin dýþardan veri giriþi yapýlmasýný saðlar.
	
	//Formatlý çýktý
	printf("%550d",number1);
	
	float number2 = 54545454.5495454;
	//printf("%8.2f",number2);
	printf("%7.5f",number2);
	
	//printf("%40s",yazi);
	
	//Girilen sayini pozitif yada negatif olduðu 
	int sayi;
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	if(sayi<0){
		printf("Girdiðiniz sayi negatif \n");
	}
	else{
		printf("Girdiðiniz sayi pozitif \n");
	}
	
	getchar();  // konsol ekranýný bekletilmesini saðlar
	

	//Girilen sayi tek mi çift mi 
	if(sayi %2 ==0){
		printf("Girdiðiniz sayi çiftir \n");
	}
	else {
		printf("Girdiðiniz sayi tektir");
	}	*/
	
	int sayi4 ;
	int sayi2 ;
	int sayi3 ;
	int enbuyuk;
	printf("Sayilari giriniz: ");
	scanf("%5d  %20d  %40d",&sayi4,&sayi2,&sayi3);
	
	if((sayi4 > sayi2) && (sayi4>sayi3)){
		enbuyuk = sayi4;
	}
	else if ((sayi2 > sayi4) && (sayi2 > sayi3)){
		enbuyuk = sayi2;
	}
	else {
		enbuyuk = sayi3;
	}
	printf("En buyuk sayi %20d",enbuyuk);
		getchar();  // konsol ekranýný bekletilmesini saðlar

}
