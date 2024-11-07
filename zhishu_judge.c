#include<stdio.h>//17 19 60 77 2 92 38 63 92 69 91 94 11 -1
char isPP(int x)//定义质数判断函数
{
    int i,flag=1;
    char yn;
    if(x<2)//<2的不是质数
    {
        yn='n';
    }
    else if(x==2)//2是质数
    {
        yn='y';
    }
    else if(x>2)
    {
        for(i=2;i<x&&flag==1;i++)
        {
            int _i=x%i;
            if(_i==0)
            {
                yn = 'n';
                flag=0;
            }
            else 
            {
                yn='y';
            }
        }
    }
    return yn;
}
int main()
{
    int y;
    scanf("%d",&y);
    int k=isPP(y);
    printf("%c",k);
    return 0;
}