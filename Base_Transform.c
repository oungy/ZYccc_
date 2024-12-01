#include<stdio.h>
#include<math.h>
//这是一个二进制转换十进制的算法，通过循环实现，利用了二进制和十进制的基本定义解决
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
    int x,i;
    scanf("%d",&x);
    int len=LEN(x);
    int trans_x=0,x_=x;
    for(i=0;i<len;i++){
        trans_x=trans_x+(x_%10)*pow(2,i);
        x_=x_/10;
    }
    printf("%d",trans_x);
}