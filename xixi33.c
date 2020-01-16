#include <stdio.h>
int main(){
    int mima;
    int cishu = 5;
    int queren;
    do{
        printf("请输入密码：");
        scanf("%d",&mima);
        if(666666 == mima){
            printf("密码输入正确!!\n");
            break;
        }else
            printf("密码输入错误!!\n");
        cishu = cishu-1;
        if(0 == cishu){
            printf("您还有%d机会!\n",cishu);
            printf("是否继续：");
            scanf("%d",&cishu);
        }
    }while(0 != queren);
}
