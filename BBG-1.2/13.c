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
/* Dizi elemanlar�na de�er atama ve okuma :
Tek boyutlu, 5 elemanl�, say�sal (int) bir dizi tan�mlanarak:
1) Dizi elemanlar�na dizi indislerinin 3 kat� for d�ng�s� i�erisinde de�er olarak atanacakt�r.
2) Yine ba�ka bir for d�ng�s� i�erisinde bu de�erler ekrana yazd�r�lacakt�r. */
