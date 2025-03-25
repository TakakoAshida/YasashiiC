#include<stdio.h>

int main(){
    int num1,num2,num3,num4,num5;

    for(int i=0; i<5; i++){
        printf("科目%dの点数を入力してください\n",i+1);
        if(i==0) scanf("%d",&num1);
        else if (i==1) scanf("%d",&num2);
        else if (i==2) scanf("%d",&num3);
        else if (i==3) scanf("%d",&num4);
        else if (i==4) scanf("%d",&num5);  
    }
    printf("5科目の合計点は%d点です\n",num1+num2+num3+num4+num5);
    printf("5科目の平均点は%f点です\n",((double)num1+(double)num2+(double)num3+(double)num4+(double)num5)/5.0);
    
}