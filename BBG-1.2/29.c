#include <stdio.h>
main()
{
	int n,i,flag=0;
	printf("Sayi giriniz: ");
	scanf("%d",&n);
	if(n==1)
	printf("1 asal degildir.");
	else{
		for(i=2;i<=n/2;++i){
			if(n%i==0){
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("%d asaldir.",n);
		else
		printf("%d asal degildir.",n);
	}
}
/* Klavyeden girilen sayýnýn asal sayý olup-olmadýðýný test eden C programý örneði. */
