#include<stdio.h>

int M_Summation(int marks[], int number_of_student, char Gender);
                                   
int main(){
    int number_of_s;
    printf("Enter the number of students: ");
    scanf("%d", &number_of_s);
    
    int marks[number_of_s];
    printf("Enter the marks of students:\n");
    for(int i = 0; i < number_of_s; ++i){
        scanf("%d", &marks[i]);
    }

    char gender;
    printf("Enter the gender {b for Boy & g for Girls}: ");
    scanf(" %c", &gender); 

    
    // Now time to test the result........ Let's Go
    int Result = M_Summation(marks, number_of_s, gender);
    printf("%d\n", Result);
    
    return 0;
}

int M_Summation(int marks[], int number_of_student, char Gender){
    int sum = 0;
    int val;
    if(Gender == 'b'){
        for(val = 0; val < number_of_student; val += 2){
            sum += marks[val];
        }
    }
    else{
        for(val = 1; val < number_of_student; val += 2){
            sum += marks[val];
        }
    }
    return sum; 
}
