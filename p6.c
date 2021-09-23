#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int func();
int square(int num);

int main(){
    
    printf("%i \n", func());
    return func();
}

int func(){
    int count;
    int totalSquare = 0;
    int totalSum = 0;
    for(int count = 1; count < 101; count++){
        totalSum += count;
        totalSquare += square(count);
    }
        totalSum = square(totalSum);

    return totalSum - totalSquare;
}

int square(int num){
    return num * num;
}


