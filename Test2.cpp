/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/4/21.
 *@Description:  C++Programing And Application Test
**/

//Q1:求整数1~n中各个数的平方，要求采用C++的I/O流将n读入，用内联函数计算平方，并在屏幕上显示计算结果。

#include<iostream>
#include<cmath>
using namespace std;

inline int sqr(int n)
{
    return pow(n,2);
}

int main()
{
    int i,n;
    cout<<"请输入一个整数:";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"这个数是"<<i<<"这个数的平方是"<<sqr(i)<<endl;
    }
    return 0;
}

/*Q2:声明一个函数，该函数有三个参数，第一个参数为类型为int，第二个参数类型为char，第三个参数类型为float,
 * 并使得其第二个和第三个参数的默认值分别为H，和3.4，该函数的功能是在屏幕上输出参数值。*/

#include<iostream>
using namespace std;

void fun(int a,char b='H',float f=3.4)
{
    cout<<a<<"\t"<<b<<"\t"<<f<<endl;
}

int main()
{
    fun(1);
    return 0;
}


/*Q3:编写三个同名函数：int MySquare(int i);float MySquare(float f); float MySquare(int i, int j)。
 * 其中前两个函数功能分别是求整数i的平方和浮点型数f的平方并在屏幕上输出，第三个函数是求整数i和j的平方和并在屏幕上输出。编写主函数，分别调用这三个函数。
*/
#include <iostream>
#include <cmath>

using namespace std;

int MySquare(int i)
{
    int num;
    num=pow(i,2);
    return num;
}

float MySquare(float f)
{
    float num;
    num=pow(f,2);
    return num;
}

float MySquare(int i, int j)
{
    int num;
    num=pow(i,2)+pow(j,2);
    return num;
}

int main()
{
    int i;
    float f;
    cout<<"请输入一个整数i和浮点数f：";
    cin>>i>>f;
    cout<<"整数i的平方为："<<MySquare(i)<<endl;
    cout<<"浮点数j的平方为："<<MySquare(f)<<endl;
    cout<<"两个数的平方和为："<<MySquare(i,f)<<endl;
    return 0;
}