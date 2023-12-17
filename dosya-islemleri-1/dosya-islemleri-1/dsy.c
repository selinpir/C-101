#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* 
   FILE Yapýsý file pointer olarak adlandýrýlýr
   FILE* dosya;  //  þeklinde tanýmlanýr.

      Dosyayý açmak için fopen(),
      Dosyayý kapatmak için fclose(), kullanýlýr

   FILE* dosya;
   dosya = fopen(const char dosya_adi, const char mod);
    ....
        dosyaislemleri
        .....
   fclose(dosya);

    DosyaacmaModlarý

        r       ReadOnly     Sadece okuma için.Dosyanýn açýlabilmesi için önceden oluþturulmasý gerekir

        w       WriteOnly    Yanlýzca yazma için.Dosya kayýtlý olsun veya olmasýn yeniden oluþturulur

        a       append        Ekleme.Kayýtlý bir dosyanýn sonuna veri eklemek için kullanýlýr.

        r + Okuma ve Yazma  Bu modda açýlmýþ olan bir dosyanýn daha önceden var olmasý gerekir.

        w + Okuma ve Yazma  Bu modda açýlmýþ olan bir dosya var olsun veya olmasýn yeniden oluþturulur.

        a + Okuma ve Yazma    Kayýtlý bir dosyanýn sonuna veri eklemek için açýlýr


        Fonksiyon

        fgetc()   Dosyaya bir karakter veri okur
        fgets()   Dosyaya bir karakter dizi okur
        fread()   Dosyaya bir kayýt dizi veya karakteri ikili olarak okur
        fscanf()  Dosyadaki verileri biçimlendirerek okur

        DOSYANIN SONUNUN BELÝRENMESÝ feof()
        Dosyadan okuma iþlemleri yapýlýrken, çoðu kez dosyanýn sonunu denetlemek gerekecektir.Dosya
        göstergesinin dosyanýn sonuna iþaret edip etmediðini anlamak için feof fonksiyonu kullanýlýr

        FILE* dosya;
        while (!feof(dosya))
        {
        fgetc(dosya);        Dosyanýn sonuna gelinmediði sürece dosyadan karakter okur
        }
    */

}