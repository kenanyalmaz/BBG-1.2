#include <stdio.h>
main()
{
	int i,toplam=0;
	for(i=0;i<=100;i++){
		if(i%2==0){
			toplam+=i;
		}
	}
	printf("Toplam=%d , Ortalama=%d",toplam,(toplam/100));
}
/* 1'den 100'e kadar olan "�ift" say�lar�n toplam�n� ve ortalamas�n�
bulduran C program� */
