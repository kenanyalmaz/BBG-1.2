#include <stdio.h>
main()
{
	int dizi[5],i;
	for(i=0;i<5;i++){
		dizi[i]=i*3;
	}
	for(i=0;i<5;i++){
		printf("%d. dizi eleman degeri : %d\n",i,dizi[i]);
	}
}
/* Dizi elemanlarýna deðer atama ve okuma :
Tek boyutlu, 5 elemanlý, sayýsal (int) bir dizi tanýmlanarak:
1) Dizi elemanlarýna dizi indislerinin 3 katý for döngüsü içerisinde deðer olarak atanacaktýr.
2) Yine baþka bir for döngüsü içerisinde bu deðerler ekrana yazdýrýlacaktýr. */
