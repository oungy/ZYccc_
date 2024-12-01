#include<stdio.h>//这是一个通过矩阵快速幂方法求出斐波那契数列第n项除以101的余数的算法
typedef long long ll;
void mul(ll A[2][2],ll B[2][2]){
    int a1,a2,a3,a4;
    a1=A[0][0]*B[0][0]+A[0][1]*B[1][0];
    a2=A[0][0]*B[0][1]+A[0][1]*B[1][1];
    a3=A[1][0]*B[0][0]+A[1][1]*B[1][0];
    a4=A[1][0]*B[0][1]+A[1][1]*B[1][1];
    A[0][0]=a1%101;
    A[0][1]=a2%101;
    A[1][0]=a3%101;
    A[1][1]=a4%101;
}
ll fib(ll n){
    ll M[2][2]={{1,1},{1,0}};
    if(n==1||n==2){
        return 1;
    }
    else{
        for(ll i=2;i<n;i++){
            ll E[2][2]={{1,1},{1,0}};
            mul(M,E);
        }
        return M[0][0];
    }
}
int main(){
    ll n;
    scanf("%lld",&n);
    printf("%lld",fib(n)%101);
    return 0;
}