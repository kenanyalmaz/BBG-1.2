#include <stdio.h>
main()
{
	int n,d,sevens=0;
	printf("Bir tamsayi giriniz:");
	scanf("%d",&n);
	while(n!=0){
		d=n%10;
		n=n/10;
		if(d==7) sevens++;
	}
	printf("%d tane yedi icerir.\n",sevens);
}
/* Bir tam say�n�n basamaklar�n�n ka� tanesinin 7 oldu�unu bulan program �rne�i. */
