
1. **高级计算机语言与低级计算机语言，各有什么优劣，你更喜欢哪一类计算机语言**？
    ### ==[优劣](https://blog.csdn.net/guoxiaoqian8028/article/details/910315 )==
   高级语言：实现效率高，执行效率低，对硬件的可控性弱，目标代码大，可维护性好，可移植性好。
   例如 ：**c** ** c++**  **python** ** java**
   低级语言：实现效率低，执行效率高，对硬件的可控性强，目标代码小，可维护性差，可移植性差
   例如：**机器语言** **汇编语言** **嵌入式语言**

==我的偏好== ：高级语言，以后有能力了一定学汇编语言！！！

2. **尝试解读`hello.c`中每一行的内容**
  ``` c
  #include <stdio.h> /*调用头文件<stdio.h>，因为后文用到了printf函数就来自该头文件*/

int main() {  /* C 语言规定，main()是程序的入口函数，即所有的程序一定要包含一个main()函数。程序总是从这个函数开始执行，如果没有该函数，程序就无法启动。其他函数都是通过它引入程序的, int是main函数的返回值类型*/
    printf("Hello, world!"); /*printf是一个输出函数，会在终端输出括号内的内容*/
    return 0; /*返回值，如果返回值为0，系统会认为程序运行成功*/
}
```
3. .**删去该程序的哪一行不会影响运行结果？**
```c
return 0;
```
正常情况下，如果`main()`里面省略`return 0`这一行，编译器会自动加上，即`main()`的默认返回值为0
4. ** int类型是计算机存储什么元素的方式？为什么main函数要使用int进行声明/定义？**
  整数
  函数声明时，首先需要给出返回值的类型，main函数的返回值类型为int才能传递给操作系统，操作系统通过返回值判断程序是否正确执行，其次用int给main函数定义具有较高的可移植性，c cpp 的标准也规定了必须这样子写。
  5. ** 请调整上述程序的内容，使其输出内容改为`Hello glimmer!`并附上运行截图**

！[github](https://raw.github.com/charlessincere/Glimmer-CS-easy-01/main/237360a789936d24d7cc9f63b45154c.png)

## 基础语法运用

```c
#include <stdio.h>

int main() {

    int code;
    for(;;){
        printf("Show me your code,please.\n");

        scanf("%d",&code);

        if(code >= 0  && code <= 999999){

        printf("I am super hacker!\n");

        break;

        }
        else
        printf("Fake code!");
        }
        return 0;
        }
```