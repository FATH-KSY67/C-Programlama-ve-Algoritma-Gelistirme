#include<stdio.h>
#include<string.h>

int main() {
    char aylar[][20] = {"ocak", "şubat", "mart", "nisan", "mayıs","haziran", "temmuz", "ağustos", "eylül", "ekim", "kasım", "aralık"}; // Örnek isimler dizisi
    char girilen_ay[20];
    int bulundu = 0;

    printf("Bir ay adı giriniz: ");
    scanf("%s",&girilen_ay); 
    // İsimleri kontrol et
    for(int i = 0; i < 12; i++) {
        if(strcmp(aylar[i], girilen_ay) == 0) {
            bulundu = 1; // İsim dizi içinde bulundu

            // İsme göre farklı metinler yazdır
            switch (i) {
                case 0:
                    printf("Ocak ayı yılın 1. ayıdır\n");
                    break;
                case 1:
                    printf("Şubat ayı yılın 2. ayıdır\n");
                    break;
                case 2:
                    printf("Mart ayı yılın 3. ayıdır\n");
                    break;
                case 3:
                    printf("Nisan ayı ılın 4. ayıdır\n");
                    break;
                case 4:
                    printf("Mayıs ayı yılın 5 ayıdır\n");
                    break;
                case 5: 
                    printf("Haziran ayıy ılın 6.ayıdır\n");
                    break;
                case 6: 
                    printf("Temmuz ayı yılın 7 ayıdır\n");
                    break;
                case 7:
                    printf("Ağustos ayı yılın 8. ayıdır.\n");
                    break;
                case 8:
                    printf("Eylül ayı yılın 9. ayıdır.\n");
                    break;
                case 9:
                    printf("Ekim ayı yılın 10. ayıdr.\n");
                    break;
                case 10:
                    printf("Kasım ayı yılın 11. ayıdır.\n");
                    break;
                case 11:
                    printf("Aralık ayı yılın 12. ayıdır.\n");
                    break;
                    
                default:
                    break;
            }
        }
    }

    // İsim dizide bulunmuyorsa mesaj yazdır
    if(bulundu == 0) {
        printf("%s, yanlış bir ay adı girdiniz.\n", girilen_ay);
    }

    return 0;
}
