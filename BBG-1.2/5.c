#include <stdio.h>
main()
{
	int i,toplam=0;
	for(i=0;i<=100;i++){
		toplam=toplam+i;
	}
	printf("Toplam=%d, Ortalama=%d",toplam,(toplam/100));
}
/* 1'den 100'e kadar olan sayýlarýn toplamýný ve ortalamasýný
bulduran C programý */
