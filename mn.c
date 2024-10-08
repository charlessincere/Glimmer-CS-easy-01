#include <stdio.h>
#include <math.h>

int  main(){

    double result = pow(2, 31);
    int m,n,r=1;

    printf("请输入两个整数m,n:");
    scanf("%d,%d",&m,&n);

    if (0<m && m<result && 0<n && n<result){
            int x = (m > n) ? m : n;  //取m，n中大的值为x，方便后续计算
            int y = (m < n) ? m : n;  //与上面同理，取个比较小的值为y
        
            while(r != 0 ){  /*计算最大公约数*/
            r = x % y;
            x = y, y = r;
            }
        
            printf ("最大公约数为%d\n",x);
            
        }
        else
        printf("语法错误");
       
} 
