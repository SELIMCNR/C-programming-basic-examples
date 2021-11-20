#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

			int s1,s2,toplam;
			
			printf("Birinci sinav notu: ");
			scanf("%d",&s1);
			
			printf("Ýkinci sinav notu: ");
			scanf("%d",&s2);
			
			toplam=(s1+s2)/2;
		if(toplam >= 50)
		 { 
			printf("Gecti")	;
		 }
		else
		{
			printf("Kaldi");	
		}		
	
	
	return 0;
}
