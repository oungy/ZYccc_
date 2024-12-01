#include<stdio.h>
//鸡 1头两腿 兔 1头4腿 蜻蜓 1头6腿
void CAGE(int m,int n){
    int x,y,z;
    //用三重循环遍历xyz的值，并根据结果检查是否满足条件输出
    for(x=0;x<=m;x++){
        for(y=0;y<=m-x;y++){
            z=m-y-x;
            if(2*x+4*y+6*z==n){
                printf("%d %d %d\n",x,y,z);
            }
        }
    }
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    CAGE(m,n);
    return 0;
}