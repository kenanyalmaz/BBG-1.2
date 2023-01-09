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
/* Klavyeden girilen sayýdaki basamak sayýsýný bulan C programý örneði. */
