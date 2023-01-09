#include <stdio.h>
main()
{
	double sales[4][5]={0.0};
	double productSales[5]={0.0};
	double value,totalSales;
	int salesPerson,product,i,j;
	printf("Lutfen satis temsilcisi, urun ve toplam satisi giriniz.\n");
	printf("Bitirmek icin satis temsilcisi yerine -1 giriniz.\n");
	scanf("%d",&salesPerson);
	while(salesPerson!=-1){
		scanf("%d%lf",&product,&value);
		sales[salesPerson][product]=value;
		scanf("%d",&salesPerson);
	}
	printf("*******Ozet Tablo*******\n\n\n");
	printf("%8d%8d%8d%8d%8d\n",0,1,2,3,4);
	for(i=0;i<=3;i++){
		totalSales=0.0;
		printf("%d",i);
		for(j=0;j<=4;j++){
			totalSales+=sales[i][j];
			printf("%8.2f",sales[i][j]);
			productSales[j]+=sales[i][j];
		}
		printf("%8.2f\n",totalSales);
	}
	printf("");
	for(j=0;j<=4;j++){
		printf("%8.2f",productSales[j]);
	}
}
/* Bir �irkette 4 adet sat�� temsilcisi vard�r (0-3) ve bu temsilciler, 5 farkl�
�r�n� pazarlamaktad�rlar (0-4). G�nl�k olarak, her sat�� temsilcisi
sat�lan farkl� tipte her �r�n i�in bir fi� d�zenlemektedir.
Her fi�te:
- Sat�� temsilcisi numaras�
- �r�n numaras�
- O g�n sat�lan �r�nlerin dolar cinsinden miktar�
- Her sat�� temsilci, g�nl�k olarak 0-5 adet fi� d�zenlemektedir. Son
ay�n t�m fi�lerini kullanarak, ge�en ay yap�lan t�m sat��lar�n �zetini
��kartan bir program yaz�n�z. Yap�lan t�m sat��lar sales isimli bir
iki-boyutu dizide kaydedilmelidir. Ge�en ay�n sat��lar� i�lendikten
sonra, sonu�lar tablo halinde yazd�r�lmal�d�r.
- Sat�rlar �r�n miktarlar� s�t�nler ise sat�� temsilcilerini temsil
etmelidir. */
