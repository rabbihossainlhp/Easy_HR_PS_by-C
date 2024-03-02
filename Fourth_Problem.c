#include<stdio.h>

                        /*Function C from Hackerrank . A simple Problem
                        ===============================================*/
//Define Function_______
int Max_of_four(int a, int b, int c, int d);

int main(){

    int a,b,c,d;
    //printf("Enter the Four Number:\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int answere = Max_of_four(a,b,c,d);
    printf(" %d\n",answere);

   //printf("The Maximum Number is: %d\n",answere);

    return 0;
}

//Decleare Function_______
int Max_of_four(int a, int b, int c, int d){
    if (a>b && a>c && a>d){
        return a;
    }
    else if (b>a && b>c && b>d){
        return b;
    }
    else if (c>a && c>b && c>d){
        return c;
    }
    else {
        return d;
    }
}