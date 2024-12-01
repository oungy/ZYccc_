#include<stdio.h>//这是一个估算e^x的算法
#include<math.h>
//factorial阶乘算法
double FAC(int x){
    int i;
    double factorial_x=1;
    if(x!=0){
        for(i=1;i<=x;i++){
            factorial_x=factorial_x*i;
        }
    }
    else if(x==0){
        factorial_x=1;
    }
    return factorial_x;
}
int main(){
    double x;
    scanf("%lf",&x);
    int i;
    double sum=0,a_n=1;
    for(i=1;fabs(a_n)>=1e-8;i++){
        
        sum=sum+a_n;
        a_n=pow(x,i)/FAC(i);
    }
    printf("%.4lf",sum);
    return 0;
}