#include<stdio.h>
int main (){
    int n;
     printf("Enter Size of array :");
     scanf("%d",&n);
     int arr[n];
     for(int i=0; i<n; i++){
        printf("Enter Element : ");
        scanf("%d",&arr[i]);
     }
     printf("Reverse Element:");
   for(int i=n-1; i>=0; i--){
    printf("%d ",arr[i]);
   }
   return 0;
}

// Enter Size of array :4
// Enter Element : 1
// Enter Element : 2
// Enter Element : 3
// Enter Element : 4
// Reverse Element:4 3 2 1 