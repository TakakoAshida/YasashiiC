#include<stdio.h>

int main(){
    int num;
    int a=1;
    printf("2以上の素数を入力してください\n");
    scanf("%d",&num);

    for(int i=2; i<num; i++){
        if(num%i == 0){
            printf("%dは素数ではありません\n",num);
            break;
        }
        a++;
    }
    if(a == num-1){
        printf("%dは素数です\n",num);
    }

}