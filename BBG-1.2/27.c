#include <stdio.h>
main()
{
	int n,r=0,temp;
	printf("Sayi giriniz:");
	scanf("%d",&n);
	temp=n;
	while(temp!=0){
		r=r*10;
		r=r+temp%10;
		temp=temp/10;
	}
	if(n==r)
	printf("%d polindrom sayidir.\n",n);
	else
	printf("%d polindrom sayi degil.\n",n);
}
/* Klavyeden girilen say�n�n polindrom olup-olmad���n� test eden C program� �rne�i. */
