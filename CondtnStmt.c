#include <stdio.h>

int main()
{
    int grade;
    printf("Enter marks - ");
    scanf("%d", &grade);
    
    if (grade>=85 && grade<=100){
        printf("You got grade A!");
    }
    else if (grade>=70 && grade<=84){
        printf("You have grade B!");
        
    }
    else if (grade>=55 && grade<=69){
        printf("You got C!");
    }
    else if (grade>=40 && grade<=54){
        printf("Grade D");
    }
    else{
        printf("F");
    }

    return 0;
}
