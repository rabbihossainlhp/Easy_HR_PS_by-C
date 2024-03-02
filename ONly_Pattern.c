#include <stdio.h>

int main()
{
    // First Simple pattern...

    // int NUmber,row,coulumn;
    // printf("Enter value of NUmber:\n");
    // scanf("%d", &NUmber);

    // for(row = 1; row<=NUmber; row+=1){

    //     for(coulumn=1; coulumn<=row;coulumn+=1){
    //         printf("%d", row);                         // change only row/coulum
    //     }
    //     printf("\n");
    // }

    // int NUmber,row,coulumn;
    // printf("Enter value of NUmber:\n");
    // scanf("%d", &NUmber);

    // for(row = 1; row<=NUmber; row+=1){

    //     for(coulumn=1; coulumn<=row;coulumn+=1){
    //         if (row%2==0){
    //             printf("%d",0);
    //         }
    //         else if (row%2 !=0){
    //             printf("%d",1);
    //         }
    //         //printf("%d", coulumn);                         // change only row/coulum,,,here also we have to change row/coulumn
    //     }
    //     printf("\n");
    // }

    //  int NUmber,row,coulumn;
    // printf("Enter value of NUmber:\n");
    // scanf("%d", &NUmber);

    // for(row = 1; row<=NUmber; row+=1){

    //     for(coulumn=1; coulumn<=row;coulumn+=1){

    //        // printf("%c", row+96);                       // here we have to change just "sky val" of charecters and column/row

    //        printf("@");
    //     }
    //     printf("\n");
    // }

    //  int NUmber,row,coulumn;
    // printf("Enter value of NUmber:\n");
    // scanf("%d", &NUmber);

    // for(row = NUmber; row>=1; row-=1){

    //     for(coulumn=1; coulumn<=row;coulumn+=1){
    //         printf("%c", coulumn+64);                         // change only first loop with low incrasing from user
    //     }
    // //     printf("\n");
    // }

    // int row,col,inp;
    // printf("Enter the number:\n");
    // scanf("%d",&inp);

    // for (row = 1; row<=inp; row++){

    //     for (col=1;col<=row;col++){

    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for(row = inp-1; row>=1; row--){

    //     for(col = 1; col<=row; col++){                                   //here you have to just create to same loop &
    //         printf("*");                                                 //change only (user-1)
    //     }
    //     printf("\n");
    // }

    //___ pattern 4

    // int col,row,num;
    // printf("Enter the number:");
    // scanf("%d",&num);

    // for(row = 1; row<=num; row++){

    //     for(col = 1; col<= num - row; col++){
    //         printf(" ");
    //     }
    //     for(col = 1; col<= row; col++){
    //         printf("#",col);
    //     }
    //     printf("\n");
    // }

    // //from here another new loop started____
    // for(row=num; row>=1; row--){

    //     for(col=1; col<=num-row; col++){
    //         printf(" ");
    //     }
    //     for(col=1; col<=row; col++){
    //         printf("#",col);
    //     }
    //     printf("\n");
    // }

    // int newU,row,col;
    // printf("Enter the number:");
    // scanf("%d",&newU);

    // for(row=1; row<=newU; row++){

    //     for(col=1; col<=row; col++){
    //         printf("%d",row*col);
    //     }
    //     printf("\n");
    // }

    // ANOTHER NEW LOOP WITH PATTEERN__________________________________
    //  int inp,row,col;
    //  printf("Enter the number:");
    //  scanf("%d",&inp);

    // for(row = 1; row<=inp; row++){

    //     for(col=1; col<=inp-row; col++){
    //         printf(" ");
    //     }
    //     for(col=1; col<=2 * row - 1; col++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //  for(row = inp-1; row>=1; row--){
    //     for(col=1; col<=inp-row; col++){
    //         printf(" ");
    //     }
    //     for(col=1; col<=2 * row - 1; col++){
    //         printf("*");                          // nothibg difficult in here you have to just make another same type 3 loop only
    //     }
    //     printf("\n");

    //  }

    // int inpu,row,col;
    // printf("Enter the number:");
    // scanf("%d",&inpu);

    // for(row=1; row<=inpu; row++){
    //     for(col=1; col<=inpu-row; col++){
    //         printf(" ");
    //     }
    //     for(col = 1; col<=row; col++){
    //         printf("* ");
    //     }                            ///another loop for make a lower similler part>>>>>>>>>>>>
    //     printf("\n");
    // }

    // for(row=inpu-1; row>=1; row--){
    //     for(col=1; col<=inpu-row; col++){
    //         printf(" ");
    //     }
    //     for(col=1; col<=row; col++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    //____Another new loop for pattern
    // int user,row,col;
    // printf("Enter the number:");
    // scanf("%d",&user);

    // for(row=1; row<=user; row++){
    //     for(col=1; col<=user; col++){
    //         if(row==1|| row==user || col==1 || col==user){
    //             printf("%d",row);
    //         }
    //         else{
    //             printf(" ");
    //         }                                      //In tihs loop you have to attached just a condition for printig specific row and column
    //     }
    //     printf("\n");
    // }

    // int us,col,row;
    // printf("Enter the number:");
    // scanf("%d",&us);

    // for(row=1;row<=us; row++){
    //     for(col=1; col<=row; col++){
    //         if(row==1||row==us || col==1||col==row){
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");                     //here also you have to print space in middle of pyramid triangle
    //         }
    //     }
    //     printf("\n");
    // }


// lets start anothre new pattern with new condition
    // int n,row,col;
    // printf("Enter the number:");
    // scanf("%d",&n);

    // for(row=1; row<=n; row++){
    //     for(col=1; col<=n; col++){
    //         if ( row==col || row+col==n+1){
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }


    // int count=0,row,col,user;
    // printf("Enter the number:");
    // scanf("%d",&user);

    // for(row=1; row<=user; row++){
    //     for(col=1; col<=row; col++){
    //         printf("%d",++count);
    //     }
    //     printf("\n");
    // }


    int n,row,col;
    printf("Enter the number:");
    scanf("%d",&n);

    for(row=1; row<=n; row++){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            printf("%d",col);
        }
        for(col=row-1; col>=1; col--){
            printf("%d",col);
        }
        printf("\n");
    }
        for(row=n-1; row>=1; row--){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            printf("%d",col);
        }
        for(col=row-1; col>=1; col--){
            printf("%d",col);
        }
        printf("\n");
    }                                                         // with this patter finished the pattern serise tuto
                       





    return 0;
}