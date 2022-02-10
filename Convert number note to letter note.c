#include<stdio.h>
#include<stdlib.h>
#include<conio.h>



int main ()
{	
	puts("------Rakam Notunu harf notuna  dönüstürme------");
	int puan,islem;
	printf("Notunuzu giriniz: ");
	scanf("%d",&puan);
	if(puan<=29)
	{
		islem=1;
	}
	else if (puan<=49 && puan>=30)
	{
		islem=2;
	}
	else if (puan <= 59 && puan >=50 )
	{
		islem = 3;
	}
	else if (puan <= 69 && puan >=60 )
	{
		islem = 4;
	}
	else if ( puan <= 74 && puan >=70 )
	{
		islem= 5;
	}
	
	else if ( puan <= 79 && puan >=75)
	{
		islem = 6;
	}
	else if ( puan <= 84 && puan>=80)
	{
		islem = 7;
	}
	else if ( puan <=89 && puan >=85)
	{
		islem = 8;
	}
	else if  ( puan> 89 && puan<=100)
	{
		islem = 9;
	}
	else {
		printf("Hatali islem");
	}
	
	
	switch(islem)
  {
	
	case 1: printf("Harf notunuz: FF"); 
	break;
	case 2: printf("Harf notunuz: FD"); 
	break;
	case 3: printf("Harf notunuz: DD"); 
	break;
	case 4: printf("Harf notunuz: DC");
	 break;
	case 5: printf("Harf notunuz: CC");
	 break;
	case 6: printf("Harf notunuz: CB"); 
	break;
	case 7: printf("Harf notunuz: BB"); 
	break;
	case 8: printf("Harf notunuz: BA");
	 break;
	case 9: printf("Harf notunuz: AA"); 
	break;
  }
	getchar();
	getchar();	
	
	
}
