#include <stdio.h>

int main(){
    int n,rev =0,b,cpy;     
    printf("Enter any number : ");
    scanf("%d",&n);
    cpy = n;
    while(n != 0){

    
    b = n % 10;
    rev= rev * 10 + b;
    n = n / 10;
    }
    if(cpy == rev){
        printf("The given  number is a palindrome\n");
    }
    else{
          printf("The given  number is not a palindrome\n");
    }
    return 0;
}