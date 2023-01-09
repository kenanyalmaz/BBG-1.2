#include <stdio.h>
main()
{
	int i, a, b, c, sayac=0;
	for(i=100;i<999;i++){
		a=i/100;
		b=(i%100)/10;
		c=i%10;
		if(a!=b && a!=c && b!=c){
			printf("%5d",i);
			sayac++;
		}
	}
	printf("\n\nBu kurala uygun %d sayi vardir.",sayac);
}
/* Üç basamaklý rakamlarý birbirinden farklý tüm sayýlarý ekranda
gösteren ve bu kurala uygun kaç tane sayý olduðunu söyleyen C programý */
