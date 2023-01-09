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
/* Bir þirkette 4 adet satýþ temsilcisi vardýr (0-3) ve bu temsilciler, 5 farklý
ürünü pazarlamaktadýrlar (0-4). Günlük olarak, her satýþ temsilcisi
satýlan farklý tipte her ürün için bir fiþ düzenlemektedir.
Her fiþte:
- Satýþ temsilcisi numarasý
- Ürün numarasý
- O gün satýlan ürünlerin dolar cinsinden miktarý
- Her satýþ temsilci, günlük olarak 0-5 adet fiþ düzenlemektedir. Son
ayýn tüm fiþlerini kullanarak, geçen ay yapýlan tüm satýþlarýn özetini
çýkartan bir program yazýnýz. Yapýlan tüm satýþlar sales isimli bir
iki-boyutu dizide kaydedilmelidir. Geçen ayýn satýþlarý iþlendikten
sonra, sonuçlar tablo halinde yazdýrýlmalýdýr.
- Satýrlar ürün miktarlarý sütünler ise satýþ temsilcilerini temsil
etmelidir. */
