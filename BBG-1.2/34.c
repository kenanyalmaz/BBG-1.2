#include <stdio.h>
main()
{
	short notu[10],i,max=0,ek,top=0;
	float ort;
	for(i=0;i<10;i++){
		printf("%d. ogrencinin notu :",i+1);
		scanf("%hd",&notu[i]);
		top+=notu[i];
		if(max<notu[i])max=notu[i];
	}
	ort=(float)top/10;
	ek=100-max;
	printf("Ortalama=%.2f\n",ort);
	for(i=0;i<10;i++)
	if(notu[i]+ek<ort)
	printf("%d. ogrenci %d puanla kaldi.\n",i+1,notu[i]+ek);
}
/* Notlarý [0, 100] aralýðýnda olacak þekilde 10 öðrencinin
notlarý giriliyor. Bu notlarýn hepsini, en yüksek puanlý
öðrencinin puaný 100 olacak þekilde öteleyip sonra da
ötelenmemiþ puanlara göre ortalama hesaplayarak bu
ortalamanýn altýnda hangi öðrencilerin kaldýðýný yazdýran bir
C programý örneði. */
