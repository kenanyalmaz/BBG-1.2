#include <stdio.h>
main()
{
	int i,space,k=0,rows,count=0,count1=0;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	for(i=1;i<=rows;++i){
		for(space=1;space<=rows-i;++space){
			printf(" ");
			++count;
		}
		while(k!=2*i-1){
			if(count<=rows-1){
				printf("%d",i+k);
				++count;
			} else {
				++count1;
				printf("%d",(i+k-2*count1));
			}
			++k;
		}
		count1=count=k=0;
		printf("\n");
	}
}
/* �rnek 6 */