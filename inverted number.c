#include<stdio.h>//这是一个将数字倒置的算法
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
    int main()
{
    int n;
    scanf("%d",&n);
    int len=LEN(n);
    int n_=n;//能够保留n的值进行运算
    int p,i;//设置了迭代变量与临时变量
    if(n_%10==0){
        printf("The number cannot be changed.");//对于无法倒置的(末尾是0)，输出error
    }
    else{
        for(i=0;i<len;i++){
            p=n_%10;
            n_=n_/10;
            printf("%d",p);
        }
    }
    return 0;
}