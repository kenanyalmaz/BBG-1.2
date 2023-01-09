#include <stdio.h>
main()
{
	char w[150];
	int a=0,b=0,c=0,i;
	printf("Enter a line of string:\n");
	gets(w);
	for(i=0;w[i]!='\0';i++){
		if((w[i]>='a' && w[i]<='z')||(w[i]>='A' && w[i]<='Z'))
		a++;
		else if(w[i]>='0' && w[i]<='9')
		b++;
		else if(w[i]=='')
		c++;
	}
	printf("\nHarf sayisi: %d",a);
	printf("\nRakam sayisi: %d",b);
	printf("\nBosluk sayisi: %d",c);
}
/* Klavyeden girilen metindeki, harf sayýsýný, rakam sayýsýný, 
boþluk sayýsýný bulup ekranda yazdýran C programý örneði. */
