#include <stdio.h>
#include <cs50.h>

void countdown(int n){
    if(n == 0){
        return;
    } else
    printf("%d\n", n);
    countdown(n - 1);
}


int main(){
    countdown(3);
    return 0;
}
