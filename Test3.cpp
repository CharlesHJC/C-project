/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/4/28.
 *@Description:  C++Programing And Application Test
**/

//Q1：动态分配一个大小为n的整数缓存区，用0~99之间的随机整数进行初始化，编写一个排序Sort( ) 函数，对其按从小到大的顺序进行排序，在屏幕上分别输出排序前和排序后的结果。

//#include <iostream>
//using namespace std;
//
//void BubbleSort(int a[],int length)   //对数组中的元素进行冒泡排序
//{
//    int i,temp;
//    for(int x=1;x<n;x++)
//    {
//        for(i=0;i<10-x;i++)
//            if(a[i]>a[i+1])
//            {
//                temp = a[i];
//                a[i] = a[i + 1];
//                a[i + 1] = temp;
//            }
//        cout<<a[i]<<endl;
//    }
//}
//
//int main()
//{
//    int i,A;
//    int *x=new int[A];
//    for(i=0;i<A;i++)
//    {
//        x[i]=rand()%100;
//        cout<<x[i]<<" ";
//    }
//    cout<<endl;
//    cout<<BubbleSort(x[i]);
//    delete[] x;
//}

//Q2：计算字符串中子串出现的次数。要求：用一个子函数substring（）实现，参数为指向字符串和要查找的子串的指针，返回次数。
#include<iostream>
using namespace std;
int substring(char *a, char *b)
{
    int i=0;
    int j=0;
    int m=0;
    char *p=b;
    while (*a)
    {
        if(*a==*b)
        {
            break;
        }
        a++;
    }
    while (*b)
    {
        if(*a!=*b)
        {
            return m;
        } else
        {
            m=m;
        }
        b++;a++;
    }
    a++;
    b=p;
    ++m;
    return m;
}
int main()
{
    char a [100];
    char b [100];
    cout<<"请输入字符串a:";
    gets(a);
    cout<<"请输入字符串b:";
    gets(b);
    cout<<substring(a,b)<<endl;
    return 0;
}


