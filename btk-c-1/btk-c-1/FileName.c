#include<stdio.h>
#include <math.h>

struct PersonelBilgisi {
	int Yas;
	float Maas;
	char isim[30];
	char cinsiyet[8];
};

union Veri { 
	int i; 
	float f; 
	char str[20]; 
};
enum seviyeler {
	dusuk, //0
	orta, //1
	yuksek, //2
};

void main() //int main - ana program
{
	// c 101 

	/*yorum
	satýrý*/ 

	/*
	int "%d" 
	float  "%f" "%.2f"
	double "%lf"
	char %c, %s
	string
	scanf (&adres)

	*/

	// \n new line
	//printf("merhaba dunya");

	/*int x = 5, t = 6, z = 6;
	printf("%d\n",x+t+z);
	
	x = t = z = 50;
	printf("%d\n ",x+t+z);*/

	/*	int sayi1, sayi2;
	int toplam, fark, carp, mod;
	float bolum;

	printf("lutfen iki sayi giriniz:");
	scanf_s("%d %d",&sayi1 ,&sayi2);

	toplam = sayi1 + sayi2;
	fark = sayi1 - sayi2; 
	carp = sayi1 * sayi2;
	bolum = (float)sayi1 / sayi2; // iki int bölmek için
	mod = sayi1 % sayi2;

	printf("Toplam:%d \n",toplam);
	printf("Fark:%d \n", fark);
	printf("Carpim:%d \n", carp);
	printf("Bolum:%.2f \n", bolum);
	printf("Mod:%d \n", mod);
*/

	/*	int i = 6;
	printf("%d\n", i);

	i += 5; //i=i+5
	printf("%d\n", i); 

	i -= 5; //i=i-5
	printf("%d\n", i); 

	i *= 3; //i=i*3
	printf("%d\n", i);

	i /= 3; //i=i/3
	printf("%d\n", i);
*/

	/*int i;
	i = 0;
	printf("%d\n", i);
	printf("%d\n", i++); // önce mevcut deðer yazýlacak,sonra deðer arttýrýlacak
	printf("%d\n", i);
	printf("%d\n", ++i); //önce deðer arttýrýlacak,sonra yazdýrma iþlemi yapýlacak
	printf("%d\n", i);*/

	//typecasting
	/*int sayi1 = 17, sayi2 = 5;
	int tamsayi_bolme;
	float gercel_bolme_float;
	double gercel_bolme_double;
	int gercel_bolme_float_tamsayi;

	tamsayi_bolme = sayi1 / sayi2;
	printf("Tamsayi bolme sonucu= %d\n",tamsayi_bolme);

	gercel_bolme_float=(float)sayi1 / sayi2;
	printf("Gercel bolme sonucu float=%.20f\n",gercel_bolme_float);

	gercel_bolme_double = (double)sayi1 / sayi2;
	printf("Gercel bolme sonucu double=%.20lf\n",gercel_bolme_double);

	gercel_bolme_float_tamsayi=(int) sayi1 / sayi2;
	printf("Gercel bolme sonucu floatýn tamsayiya donusmus hali=%d\n",gercel_bolme_float_tamsayi);
*/

	/*
	int a = 35; //10 luk sayi düzeninde -decimal
	int b = 0b00100011; //2 lik sayi düzeninde-binary
	int c = 0x23; //16 lýk sayi düzeninde -hexadecimal

	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
*/

	/*float cm, metre, km;
	printf("uzunlugu santimetre cinsinden giriniz:");
	scanf_s("%f", &cm);

	metre =cm/100.0;
	km =cm/100000.0;

	printf("metre cinsinden uzunluk giriniz= %.3f m \n",metre);
	printf("kilometre cinsinden uzunluk= %.4f km",km);
*/

	// #include<math.h> kullanýldý
	//üs alma
	/*double taban, kuvvet, sonuc;
	printf("taban degerini giriniz:");
	scanf_s("%lf",&taban);
	printf("kuvvet degerini giriniz:");
	scanf_s("%lf",&kuvvet);

	sonuc = pow(taban, kuvvet);
	printf("%.2lf ^ %.2lf= %.2lf", taban, kuvvet, sonuc);*/

	//karekök alma
	/*double sayi, karekok;
	printf("karekoku hesaplanacak sayiyi giriniz:");
	scanf_s("%lf", &sayi);
	karekok = sqrt(sayi);
	printf("%.2lf sayisinin karekoku= %.2lf", sayi, karekok);
*/

	/*float anaPara, zaman, faizOrani, faizMiktari;
	printf("ana para miktarini giriniz: \n");
	scanf_s("%f",&anaPara);

	printf("zamani giriniz: \n");
	scanf_s("%f", &zaman);

	printf("faiz oranini giriniz: \n");
	scanf_s("%f", &faizOrani);

	faizMiktari = (anaPara * zaman * faizOrani) / 100;

	printf("basit faiz hesabý ile hesaplanan faiz miktari=%f", faizMiktari);
*/

	//getchar(), putchar() fonksiyonlarý
	/*char ogrenci_notu; // HARF OLARAK A B C D F		
	printf("ogrenci notu giriniz: ");
	// getchar() komutu ile notu al ve ogrenci_notu degiskeninde sakla
	ogrenci_notu = getchar();

	//putchar() komutu ile notu çýktý olarak ver
	putchar(ogrenci_notu);
*/
	
	/*
	float boy, en, cevre, alan;

	printf("Dikdortgenin uzunlugunu giriniz:\n");
	scanf_s("%f", &boy);
	printf("Dikdortgenin genisligini giriniz:\n");
	scanf_s("%f", &en);

	cevre = 2 * (boy + en);
	printf("Dikdortgenin cevresi: %.3f\n",cevre);

	alan = boy * en;
	printf("Dikdortgenin alani:%.3f\n",alan);
*/
 
	// char : tek %c - sayýsýz %s
	/*char karakter = 'a';
	printf("%c\n", karakter);
	char mesaj[] = "Merhaba udemy kursuna hosgeldin\n";
	printf("%s", mesaj);

	//sizeof
	char karakter1 = 'b';
	char mesaj1[] = {'s','e','l','i','n','\0'};
	printf("%lu \n", sizeof(karakter1));
	printf("%lu \n", sizeof( mesaj1));*/

	//strlen=a ,, sizeof=a+1

	/*char metin1[20] = "caylak";
	char metin2[] = "ressam !";
	char metin3[20];

	//metin2'yi metin1'in ucuna ekle(sonuç metin1'de depolanýr)
	strcat(metin1, metin2);
	//metin1 i yazdýrýr
		printf("%s \n", metin1);
	//metin1 içeriðini metin3 e kopyala
	strcpy(metin3, metin1);
	//metin3 ü yazdýr
		printf("%s \n", metin3);*/

	// \t
	/*	char metin[] = "caylak \t ressam";
	printf("%s", metin);*/


	//struct yapýsý
	/*//personel1 in alanlarýna deðer atama iþlemi
	struct PersonelBilgisi personel1;
	strcpy(personel1.isim, "selin pir");
	strcpy(personel1.cinsiyet, "kadin");
	personel1.Yas = 22;
	personel1.Maas = 8000;
	//personel1 structýnýn deðerlerini yazdýr
	printf("personelin adi:%s \n", personel1.isim);
	printf("personelin cinsiyeti:%s \n", personel1.cinsiyet);
	printf("personelin yasi:%d \n", personel1.Yas);
	printf("personelin maasi:%lf \n", personel1.Maas);

	//baþka bir tanýmlama yöntemi
	struct PersonelBilgisi personel2 = { 33,9000,"abdullah ali","erkek" };
	
	struct PersonelBilgisi Personel2Kopyasi;
	Personel2Kopyasi = personel2;
	printf("personelin adi:%s \n", Personel2Kopyasi.isim);
	printf("personelin cinsiyeti:%s \n", Personel2Kopyasi.cinsiyet);
	printf("personelin yasi:%d \n", Personel2Kopyasi.Yas);
	printf("personelin maasi:%lf \n", Personel2Kopyasi.Maas);
*/

	//union yapýsý
	/*union Veri veri;
	veri.i = 10;
	veri.f= 220.5;
	strcpy(veri.str,"c programlama kursu");
	printf("verinin buyuklugu: %d \n", sizeof(veri));
	printf("veri.i: %d\n", veri.i);
	printf("veri.f: %.2f\n", veri.f);
	printf("veri.str: %s \n", veri.str);
	printf("****\n");
	veri.f = -203.45;
	printf("verinin buyuklugu: %d \n", sizeof(veri));
	printf("veri.i: %d\n", veri.i);
	printf("veri.f: %.2f\n", veri.f);
	printf("veri.str: %s \n", veri.str);*/

	//enum yapýsý (önemli)- numaralandýrýlmýþ tipler
	/*enum seviyeler OdaSicaakligi = dusuk;
	printf("%d", OdaSicaakligi); // 0
*/

	//pointer  %u
	/*char karakter = 'c';
	int tamsayi = 1;
	float gercel_sayi = 10.4f;
	long long buyuk_tamsayi = 1234567ll;

	printf("karakter degeri: %c,karakter adresi: %u\n",karakter,&karakter);
	printf("tamsayi degeri: %d,tamsayi adresi: %u\n", tamsayi, &tamsayi);
	printf("gercel_sayi degeri: %f,gercel_sayi adresi: %u\n", gercel_sayi, &gercel_sayi);
	printf("buyuk_tamsayi degeri: %lld,buyuk_tamsayi adresi: %u\n", buyuk_tamsayi, &buyuk_tamsayi);

*/
	//boolean yapýsý
	// == eþittir
	// && ve
	// || veya

	 

	return 0;
	getch();

}


