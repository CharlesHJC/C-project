/**
 *@Author:       CharlesHE
 *@Created:in:   2021/4/9.
 *@Description:  C++Programing And Application Test
**/

//Q1:用断点跟踪方法单步执行课堂中两数相加的例子，并查看每句程序执行后x、y以及sum 值的变化情况。

#include <iostream>
using namespace std;

int sum(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}

int main(int argc, char** argv)
{
    int x,y,s;
    cout<<"请输入两个加数，用空格分隔：";
    cin>>x>>y;
    s=sum(x,y);
    cout<<"将"<<x<<"加到"<<y<<"的和为："<<s<<endl;
}
//input 2 5
//output 将2加到5的和为7


//Q2:用欧几里德算法，求两自然数m , n的最大公约数。

#include <iostream>
using namespace std;

int gcd(int m,int n)
{
    int r;
    while (r!=0)
    {
        r=m%n;
        m=n;
        n=r;
    }
    return m;
}
int main(int argc, char** argv)
{
    int a,b;
    cout<<"请输入被除数a和除数b:";
    cin>>a>>b;
    cout<<"最大公约数是："<<gcd(a,b)<<endl;
    return 0;
}
//input 13 5
//output 1

//input 20 5
//output 5


//Q3:输入x和n，计算S
#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char** argv)
{
    int n=1,x=1;
    float S=0.0,term=1.0;
    cout<<"please input x:";
    cin>>x;
    while(fabs(term)>=1e-6)
    {
        S+=term;
        term=(-1)*term*x*x/((2*n)*(2*n-1));
        n++;
    }
    cout<<"S="<<S
    <<" n="<<n-1<<endl;
}
//input 4
//output S=-0.653644 n=10


//Q4:以下公式是求π的近似值，直到最后一项的值小于10的6次方为止。
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv)
{
    int i=1;
    double pi=0;
    while(i*i<=10e+8)
    {
        pi=pi+1.0/(i*i);
        i++;
    }
    pi=sqrt(6.0*pi);
    cout<<"π="<<pi<<endl;
    return 0;
}
//output π=3.14156