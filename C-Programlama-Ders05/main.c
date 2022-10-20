#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Operatörler
	//Aritmetik Operatörler
	int sayi1 = 20;
	int sayi2 = 20;
	int sonuc ;
	
	// + toplama iþlevi görür
	sonuc = sayi1 + sayi2 ;
	// - çýkarma iþlevi görür
	sonuc = sayi1 - sayi2;
	// / bölme iþlevi görür
	sonuc = sayi1 / sayi2;
	// * çarpma iþlevi görür
	sonuc = sayi1 * sayi2;
	// % bölümden kalaný bulma
	sonuc = sayi2 % sayi1; 
	printf("%d",sonuc);
	
	// artýrma operatörü  ++ 
	sayi1 ++ ;
	printf("%d",sayi1);
	
	// azaltma operatörü --
	sayi2 -- ;
	printf("%d \n",sayi2);
	
	//Mantýksal operatörler 
	int number1 = 20;
	int number2 = 10;
	int sonuc2;
	// && ve operatörü 
	sonuc=number1<30 && number2<20;
	// ||veya operatörü
	sonuc2 = number1 < 30 || number2 < 20;
	printf("%d",sonuc2);
	// ! deðil operatörü
	int sonuc3;
	//iliþkisel operatörler
	sonuc3 = number1 <= 50;
	printf("%d \n",sonuc3);
	
	// Öncelik sýrasý idi programlamada
	sonuc3 = ((3*5) / (2/1) ) > ((2*5)/(2/1)) ;
	
	// b2 - 4ac 
	int b=5; 
	int a=2;
	int c=3; 
	int z = 2500;
	int x = 40 ;
	int y = 50;
	int sonuc4;

	sonuc4 = sqrt(b*b- 4*a*c);
	printf("%d \n",sonuc4);
	
	// 2 kök z / (2-x + y)
	int sonuc5;
	
	sonuc5 = sqrt(z) / (2-x+y);
	
	printf("%d",sonuc5);
	
	
	
	
	
	
	return 0;
}
