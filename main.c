#include <stdio.h>

int minus(int x,int y){
    return x - y;
}

int plus(int x,int y){
    return x + y;
}

int main(){
    int x, y, op=0;
    printf("Enter two numbers(x y) : ");
    scanf("%d %d",&x, &y);
    printf("\nEnter the operaton\n1. plus\n2. minus\n>> ");
    scanf("%d",&op);

    int res=0;

    if (op==1) res = plus(x,y);
    if (op==2) res = minus(x,y);
    printf("result is [%d]\n",res);

    return(0);
}