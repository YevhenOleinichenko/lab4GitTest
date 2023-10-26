#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    double input_double_number;
    double answer_10_suma = 0;
    for (int i = 0; i < 10; i++){
        printf("Podaj %d liczbe:\n", i);
        int check = scanf("%lf", &input_double_number);
        if (check != 1){
            printf("Incorrect input");
            return 1;
        }
        answer_10_suma += input_double_number;
    }
    printf("%lf", answer_10_suma);
    return 0;
}