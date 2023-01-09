#include <stdio.h>
main()
{
	int i,j;
	int x[3][4]={16,35,48,63,23,12,26,34,56,52,34,33};
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%4d",x[i][j]);
		}
		printf("\n");
	}
}
/* Çok boyutlu dizi bildirimi ve dizi elemanlarýný yazdýrma */
