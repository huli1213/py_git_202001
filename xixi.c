#include <stdio.h>
int main(){
    int pass;   //pass代表密码  //代表单行注释 对于程序无影响
    int num = 5;// num代表输入次数
    int n; //n代表是否继续
    do{
       printf("请输入密码:");
       scanf("%d",&pass);
       scanf("%*[^\n]");
       scanf("%*c");
       if(123456 == pass){
           printf("密码正确，么么哒!!!\n");
           break;
       }else{
           printf("密码错误，呜呜呜!!!\n");
           num = num - 1;
           if( 0 == num){
               printf("由于您输入错误密码次数过多，1年后再来!!!\n");
               break;
           }
           printf("您还有%d次机会!!!\n",num);
           printf("是否继续:");
           scanf("%d",&n);
       } 
    }while( 0 != n );
}

