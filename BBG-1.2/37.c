#include <stdio.h>
main()
{
	int i,j;
	int a[4][4]={{2,1,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int max,min,maxi,maxj,mini,minj;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==0&&j==0){
				max=a[i][j];
				min=a[i][j];
				maxi=i;
				maxj=j;
				mini=i;
				minj=j;
			}
			if(a[i][j]>max){
				maxi=i;
				maxj=j;
				max=a[i][j];
			}
			else if(a[i][j]<min){
				mini=i;
				minj=j;
				min=a[i][j];
			}
		}
	}
	printf("Max value is %d in (%d,%d)\n",max,maxi,maxj);
	printf("Min value is %d in (%d,%d)",min,mini,minj);
}
/* 4x4’lük bir matrisin,
- en büyük elemanýný ve indislerini
- en küçük elemanýný ve indislerini 
bulup ekranda yazdýran C programý örneði. */
