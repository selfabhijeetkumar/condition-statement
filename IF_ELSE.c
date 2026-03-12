#include<stdio.h>
int main(){
    int age;
    printf("enter the age :");
    scanf("%d",&age);
    if (age > 18){
        printf("you are an adult \n");
        printf("you can drive \n");
        printf("focus on career\n ");
    }
    else if (age < 18)
    {
        printf("enjoy \n");
    }
    printf("thank you !");

    
    
}