#include <stdio.h>
main()
{
	int n,s=0;
	printf("Sayi giriniz:");
	scanf("%d",&n);
	while(n!=0){
		n/=10;
		s++;
	}
	printf("Basamak sayisi:%d",s);
}
/* Klavyeden girilen say�daki basamak say�s�n� bulan C program� �rne�i. */
