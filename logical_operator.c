#include<stdio.h>
// Demonstrating logical operators in C
int main(){
    int a=5, b=10, c=15;
    if (a<b && b<c){
        printf("Both conditions are true\n");
    }
    if (a>b || b<c){
        printf("At least one condition is true\n");
    }
    if(!(a>b)){
        printf("Condition is false\n");
    }   
    return 0;
}