#include <stdio.h>
main()
{
	int i,toplam=0;
	for(i=0;i<=100;i++){
		if(i%2==1){
			toplam=toplam+i;
		}
	}
	printf("Toplam=%d , Ortalama=%d",toplam,(toplam/100));
}
/* 1'den 100'e kadar olan "tek" sayýlarýn toplamýný ve ortalamasýný
bulduran C programý */
