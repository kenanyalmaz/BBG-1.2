#include <stdio.h>
#include <conio.h>
#define BOYUT 10
int main()
{
	int dizi[BOYUT]={2,6,4,8,10,12,89,68,45,37},i,j;
	int enkucuk,yedek;
	for(i=0;i<BOYUT-1;i++){
		enkucuk=i;
		for(j=i+1;j<BOYUT;j++)
		if(dizi[j]<dizi[enkucuk])
		enkucuk=j;
		yedek=dizi[i];
		dizi[i]=dizi[enkucuk];
		dizi[enkucuk]=yedek;
	}
	for(i=0;i<BOYUT;i++)
	printf("%d",dizi[i]);
	getch();	
}
/* Seçmeli Sýralama örneði. */
