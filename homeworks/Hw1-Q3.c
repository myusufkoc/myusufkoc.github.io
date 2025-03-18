#include <stdio.h>
#include <math.h>

int main(void) {
    int popularity, size;
    double homeValue;
    printf("Enter popularity: ");
    scanf("%d", &popularity);
    printf("Enter size: ");
    scanf("%d", &size);
    homeValue = (pow(popularity,3)+ pow(size,2)) * 10000;
    printf("Home value is: %.0lf \n", homeValue);

    return 0;
}
