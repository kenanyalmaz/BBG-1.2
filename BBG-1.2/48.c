#include <stdio.h>
main()
{
	float average;
	int counter,grade,total;
	total=0;
	counter=0;
	printf("Notu giriniz (Cikis icin -1):");
	scanf("%d",&grade);
	while(grade!=-1){
		total=total+grade;
		counter=counter+1;
		printf("Notu giriniz (Cikis icin -1):");
		scanf("%d",&grade);
	}
	if(counter!=0){
		average=(float)total/counter;
		printf("Sinif ortalamasi is %.2f",average);
	}
	else
	printf("Hic not girilmemistir.\n");
}
/* Program �al��t�r�ld���nda ka� ki�inin ortalamas�n�n
hesaplanaca��n� �nceden bilmeden, s�n�f ortalamas�n� bulacak
bir program.
- ��renci say�s� bilinmemekte
- Program nas�l sonland�r�lacak? */
