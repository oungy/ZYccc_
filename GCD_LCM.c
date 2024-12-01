#include<stdio.h>
//最大公因数用辗转相除法，最小公倍数和最大公因数有关系，gcd(a,b)*lcm(a,b)=|a*b|，加绝对值是因为最小公倍数和最大公因数通常是指的是正整数
//这里x与y也是严格的正整数
int GCD(int x,int y){
    int gcd_xy;
    int x_=x,y_=y;
    int temp;
    while(y_!=0){
        temp=y_;
        y_=x_%y_;
        x_=temp;
    }
    gcd_xy=x_;
    return gcd_xy;
}
int LCM(int x,int y){
    int lcm_xy;
    lcm_xy=x/GCD(x,y)*y;//这里分开相乘的目的是为了防止x*y数据爆炸超出int承受范围
    return lcm_xy;
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int gcd=GCD(m,n);
    int lcm=LCM(m,n);
    printf("%d %d",gcd,lcm);
    return 0;
}