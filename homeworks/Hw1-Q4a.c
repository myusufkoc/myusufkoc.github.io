#include <stdio.h>
#include <math.h>
double homeValue();

int main(void){
    int pop, size, total;
    printf("Enter popularity: ");
    scanf("%d", &pop);
    printf("Enter size: ");
    scanf("%d", &size);
    total = homeValue(pop, size);
    printf("Home value is: %d", total);
    return 0;
}

double homeValue(int x, int y){
    return((pow(x,3)+pow(y,2))*10000);
}