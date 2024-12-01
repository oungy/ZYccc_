#include <stdio.h>//读取一段二十四小时制时间，输出其五分钟后的时间
void print(int hour,int minute){
    if(minute>=55){
        if(hour==24){
            printf("00:%02d\n",60-minute);
        }
        else{
            printf("%02d:%02d\n",hour+1,60-minute);
        }
    }
    else{
        printf("%02d:%02d\n",hour,minute+5);
    }
}
int main()
{
	int n;
    scanf("%d",&n);
    int hour=0,minute=0;
    for(int i=0;i<n;i++){
        scanf("%02d:%02d",&hour,&minute);
        print(hour,minute);
    }
	return 0;
}