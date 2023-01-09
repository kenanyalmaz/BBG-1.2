#include <stdio.h>
main()
{
	int n1,n2,i,j,flag;
	printf("iki aralik giriniz: ");
	scanf("%d%d",&n1,&n2);
	printf("%d ve %d arasindaki asal sayilar:",n1,n2);
	for(i=n1+1;i<n2;++i){
		flag=0;
		for(j=2;j<=i/2;++j){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("\n%d",i);
	}
}
/* Klavyeden girilen iki aralýk arasýndaki asal sayýlarý 
ekranda görüntüleyen C programý örneði. */
