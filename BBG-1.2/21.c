#include <stdio.h>
main()
{
	char isim[10];
	int a=0;
	printf("Adinizi yaziniz: ");
	gets(isim);
	while (isim[a]!='\0'){
		printf("%c\n",isim[a]);
		a++;
	}
}
/* Girilen ifadeyi harf harf alt alta yazdýran programý örneði. */
