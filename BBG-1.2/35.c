#include <stdio.h>
#include <time.h>
#include <stdlib.h>
main()
{
	char hasta[5][4], i, j, top[5], tetkik[4] = {0}, min = 41, h = 0;
    srand (time(NULL));
    printf("Hasta\tT1\tT2\tT3\tT4");
    for (i = 0; i < 5; i++) {
        printf("\n%d", i+1);
        top[i] = 0;
        for (j = 0; j < 4; j++) {
            hasta[i][j] = rand()%11;
            printf("\t%d", hasta[i][j]);
            top[i] += hasta[i][j];
            tetkik[j] += hasta[i][j];
        }
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    if (top[i] < 20)
    printf("\n%d. hasta tedavi gormelidir.", i+1);
    //toplam 20 den küçük ise ortalama 5 den küçüktür
    for (j = 0; j < 4; j++)
    if (min > tetkik[j]) {
        min = tetkik[j];
        h = j;  
		}
    printf("\nEn dusuk puan %d. tetkikte verilmistir.", h+1);
}
/* 5 hastaya 4 farklý tetkik yapýlarak sonuçlarý en iyi durumda
10, en kötü durumda 0 olacak þekilde puanlanýyor. Bu
puanlamayý rastgele yapýp yazdýrdýktan sonra, ortalama puaný
5 den az olan hastalara tedavi olmalarý gerektiðini söyleyen ve
tetkikler içinden toplam en düþük puan verileni yazdýran bir C
programý örneði. */
