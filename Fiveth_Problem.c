#include<stdio.h>

                        /*For loop in C from Hackerrank . A simple Problem
                        ===============================================*/

int main(){

    int a,b;
    scanf("%d\n%d",&a,&b);

//___for loop from here......
    for(int i = a; i<=b; i+=1){
        if(i==1){
            printf("one\n");
        }
        else if(i==2){
            printf("two\n");
        }
        else if(i==3){
            printf("three\n");
        }
        else if(i==4){
            printf("four\n");
        }
        else if(i==5){
            printf("five\n");
        }
        else if(i==6){
            printf("six\n");
        }
        else if(i==7){
            printf("seven\n");
        } 
        else if(i==8){
            printf("eight\n");
        }
        else if(i==9){
            printf("nine\n");
        }
        else if(i>9 && i%2==0){
            printf("even\n");
        }
        else if(i>9 && i%2 != 0){
            printf("odd\n");
        }
    }

    return 0;
}


/// in this problem can be wright another short logic === 
//=======but I wrote this code instantly without deep thinking