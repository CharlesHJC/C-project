/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/4/21.
 *@Description:  C++Programing And Application Test
**/

//Q1:������1~n�и�������ƽ����Ҫ�����C++��I/O����n���룬��������������ƽ����������Ļ����ʾ��������

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
    cout<<"������һ������:";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"�������"<<i<<"�������ƽ����"<<sqr(i)<<endl;
    }
    return 0;
}

/*Q2:����һ���������ú�����������������һ������Ϊ����Ϊint���ڶ�����������Ϊchar����������������Ϊfloat,
 * ��ʹ����ڶ����͵�����������Ĭ��ֵ�ֱ�ΪH����3.4���ú����Ĺ���������Ļ���������ֵ��*/

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


/*Q3:��д����ͬ��������int MySquare(int i);float MySquare(float f); float MySquare(int i, int j)��
 * ����ǰ�����������ֱܷ���������i��ƽ���͸�������f��ƽ��������Ļ�������������������������i��j��ƽ���Ͳ�����Ļ���������д���������ֱ����������������
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
    cout<<"������һ������i�͸�����f��";
    cin>>i>>f;
    cout<<"����i��ƽ��Ϊ��"<<MySquare(i)<<endl;
    cout<<"������j��ƽ��Ϊ��"<<MySquare(f)<<endl;
    cout<<"��������ƽ����Ϊ��"<<MySquare(i,f)<<endl;
    return 0;
}