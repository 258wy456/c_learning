#include <stdio.h>
int i;
int a;
int src[10];
int j;
int main(){
    printf("请输入一个三位整数：");
    scanf("%d",&i);
    if(i >= 100 && i<=999){
        for(a = i;a <= 999;a /= 10){
            src[j] = a % 10;
            j++;
        }
        int muntter = 0;
        for (int r = 0; r < j;r++){
            muntter += src[r] * src[r] * src[r];
        }
        if(muntter = i){
            printf("%d是水仙花数\n",i);
        }else{
            printf("%d不是水仙花数\n",i);
        }
        }
    else{
            printf("%d不是水仙花数\n",i);
        }
        return 0;
    }
