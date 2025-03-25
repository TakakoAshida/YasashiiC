#include<stdio.h>

int main(){
    int num=1;
    int sum=0;
    printf("テストの点数を入力してください(0で終了)\n");

    while(num){
        scanf("%d",&num);
        sum += num;
    }

    printf("テストの合計点は%d点です\n",sum);

}