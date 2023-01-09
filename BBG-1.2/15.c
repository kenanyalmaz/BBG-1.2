#include <stdio.h>
main()
{
	int i,enk;
	int dizi[6];
	printf("Dizinin elemanlarini giriniz\n");
	for(i=0;i<6;i++){
		printf("Dizinin %d. elemanini giriniz:\n",i);
		scanf("%d",&dizi[i]);
	}
	enk=dizi[0];
	for(i=1;i<6;i++){
		if(enk>dizi[i]){
			enk=dizi[i];
		}
	}
	printf("Minimum eleman %d dir.",enk);
}
/* Dizinin minimum elemanýný bulma. */
