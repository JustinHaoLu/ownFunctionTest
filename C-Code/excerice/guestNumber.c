//This algorithm has the function that it can output a random number and ask user to input a number he guest can test whether the input number is equal to the random number.
#include <stdio.h>
#include <time.h>

int main(void){
    int count = 0, flag = 0, mynumber, yournumber;
    srant(time(0));
    mynumber = rand() % 100 + 1;
    while (count < 7)
    {
        printf("Enter your number:\n");
        scanf("%d",&yournumber);
        count++;
        if(yournumber == mynumber ){
            printf("Lucky You!\n");
            flag = 1;
            break;
        }
        else{
            if(yournumber > mynumber){
                printf("Too big\n");
            }
            else if(yournumber < mynumber){
                printf("Too small!\n");
            }
        }
    }
    printf("Game Over! You have guested 7 times but didn't guest the correct number!\n");
}