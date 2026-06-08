#include<stdio.h>
int main(){
    int n ,result=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n>0){
        result+=n % 2 ;
        n/=2;
    }
    printf("Number of set bits = %d\n",result);
    return 0;
}