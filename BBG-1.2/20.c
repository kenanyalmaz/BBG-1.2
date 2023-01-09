#include <stdio.h>
main()
{
	int i,j,k,toplam;
	int a[3][3]={3,5,8,0,1,2,4,4,4};
	int b[3][3]={6,2,9,1,1,4,2,5,4};
	int c[3][3];
	printf("\n A MATRISI\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n B MATRISI\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}
	printf("\n C MATRISI\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			toplam=0;
			for(k=0;k<3;k++){
				toplam+=a[i][k]*b[k][j];
			}
			c[i][j]=toplam;
			printf("%4d",c[i][j]);
		}
		printf("\n");
	}
}
/* Ýki Matrisin Çarpým Örneði */
