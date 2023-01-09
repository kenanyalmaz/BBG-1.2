#include <stdio.h>
main()
{
	int a,b,c,k=0;
	for(a=1;a<=50;a++){
		for(b=1;b<=50;b++){
			for(c=1;c<=50;c++){
				if((a*a+b*b)==c*c){
					printf("%d %d %d\n",a,b,c);
					k++;
				}
			}
		}
	}
	printf("Toplam sayisi : %d\n",k);
}
/* For yapýsý ile pisagor teoremi örneði. */
