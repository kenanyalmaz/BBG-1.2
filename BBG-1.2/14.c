#include <stdio.h>
#define BOYUT 10
main()
{
	int n[BOYUT]={19,3,15,7,11,9,13,5,17,1};
	int i,j;
	printf("%s%13s%17s\n","Eleman","Deger","Histogram");
	for(i=0;i<BOYUT-1;i++){
		printf("%7d%13d       ",i,n[i]);
		for(j=1;j<=n[i];j++)
		printf("%c",'*');
		printf("\n");
	}
}
/* Dizi elemaný deðeri kadar ekrana "*" karakteri yazdýrma :
1) 10 elemanlý {19, 3, 15, 7, 11, 9, 13, 5, 17, 1} grafik isimli bir dizi oluþturulacaktýr.
2) Dizideki elemanlar tek tek okunarak her dizi elemanýnýn sayýsý kadar ekrana * karakteri yazdýrýlacaktýr.
3) Ekran çýktýsý aþaðýdaki gibi olacaktýr */
