#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("****Suyun Durumu *****\n\n");
	
	int su;
	printf("Sicaklik degerini girin: ");
	scanf("%d",&su);
	
	if(su<=0)
	{
		printf("Su buz halinde ");
	}
	if(su>=100)
	{
		printf("Su buhar halinde");
	}
	if(su>0 && su<100)
	{
		printf("Su sivi halinde");
	}
	
return 0;

}
