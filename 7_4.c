#include<stdio.h>

int main(){
    char str[100];
    int num=0;

    printf("文字列を入力してください\n");
    scanf("%s",str);

    for(int i=0; i<sizeof(str); i++){
        if(str[i] == 'a'){
            num++;
        }
    }
    printf("%sの中にaは%d個あります\n",str,num);
}