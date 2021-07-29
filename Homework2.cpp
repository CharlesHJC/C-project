/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/4/14.
 *@Description:  
**/

#include <iostream>
using namespace std;

int poor(int x)
{
    float n=0.01;
    float m=0;
    for(int day=0;day<x;++day)
    {
        m+=n;
        n=2*n;
    }
    return m/10000;
}


int rich(int y)
{
    float m=0;
    m=100000*y;
    return m/10000;
}

int main()
{
    int d;
    cout<<"请输入天数：";
    cin>>d;
    cout<<d<<"天后，穷人拥有财产："<<poor(d)<<"万"<<endl;
    cout<<d<<"天后，富人拥有财产："<<rich(d)<<"万"<<endl;
    return 0;
}