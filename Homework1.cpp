/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/4/5.
 *@Description:  C++Programing And Application Homework
**/


#include <iostream>
using namespace std;
#define N 100

int sum(int x)
{
    int sum=0;
    for(int x=1;x<=N;x++)
    {
        sum=sum+x;
    }
    return sum;
}

int main()
{
    int i=0;
    cout<<"��1�ӵ�100��ͽ��Ϊ��"<<sum(i);
    return 0;
}