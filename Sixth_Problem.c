#include<stdio.h>

                        /*Sum of Digits of a Five Digit Number--- from Hackerrank . A simple Problem
                        =============================================================================*/
int main(){
    int number;
    int sum = 0;
    scanf("%d",&number);

    while(number > 0){
        sum = sum+number%10;
        number = number/10;
    }
    printf("%d",sum);
    

    return 0;
}                                      //this was another simple logical prblm.........