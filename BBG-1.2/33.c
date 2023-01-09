#include <stdio.h>
#include <math.h>
#include <conio.h>
main()
{
	int year;
	double amount,principal=1000.0,rate=.05;
	printf("%4s%21s\n","Yil","Depozito Miktari");
	for(year=1;year<=10;year++){
		amount=principal*pow(1.0+rate,year);
		printf("%4d%21.21f\n",year,amount);
	}
	getch();
}
/* Bir kiþi $1000’ný %5 faizle bankaya yatýrmýþtýr. Bütün faizin
hesaptaki paraya eklendiðini düþünerek 10 yýl boyunca, her
yýlsonunda hesapta birikecek parayý hesaplayýp yazdýran C programý örneði.
- a = p (1 + r)^n
- a: n yýl sonra hesapta birikecek miktar
- p: ilk yatýrýlan miktar
- n: yýl sayýsý
- r: faiz oraný */
