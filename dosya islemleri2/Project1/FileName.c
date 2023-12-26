#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*
	FILE *dosya;
	dosya = fopen("carptsblo.txt", "w");
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			fprintf(dosya, "%d*%d=%d\n", i, j, i * j);
		}
		fprintf(dosya, "\n");
	}
	fclose(dosya);*/
		
	/*
	FILE *dosya;
	dosya = fopen("ogrnc.txt", "a");
	char isim[20], okul[50], bolum[50];

	printf("Adiniz:"); gets(isim);
	printf("Okulunuz:"); gets(okul);
	printf("Bolumunuz:"); gets(bolum);	

	fprintf(dosya, "%s \n %s \n %s", isim, okul, bolum);
*/

	//	fgetc(); dosyadan tek bir karalter okur
//  fscanf(); dosyadan biçimlendirilmiþ karakter dizisini okur

	/*
	FILE* dosya;
	char karakter;

	dosya = fopen("deneme.txt", "r");
	if (dosya != NULL)
	{
		karakter = fgetc(dosya);
		printf("%c", karakter);

	}
	else
	{
		printf("Dosya Bulunamadý!");
	}
	fclose(dosya);
	return 0;*/


	FILE *dosya;
	char k1[10], k2[10];
	int sayi;
	dosya = fopen("deneme scanf.txt", "r");
	if (dosya != NULL)
	{
		
	}
	else
	{
		printf("Dosya Bulunamadý!");
	}
	fclose(dosya);
	return 0; 
}