/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/4/28.
 *@Description:  C++Programing And Application Test
**/

//Q1����̬����һ����СΪn����������������0~99֮�������������г�ʼ������дһ������Sort( ) ���������䰴��С�����˳�������������Ļ�Ϸֱ��������ǰ�������Ľ����

//#include <iostream>
//using namespace std;
//
//void BubbleSort(int a[],int length)   //�������е�Ԫ�ؽ���ð������
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

//Q2�������ַ������Ӵ����ֵĴ�����Ҫ����һ���Ӻ���substring����ʵ�֣�����Ϊָ���ַ�����Ҫ���ҵ��Ӵ���ָ�룬���ش�����
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
    cout<<"�������ַ���a:";
    gets(a);
    cout<<"�������ַ���b:";
    gets(b);
    cout<<substring(a,b)<<endl;
    return 0;
}


