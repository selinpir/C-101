#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* 
   FILE Yap�s� file pointer olarak adland�r�l�r
   FILE* dosya;  //  �eklinde tan�mlan�r.

      Dosyay� a�mak i�in fopen(),
      Dosyay� kapatmak i�in fclose(), kullan�l�r

   FILE* dosya;
   dosya = fopen(const char dosya_adi, const char mod);
    ....
        dosyaislemleri
        .....
   fclose(dosya);

    DosyaacmaModlar�

        r       ReadOnly     Sadece okuma i�in.Dosyan�n a��labilmesi i�in �nceden olu�turulmas� gerekir

        w       WriteOnly    Yanl�zca yazma i�in.Dosya kay�tl� olsun veya olmas�n yeniden olu�turulur

        a       append        Ekleme.Kay�tl� bir dosyan�n sonuna veri eklemek i�in kullan�l�r.

        r + Okuma ve Yazma  Bu modda a��lm�� olan bir dosyan�n daha �nceden var olmas� gerekir.

        w + Okuma ve Yazma  Bu modda a��lm�� olan bir dosya var olsun veya olmas�n yeniden olu�turulur.

        a + Okuma ve Yazma    Kay�tl� bir dosyan�n sonuna veri eklemek i�in a��l�r


        Fonksiyon

        fgetc()   Dosyaya bir karakter veri okur
        fgets()   Dosyaya bir karakter dizi okur
        fread()   Dosyaya bir kay�t dizi veya karakteri ikili olarak okur
        fscanf()  Dosyadaki verileri bi�imlendirerek okur

        DOSYANIN SONUNUN BEL�RENMES� feof()
        Dosyadan okuma i�lemleri yap�l�rken, �o�u kez dosyan�n sonunu denetlemek gerekecektir.Dosya
        g�stergesinin dosyan�n sonuna i�aret edip etmedi�ini anlamak i�in feof fonksiyonu kullan�l�r

        FILE* dosya;
        while (!feof(dosya))
        {
        fgetc(dosya);        Dosyan�n sonuna gelinmedi�i s�rece dosyadan karakter okur
        }
    */

}