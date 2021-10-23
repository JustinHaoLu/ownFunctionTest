#include <stdio.h>

int judgeYear(int a){
    if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0){                 //judge whether the year is leapyear or common year.
        return 1;                                                   //if the year is leap year, return 1.
    }
    else{
        return 0;                                                   //if the year is common year, te
    }
}

int judgeSpan(int year, int month, int day){
    int sum = 0, i, j, k;
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int b[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(judgeYear(year) == 1){

    }
}

int main(){

}