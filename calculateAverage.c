#include <math.h>
#include <stdio.h>

float calculateAverage(float data[]);

int main() {
    int i;
    float data[10];
    printf("Enter 10 elements: ");
    for (i = 0; i < 10; ++i)
        scanf("%f", &data[i]);
     
    printf("\n Average  = %.6f", calculateAverage(data));
    
    return 0;
}

float calculateAverage(float data[]) {


}
