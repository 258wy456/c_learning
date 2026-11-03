#include <stdio.h>
int main(){
	int arr[5];
    int a = 0;
    printf("请输入五个数字：");
    for(int i = 0;i < 5;i++){
        scanf("%d",&arr[i]);
        a = a + arr[i];
    }
       int max = arr[0];
       for(int j = 1;j < 5;j++){
        if(arr[j]>max){
            max = arr[j];
        }
       }
    float b =(float)a / 5;
    printf("平均值是：%.2f\n",b);
    printf("最大值是：%d\n",max);
    return 0;
}
