#include <stdio.h>
main()
{
	int f=1,i,n;
	printf("Faktoriyeli alinacak sayiyi giriniz: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;
	}
	printf("Faktoriyel=%d",f);
}
/* n! bulduran C programý */
