#include <stdio.h>
#include <stdlib.h>

int func();

int main(){
    printf("%i", func());
    return func();
}

int func(){
    int count;
    int total = 0;

    for(count = 0; count < 10; count++){
        if(count % 3 == 0 || count % 5 == 0){
            total += count;
        }
    }printf("%i", total);
    return total;
}