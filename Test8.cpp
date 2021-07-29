/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/6/2.
 *@Description:  C++Programing And Application Test
**/

//一、分别编写四个同名函数max，实现函数重载，可以分别求取两个整数，三个整数，两个双精度数，三个双精度数的最大值，在main函数中测试函数功能。

#include <iostream>

using namespace std;

int max(int a,int b)
{
    return a>b?a:b;
}

int max(int a,int b,int c)
{
    int max=a>b?a:b;
    return max>c?max:c;
}

double max(double a,double b)
{
    return a>b?a:b;
}

double max(double a,double b,double c)
{
    double max=a>b?a:b;
    return max>c?max:c;
}

int main()
{
    int x1,x2;
    cout<<"请输入两个整数：";
    cin>>x1>>x2;
    cout<<"这两个整数中的最大值是："<<max(x1,x2)<<endl;

    int x3,x4,x5;
    cout<<"请输入三个整数：";
    cin>>x3>>x4>>x5;
    cout<<"这三个整数中的最大值是："<<max(x3,x4,x5)<<endl;

    double y1,y2;
    cout<<"请输入两个双精度数：";
    cin>>y1>>y2;
    cout<<"这两个双精度数中的最大值是："<<max(y1,y2)<<endl;

    double y3,y4,y5;
    cout<<"请输入三个双精度数：";
    cin>>y3>>y4>>y5;
    cout<<"这三个双精度数中的最大值是："<<max(y3,y4,y5)<<endl;

    return 0;
}

//二、编写程序定义point（点）类，在类中定义整型的私有成员变量x，y，定义成员函数point operator++();point operator++( int ); 以实现对point类重载“++”（自增）运算符<br>
//定义友员函数point operator--（point &）；point operator--（point &, int）；以实现对“--”（自减）运算符重载，实现对坐标值的改变。

#include <iostream>

using namespace std;

class point{
private:
    int _x;int _y;
public:
    point(int x,int y){_x=x;_y=y;}
    point&operator++(){_x++;_y++;return *this;};
    point operator++(int){_x++;_y++;++(*this);return *this;};
    point&operator--(){_x--;_y--;return *this;};
    point operator--(int){_x--;_y--;--(*this);return *this;};
    void display(){cout<<"("<<_x<<","<<_y<<")"<<endl;}
};

int main()
{
    point p(0,0);
    cout<<"O的起始坐标为："<<endl;p.display();
    ++p;
    cout<<"横纵坐标自增后O点坐标："<<endl;p.display();
    p++;
    cout<<"重载自增运算符后O点坐标："<<endl;p.display();
    --p;
    cout<<"横纵坐标自减后O点坐标："<<endl;p.display();
    p;
    cout<<"重载自减运算符后O点坐标："<<endl;p.display();
}

//定义基类player，在其中定义虚函数virtual void playPC()；
//分别定义派生类girl和boy。在这两个类中分别定义void playPC()函数，定义指向player类型的指针*p，将girl和boy的对象地址分别赋给p，并分别调用p->playPC()。

#include<iostream>
using namespace std;

class player{
public:
    virtual void playPC();
};

class girl : public player{
    void playPC()
    {
        cout << "girl playPC()" << endl;
    }
};

class boy : public player
{
    void playPC()
    {
        cout << "boy playPC()" << endl;
    }
};

int main(void)
{
    player * p = new girl();    //新建一个派生类对象 将父类指针指向子类
    p->playPC();                //调用了girl()方法
    delete p;
    p = new boy();              //同理如上
    p->playPC();
}
