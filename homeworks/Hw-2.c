#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Hunerler(float fiyat, float* bagis, float* kar);

int main() {
    float fiyat;
    float toplamBagis = 0.0;
    float toplamKar = 0.0;

    FILE* dosya;
    dosya = fopen("donations.txt", "w");

    if (dosya == NULL) {
        printf("Dosya açılamadı.\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < 50; i++) {
        fiyat = (float)rand() / RAND_MAX * 20;

        printf("Item is %.2f\n", fiyat);
        fprintf(dosya, "Item is %.2f\n", fiyat);

        Hunerler(fiyat, &toplamBagis, &toplamKar);
    }

    printf("Donation is %.2f\n", toplamBagis);
    printf("Profit is %.2f\n", toplamKar);

    fprintf(dosya, "Donation is %.2f\n", toplamBagis);
    fprintf(dosya, "Profit is %.2f\n", toplamKar);

    fclose(dosya);

    return 0;
}

void Hunerler(float fiyat, float* bagis, float* kar) {
    int tamKisim = (int)fiyat;
    float kesirliKisim = fiyat - tamKisim;

    *kar += tamKisim;
    *bagis += kesirliKisim;
}
