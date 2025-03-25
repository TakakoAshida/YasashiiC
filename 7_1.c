#include<stdio.h>

int main(){
    int test[5];
    int high=0;

    printf("テストの点数を入力してください\n");
    for(int i=0; i<5; i++){
        scanf("%d",&test[i]);
        if(test[i]>high){
            high = test[i];
        }
    }
    for(int i=0; i<5; i++){
        printf("%d番目の人の点数は%d点です\n",i+1,test[i]);
    }
    printf("最高点は%d点です",high);

}