#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int  misir,kola,su,bilet,top,toptutar;
	printf("Misir adedi : ");
	scanf("%d",&misir);
	printf("Kola adedi : ");
	scanf("%d",&kola);
	printf("Su adedi : ");
	scanf("%d",&su);
	printf("Bilet adedi: ");
	scanf("%d",&bilet);
	top=misir+kola+su+bilet;
	printf("Toplam alýnan urun : %d\n",top); 
	misir=misir*2;
	kola=kola*2;
	su=su*1;
	bilet=bilet*8;
	
	toptutar=misir+kola+su+bilet;
	printf("Toplam tutar : %d",toptutar);	
	
	

	return 0;
}
