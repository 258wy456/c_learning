#include <stdio.h>
int main(){
    unsigned char reg = 10;
    printf("初始值为:%d\n",reg);
    reg |=(1 << 0);
    printf("第0位置1后：%d\n",reg);
    reg |=(1 << 3);
    printf("第3位置1后：%d\n",reg);
    reg &=(1 << 3);
    printf("第3位置0后：%d\n",reg);
    reg ^=(1 << 1);
    printf("第1位置翻转后：%d\n",reg);
    return 0;
}