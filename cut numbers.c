#include<stdio.h>//这是将数字各个位数的数单独打印出来的算法
#include<math.h>//结合进数组的话可以对各位数字进行存储
int LEN(int x){
    int p;
    int x_=x;
    int flag=1;
    for(p=0;flag==1;p++){
        x_=x_/10;
        if(x_==0){
            flag=0;
        }
    }
    return p;
}
int main(){
    int y;
    scanf("%d",&y);
    int len=LEN(y);
    int i;
    int y_=y;
    for(i=1;i<len;i++){
        int len_=len-i;
        int m=y_/pow(10,len_);
        printf("%d ",m);
        y_=y_-m*pow(10,len_);
    }
    printf("%d\n",y_);
    return 0;
}