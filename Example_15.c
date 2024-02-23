#include <stdio.h>

int main() {

    int dogru, yanlis, bos, tercih;
    float net;

    printf("4 yanlis 1 dogruyu götürüyorsa (1), 3 yanlis bir dogruyu  götürüyor ise (2) ye basiniz: ");
    scanf("%d", &tercih);
    
    printf("doğru sayisini giriniz: ");
    scanf("%d", &dogru);

    printf("yanlis sayisini giriniz: ");
    scanf("%d", &yanlis);
    
    printf("bos sayisini giriniz: ");
    scanf("%d", &bos);

    if (tercih == 1) {
        int eksi_net = yanlis * 0.25;
        net = dogru - eksi_net;
    }
    else if (tercih == 2) {
        int eksi_net = yanlis * 0.33;
        net = dogru - eksi_net;
    }

    printf("net sayiniz: %.2f\n", net);

    return 0;
}
