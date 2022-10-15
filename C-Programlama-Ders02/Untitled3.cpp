#include<stdio.h>
#include<conio.h>


int main(){
	//Tam sayý veri tipleri int 
	//ondalýklý sayý float 
	// karakter veri tipleri char
	
	int number ;
	number = 100;
	
	int number1 =100; 
	int number2 = 200;
	int toplam ;
	toplam = number1 + number2;
	
	// Deðiþken tanýmlarken rakamla baþlanmaz yada deðiþken tanýmlarken baþta ? iþareti ve benzeri +_& kullanýlamaz.Deðiþken tanýmlarken arada boþluk olmaz.
	//C kendine özgü adlandýrmalarý kullanýlamaz.Örnek:Ýf,for,break case bunlar vb ifadeler kullanýlamaz.
	
	//camelCase 
	float numberThree=1521.125;
	
	//snake_case 
	float number_three = 152.544;
	
	//Const ifadesi sabit tanýmlamada kullanýlýr.Sabit tanýmlamasýndaki kullanýlan deðiþken sonradan deðiþtirilemez.
	const int number3 = 1000;

	
	
	printf("%d  ",toplam);
	
	getchar();
	
	
	
}
