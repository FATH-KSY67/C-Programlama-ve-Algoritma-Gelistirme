#include<stdio.h>
#include<stdlib.h>

int main(void) {
    char grade;
    printf("harf notunu giriniz: ");
    scanf(" %c", &grade); 
    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
            printf("Geçti");
            break;
        case 'D':
            printf("Koşullu geçti");
            break;
        case 'F':
            printf("Kaldı");
            break;
        default:
            printf("Geçerli bir harf notu girilmedi");
    }
    return 0;
}
