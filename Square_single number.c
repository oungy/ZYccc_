//计算数字各位数字的平方和并相加
//已知一个整数n，打印1到n所有除以m后所得商正好是它本身的各个数字平方和的数。

//输入格式:
//为两个用空格分隔的整数，它们依次代表n、m（1<m,n<=10000)。

//输出格式:
//按从小到大的顺序依次输出所有满足条件的整数，每个数占一行。测试用例保证有满足条件的数。

#include<stdio.h>
#include<math.h>
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
int SQU(int x){
    int len=LEN(x);
    int x_=x;
    int i,sum;
    for(sum=0,i=0;i<len;i++){
        sum=sum+(x_%10)*(x_%10);
        x_=x_/10;
    }
    return sum;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int i;
    for(i=1;i<=n;i++){
        //注意c语言中整数与整数相除结果仍然是整数，不带有小数部分
        if(SQU(i)==i/m){
            printf("%d\n",i);
        }
        else{
            continue;
        }
    }
    return 0;
}