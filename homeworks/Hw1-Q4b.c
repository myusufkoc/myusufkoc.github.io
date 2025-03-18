#include <stdio.h>
#include <math.h>

void computeHomeValue(void){
    int pop, size, total;
    printf("Enter popularity: ");
    scanf("%d", &pop);
    printf("Enter size: ");
    scanf("%d", &size);
    total = (pow(pop,3)+pow(size,2))*10000;
    printf("Home value is: %d", total);
    
}

int main(){
    computeHomeValue();
    return 0;
}