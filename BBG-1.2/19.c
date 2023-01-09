#include <stdio.h>
main()
{
	int i,j;
	int a[2][3]={3,5,8,0,1,2};
	int b[2][3]={6,2,9,1,1,4};
	printf("\n A MATRISI\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n B MATRISI\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}
	printf("\n C MATRISI\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%4d",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
/* Ýki Matrisin Toplamý Örneði */
