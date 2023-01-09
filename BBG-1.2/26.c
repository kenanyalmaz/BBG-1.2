#include <stdio.h>
main()
{
	int n,r=0;
	printf("Tersini yazdirmak istediginiz sayiyi yaziniz: ");
	scanf("%d",&n);
	while(n!=0){
		r=r*10;
		r=r+n%10;
		n=n/10;
	}
	printf("Girilen sayinin tersi: %d\n",r);
}
/* Klavyeden girilen sayýyý tersten yazdýran C programý örneði. */
