#include <stdio.h>
int main(){
    int mima;
    int cishu=5;
    int qr;
    do{
        printf("请输入密码：");
        scanf("%d",&mima);
        if(111111 == mima ){
            printf("密码正确，棒棒嗒！！！\n");
            break;
        }else{
            printf("密码错误，呜呜唔！！！\n");
            cishu = cishu-1;
            if( 0 == cishu ){
                printf("由于您输入次数过多，请一年后再来哦，拜拜不送！！！｜\n");
                break;
            }
            printf("您还有%d机会！！\n",cishu);
            printf(" 您是否要继续：");
            scanf("%d",&qr);
        }
    }while( 0 != qr);
}
