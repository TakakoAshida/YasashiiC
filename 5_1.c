#include<stdio.h>

int main(){
    int num;

    printf("整数を入力してください\n");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("%dは偶数です\n",num);
    }
    else if(num%2 != 0){
        printf("%dは奇数です\n",num);
    }
}