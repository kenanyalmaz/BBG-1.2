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
/* Bir ki�i $1000�n� %5 faizle bankaya yat�rm��t�r. B�t�n faizin
hesaptaki paraya eklendi�ini d���nerek 10 y�l boyunca, her
y�lsonunda hesapta birikecek paray� hesaplay�p yazd�ran C program� �rne�i.
- a = p (1 + r)^n
- a: n y�l sonra hesapta birikecek miktar
- p: ilk yat�r�lan miktar
- n: y�l say�s�
- r: faiz oran� */
