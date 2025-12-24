#include<stdio.h>
int main(){
    long long Fnum,Lnum,sum=0;
    printf("Enter first number:");
    scanf("%lld",&Fnum);
    printf("Enter last number:");
    scanf("%lld",&Lnum);
    for(long long i=Fnum; i<=Lnum; i++){
        if(i%2!=0) continue;
            sum+=i;
        
    }
    printf("Sum of even number is %lld",sum);
    return 0;
}

// Enter first number: 2
// Enter last number: 10
// output
// Sum of even number is 30