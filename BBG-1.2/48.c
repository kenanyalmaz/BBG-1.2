#include <stdio.h>
main()
{
	float average;
	int counter,grade,total;
	total=0;
	counter=0;
	printf("Notu giriniz (Cikis icin -1):");
	scanf("%d",&grade);
	while(grade!=-1){
		total=total+grade;
		counter=counter+1;
		printf("Notu giriniz (Cikis icin -1):");
		scanf("%d",&grade);
	}
	if(counter!=0){
		average=(float)total/counter;
		printf("Sinif ortalamasi is %.2f",average);
	}
	else
	printf("Hic not girilmemistir.\n");
}
/* Program çalýþtýrýldýðýnda kaç kiþinin ortalamasýnýn
hesaplanacaðýný önceden bilmeden, sýnýf ortalamasýný bulacak
bir program.
- Öðrenci sayýsý bilinmemekte
- Program nasýl sonlandýrýlacak? */
