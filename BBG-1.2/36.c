#include <stdio.h>
main()
{
	int sayi[10],yeni[10];
	int i,top=0,k=-1;
	float ort;
	for(i=0;i<10;i++){
		printf("\nBir sayi giriniz:");
		scanf("%d",&sayi[i]);
		top=top+sayi[i];
	}
	ort=(float)top/10;
	printf("\nOrtalama=%f",ort);
	for(i=0;i<10;i++){
		if(sayi[i]<ort){
			k=k+1;
			yeni[k]=sayi[i];
		}
	}
	printf("\nOrtalamadan kucuk elemanlarin sayisi=%d",k+1);
	for(i=0;i<=k;i++){
		printf("\n%d",yeni[i]);
	}
}
/* Verilen 10 sayýyý klavye yardýmýyla (scanf) ile bir
diziye aktaran ve dizideki elemanlarýn
ortalamasýndan küçük olanlarý baþka bir diziye
aktaran C programý örneði. */
