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
/* Dizi eleman� de�eri kadar ekrana "*" karakteri yazd�rma :
1) 10 elemanl� {19, 3, 15, 7, 11, 9, 13, 5, 17, 1} grafik isimli bir dizi olu�turulacakt�r.
2) Dizideki elemanlar tek tek okunarak her dizi eleman�n�n say�s� kadar ekrana * karakteri yazd�r�lacakt�r.
3) Ekran ��kt�s� a�a��daki gibi olacakt�r */
