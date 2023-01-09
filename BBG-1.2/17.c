#include <stdio.h>
main()
{
	int a[10];
	int j,k,temp,i;
	for(i=0;i<10;i++){
		printf("\nDizinin %d. elemanini giriniz: ",i);
		scanf("%d",&a[i]);
	}
	for(j=0;j<10-1;j++){
		for(k=j+1;k<10;k++){
		    if(a[j]>a[k]){
		    	temp=a[j];
		    	a[j]=a[k];
		    	a[k]=temp;
			}
		}
	}
	for(k=0;k<10;k++)
	printf("%d ",a[k]);
}
/* 10 elemanlý dizinin elemanlarýný sýralama */
