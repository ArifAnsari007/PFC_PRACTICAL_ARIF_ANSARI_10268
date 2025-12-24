#include<stdio.h>
int main (){
    long long pin,count=0;
    printf("Enter your pin:");
   
   while(count<=3){
     scanf("%lld",&pin);
     if(pin==1234){
        printf("Access Granted");
        return 0;
    }
    else {
        count++;
       if (count <= 3) {
                printf("Try Again!\nEnter correct pin: ");
            }
        }
    }
printf("Your Account Locked!");
    return 0;
}

// Enter your pin:1234
// ouput
// Access Granted
