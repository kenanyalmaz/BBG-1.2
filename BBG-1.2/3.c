#include <stdio.h>
main()
{
	int baslangic, bitis, s, top=0;
	printf("Baslangic sayisini giriniz: ");
	scanf("%d",&baslangic);
	printf("Bitis sayisini giriniz: ");
	scanf("%d",&bitis);
	for(s=baslangic;s<=bitis;s++){
		top=top+s;
	}
	printf("Toplam=%d",top);
}
/* Baslang��-Biti� de�i�kenleri aras�ndaki say�lar�n toplam�n� yazd�ran C program� �rne�i. */
