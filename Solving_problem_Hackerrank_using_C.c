#include<stdio.h>
#define Max_len 100
/*=::::::::: This is my second language as programming language(C) 
  =::::::::: in here actually I trid solve some problem from Hackerrank::::::::::::::*/

void update(int *a, int *b);



//__________________________________________________________________________________
//____First_problem
//____Print Hello world with input:::
//


int main(){

//____First_problem
//____Print Hello world with input:::
//


    char another_seg [200];

    fgets(another_seg,200,stdin);

    printf("Hello, World!\n");
    printf("%s\n",another_seg);



//_____________________________________

//___Second_problem
//___Pointer in C

    int a,b;
    int *aa = &a, *bb = &b;

    scanf("%d %d",&a,&b);
    update(aa,bb);
    printf("%d\n%d\n",a,b);




//___Third_problem
//___Playing with charecter

    char ch,s[Max_len],sent[Max_len],chg;
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("%c",&chg);
    scanf("%[^\n]s",sent);
    printf("%c\n%s\n%s\n",ch,s,sent);

    return 0;
}


void update(int *a, int *b){
    int sum = (*a)+(*b);
    int differance =( *a)-(*b);

    *a = sum;
    *b = differance;
}