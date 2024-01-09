#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    /*Global degiskenler sayesinde tum fonksiyonlar tarafinfan
    bu degiskenleri kullanilabiliyor.*/
    int s1, s2, s3, s4;
    int sayac=0;
    int rastgele;
    float puan=250.00;
    char tercih;

/*Bu fonksiyonda kullanicidan tercih yapmasi isteniyor.
girilen komutlara gore oyunun baslanip baslanmiyacagi belli oluyor.*/
void tercih_yap()
{
    printf("Oyuna baslamak icin 'c', Oyundan cikmak icin 's' giriniz.\n");
    printf("Lutfen tercihinizi yapiniz : "); scanf(" %c",&tercih);
    printf("\nBaslangic Puaniniz = %.2f\n",puan);
    printf("\n**********************************************************\n\n");
}

//Bu fonksiyon bilgisayar tarafindan random olarak 4 sayi uretmektedir.
void sayi_uret(){

    srand(time(NULL));//Bu komut sayesinde fonksiyon her cagirilisinda farkli uretecektir.
    s1=1+rand()%10;
    s2=1+rand()%10;
    s3=1+rand()%10;
    s4=1+rand()%10;

    /*Asagidaki kosullar sayesinde bilgisayar her seferinde farkli sayi uretmektedir.
    yani uretilen her sayi(s1,s2,s3,s4) birbirden farkli olcaktir.*/
    if(s1==s2||s1==s3||s1==s4)
    {
        s1=1+rand()%10;
    }
    if(s2==s1||s2==s3||s2==s4)
    {
        s2=1+rand()%10;
    }
    if(s3==s1||s3==s2||s3==s4)
    {
        s2=1+rand()%10;
    }
    if(s4==s1||s4==s3||s4==s3)
    {
        s4=1+rand()%10;
    }
     printf("%d %d %d %d",s1,s2,s3,s4);
    printf("\n\n");
}

/*Karsilastir fonksiyonu sayesinde tahmin gir ve sayi uretteki degiskenler karsilastirilacaktir.
yazilan kosullara gore tahmin sayisi her ayni olusunda 1 arttirilacak
ve arttirilan deger sayac degiskeninde tutulacaktir.*/
void karsilastir(int c1, int c2,int c3, int c4)
{
    sayi_uret();//Sayi uret fonksiyonumuzu burada cagirarak degiskenler burada kullanilir

    if(c1 == s1 || c1 == s2 || c1 == s3 || c1 == s4)
    {
        sayac++;
    }
    if(c2 == s1 || c2 == s2 || c2 == s3 || c2 == s4)
    {
        sayac++;
    }
    if(c3 == s1 || c3 == s2 || c3 == s3 || c3 == s4)
    {
        sayac++;
    }
    if(c4 == s1 || c4 == s2 || c4 == s3 || c4 == s4)
    {
        sayac++;
    }
    if(sayac==0)
        printf("Tahminlerinizin hepsi yanlis.\n");
    else
        printf("%d tane bildiniz.\n",sayac);
}
//Tahmin gir fonksiyonu sayesinde kullanicidan 4 sayi alinir.
void tahmin_gir(int t1, int t2, int t3, int t4)
{
    int a,b,c,d;
    printf("\n1-10 arasi 4 adet sayi giriniz:");
    scanf(" %d %d %d %d", &t1,&t2,&t3,&t4);

    /*Buradaki kosullar sayesinde degiskenlerin her biribirine esit ve 10 dan buyuk olmasi durumunda
    Fonksiyon tekrar cagrilir ve tekrardan kontroller yapilir.*/
    if(t1>10 || t2>10 || t3>10 || t4>10)
    {
        printf("\nLutfen 10 dan kucuk sayilar giriniz!!!\n");
        return tahmin_gir(a,b,c,d);//Bu komut sayesinde kosul saglandigi takdirde basa doner ve islemler tekrarlanir

    }
    if (t1==t2||t1==t3||t1==t4)
        {
            printf("\nLutfen ayni sayilari girmeyiniz!!!\nTekrar tahminlerinizi giriniz.\n");
            return tahmin_gir(a,b,c,d);

        }
    if(t2==t1||t2==t3||t2==t4)
        {
            printf("\nLutfen ayni sayilari girmeyiniz!!!\nTekrar tahminlerinizi giriniz.\n");
            return tahmin_gir(a,b,c,d);

        }
    if(t3==t1||t3==t2||t3==t4)
        {
            printf("\nLutfen ayni sayilari girmeyiniz!!!\nTekrar tahminlerinizi giriniz.\n");
            return tahmin_gir(a,b,c,d);

        }
    if(t4==t1||t4==t3||t4==t3)
        {
            printf("\nLutfen ayni sayilari girmeyiniz!!!\nTekrar tahminlerinizi giriniz.\n");
            return tahmin_gir(a,b,c,d);

        }
            printf("\n");
            karsilastir(t1,t2,t3,t4);/*Bu komutta girilen degiskenler karsilastir fonksiyonuna gonderilir.
            Gonderilen degerler sayý uret fonksiyonun degiskenleri ile karsilastirilir.
            Boylelikle dogru tahmin sayisi belirlenir.*/
}

//Bu fonksiyon cagrildiginde rastgele olarak degerler gelir.
void cark_cevir()
{
    printf("Cark Cevriliyor . . .\n\n");
    srand(time(NULL));
    rastgele=1+rand()%6;
    int t1,t2,t3,t4;
    switch(rastgele)//gelicek rastgele degere gore asagidaki komutlar gerceklesir
    {
        /*pas iflas ve puan azaltma disindaki durumlarda her gelisinde tahmin gire yonlendirilir.
        Boylelikle tahmin girilir , sayi uretilir, karsialstirma yapilir ve dogru tahmin sayisina gore
        puanin kazanilip kazanilmadigi belirlenir.*/
    case 1:
        printf("Cark Sonucu -> 50 Puan\n");
        tahmin_gir(t1,t2,t3,t4);
        break;
    case 2:
        printf("Cark Sonucu -> 100 Puan\n");
        tahmin_gir(t1,t2,t3,t4);
        break;
    case 3:
        printf("Cark Sonucu -> 250 Puan\n");
        tahmin_gir(t1,t2,t3,t4);
        break;
    case 4:
        printf("Cark Sonucu -> PAS\n\n");
        printf("Puaniniz degismedi. Puan Durumu : %.2f\n",puan);
        break;
    case 5:
        printf("Cark Sonucu -> PUAN AZALTMA\n\n");
        puan-=puan*25.00/100.00;
        printf("Yeni Puan Durumu : %.2f\n",puan);
        break;
    case 6:
        printf("Cark Sonucu -> IFLAS\n");
        puan=0;
        break;
    }
}

int main()
{
    while(puan!=0 )//punan 0 olmadigi takdirde oyuna devam edilsin.0 oldugu zaman donguye girmesin ve oyun sonlansin
    {
        tercih_yap();
        if(tercih=='c')//Kousul saglandigi takdirde oyuna baslanir
        {
            cark_cevir();
            printf("\n");
            //Asagidaki kosullara gore puanin alinip alinmayacagi belirlenir.
            /*Rastgele deger olarak 4 veya 5 (pas veya puan azaltma) gelirse dongu basa donucek
            tekra cark cevirilerek oyuna devam edilicek.*/
        if(rastgele==1)//50 puan alma kosulu
        {
            if(sayac==1||sayac==2||sayac==3||sayac==4)//1,2,3 veya 4 tane dogru tahmin de bulunur ise 50 puan eklenir
            {
                puan+=50;
                printf("Tebrikler Puani Kazandiniz. Yeni puaniniz : %.2f\n\n",puan);
            }
            else
                printf("Puan alamadiniz.Puan Durumu : %.2f\n\n",puan);
        }
        if(rastgele==2)//100 puan alma kosulu
        {
            if(sayac==2||sayac==3||sayac==4)//2,3 veya 4 tane dogru tahmin de bulunur ise 100 puan eklenir
            {
                puan+=100;
                printf("Tebrikler Puani Kazandiniz. Yeni Puan Durumu : %.2f\n\n",puan);
            }
            else
                printf("Puan alamadiniz.Puan Durumu : %.2f\n\n",puan);
        }
        if(rastgele==3)//250 puan alma kosulu
        {
            if(sayac==3||sayac==4)//3 veya 4 tane dogru tahmin de bulunur ise 250 puan eklenir
            {
                puan+=250;
                printf("Tebrikler Puani Kazandiniz. Yeni Puan Durumu : %.2f\n\n",puan);
            }
            else
                printf("Puan alamadiniz.Puan Durumu : %.2f\n\n",puan);
        }
            sayac=0;/*Her seferinde sayac sifirlanir. Boylelikle onceki degerlerle tekrar gelecek olan degerler
            birbirine eklenmez.*/
        }
        else if(tercih=='s')//Kosul saglandigi takdirde oyun sonlandirilir
        {
            printf("Oyundan cikariliyorsunuz ...\n");
            return 0;
        }
        else//Diger tum kosullarda dongu basa alinir ve tekrar tercih yapilmasi istenir.
            printf("\nYanlis harf girdiniz.\n\nLutfen ");
    }
    printf("Oyun Bitti !!!\n");

    //THE END ...

    return 0;
}
