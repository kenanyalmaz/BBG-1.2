#include <stdio.h>
main()
{
	char metin[100];
	char aranan;
	int adet=0;
	int a=0;
	printf("Metin giriniz:");
	gets(metin);
	printf("Hangi harfi arayalim ?");
	scanf("%c",&aranan);
	while(metin[a]!='\0'){
	    if(metin[a]==aranan)
	    adet++;
	    a++;
    }
    printf("%c harfinden %d tane var",aranan,adet);
    printf("Girilen metin: %s\n",metin);
    puts(metin);
}
/* Girilen ifadede istenilen harfin sayýsýný bulduran program örneði. */
