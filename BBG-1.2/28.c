#include <stdio.h>
main()
{
	int k,r,i=1,j=1,f;
	printf("Hangi sayiya kadar ?");
	scanf("%d",&r);
	printf("%ld%ld",i,j);
	for(k=2;k<r;k++){
		f=i+j;
		i=j;
		j=f;
		printf("%ld",j);
	}
}
/* n sayýsý kadar olan fibonacci sayýlarýný yazdýran C programý örneði. */
