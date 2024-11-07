#include<stdio.h>
#include<math.h>
int main()
{
    float x;
    scanf("%f",&x);
    int i=1;
    float p=x;
    double sum=p;
    while(fabsf(p)>=1e-6)
    {
        p=((-1)*p*x*x)/((i+1)*(i+2));
        sum=sum+p;
        i=i+2;
    }
    printf("Sinx=%f\n",sum);
    getchar();
    getchar();
    return 0;
}
