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
/* Notlar� [0, 100] aral���nda olacak �ekilde 10 ��rencinin
notlar� giriliyor. Bu notlar�n hepsini, en y�ksek puanl�
��rencinin puan� 100 olacak �ekilde �teleyip sonra da
�telenmemi� puanlara g�re ortalama hesaplayarak bu
ortalaman�n alt�nda hangi ��rencilerin kald���n� yazd�ran bir
C program� �rne�i. */
