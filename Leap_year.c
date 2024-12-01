#include<stdio.h>
//闰年：能被4整除但不能被100整除，或者能被400整除
int LEAP(int year){
    char p;
    if((year%4==0&&year%100!=0)||year%400==0){
        p='y';
    }
    else{
        p='n';
    }
    return p;
}
int getDays(int year,int month){
    int days;
    if(LEAP(year=='y')){
        switch (month){
            case 1: days=31;break;
            case 2: days=29;break;
            case 3: days=31;break;
            case 4: days=30;break;
            case 5: days=31;break;
            case 6: days=30;break;
            case 7: days=31;break;
            case 8: days=31;break;
            case 9: days=30;break;
            case 10: days=31;break;
            case 11: days=30;break;
            case 12: days=31;break;
        }

    }
    else if(LEAP(year)=='n'){
        switch (month){
            case 1: days=31;break;
            case 2: days=28;break;
            case 3: days=31;break;
            case 4: days=30;break;
            case 5: days=31;break;
            case 6: days=30;break;
            case 7: days=31;break;
            case 8: days=31;break;
            case 9: days=30;break;
            case 10: days=31;break;
            case 11: days=30;break;
            case 12: days=31;break;
        }
    }

    return days;
}
int main(){
    int year,month;
    scanf("%d %d",&year,&month);
    int days=getDays(year,month);
    return 0;
}