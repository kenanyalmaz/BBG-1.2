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
/* �� basamakl� rakamlar� birbirinden farkl� t�m say�lar� ekranda
g�steren ve bu kurala uygun ka� tane say� oldu�unu s�yleyen C program� */
