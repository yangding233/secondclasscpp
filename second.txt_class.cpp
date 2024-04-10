
/////////////////////////////////////比大小/////////////////////////////////////

// #include<iostream>
// using namespace std;
// int max(int a,int b)
// {
//     return a > b ? a : b ;//正确则取前值，错误则取后值
// }
// int main()
// {
//     int a = 10;
//     int b = 20;
//     cout << max(a,b) << endl;

//     system("pause");
//     return 0;
// }

/////////////////////////////////函数的分文字编写////////////////////////////////

// 1.创建.h后缀名的头文件
// 2.创建.cpp后缀名的源文件
// 3.在头文件中写函数的声明
// 4.在源文件中写函数的定义
#include<iostream>
using namespace std;
#include "swap.h"//这样就可以用.h函数了
//函数的分文件编写
//实现两个数字进行交换的函数

int main()
{
    int a = 1;
    int b = 2;
    swap(a,b);
    
    
    system("pause");
    return 0;

}