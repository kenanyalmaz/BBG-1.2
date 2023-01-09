#include <stdio.h>
#include <conio.h>
main()
{
	int tutar=0,tm=100,gm=200,ig=300,th=400;
	char islem,cevap;
	do{
		printf("\nIslem turu giriniz: (t,m,i,h)");
		islem=getch();
		switch(islem){
			case 't':tutar=tutar+tm; break;
			case 'm':tutar=tutar+gm; break;
			case 'i':tutar=tutar+ig; break;
			case 'h':tutar=tutar+th; break;
			default: printf("\nBoyle islem yok !");
		}
		printf("\nBaska islem yapildi mi ?");
		cevap=getch();
	}
	while(cevap=='E'||cevap=='e');
	printf("\nOdenecek miktar : %d $",tutar);
}
/* Herhangi bir hastanýn tedaviden sonraki masrafýný hesaplatan C programý örneði.
- Bir hasta belirsiz sayýda iþlemden yararlana bilir.
- Tansiyon ölçme – 100$
- Genel muayene – 200$
- Ýðne – 300$
- Tahlil – 400$
NOT: switch...case yapýsý kullanarak çözünüz. */
