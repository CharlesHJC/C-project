/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/6/2.
 *@Description:  C++Programing And Application Test
**/

//һ���ֱ��д�ĸ�ͬ������max��ʵ�ֺ������أ����Էֱ���ȡ������������������������˫������������˫�����������ֵ����main�����в��Ժ������ܡ�

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
    cout<<"����������������";
    cin>>x1>>x2;
    cout<<"�����������е����ֵ�ǣ�"<<max(x1,x2)<<endl;

    int x3,x4,x5;
    cout<<"����������������";
    cin>>x3>>x4>>x5;
    cout<<"�����������е����ֵ�ǣ�"<<max(x3,x4,x5)<<endl;

    double y1,y2;
    cout<<"����������˫��������";
    cin>>y1>>y2;
    cout<<"������˫�������е����ֵ�ǣ�"<<max(y1,y2)<<endl;

    double y3,y4,y5;
    cout<<"����������˫��������";
    cin>>y3>>y4>>y5;
    cout<<"������˫�������е����ֵ�ǣ�"<<max(y3,y4,y5)<<endl;

    return 0;
}

//������д������point���㣩�࣬�����ж������͵�˽�г�Ա����x��y�������Ա����point operator++();point operator++( int ); ��ʵ�ֶ�point�����ء�++���������������<br>
//������Ա����point operator--��point &����point operator--��point &, int������ʵ�ֶԡ�--�����Լ�����������أ�ʵ�ֶ�����ֵ�ĸı䡣

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
    cout<<"O����ʼ����Ϊ��"<<endl;p.display();
    ++p;
    cout<<"��������������O�����꣺"<<endl;p.display();
    p++;
    cout<<"���������������O�����꣺"<<endl;p.display();
    --p;
    cout<<"���������Լ���O�����꣺"<<endl;p.display();
    p;
    cout<<"�����Լ��������O�����꣺"<<endl;p.display();
}

//�������player�������ж����麯��virtual void playPC()��
//�ֱ���������girl��boy�������������зֱ���void playPC()����������ָ��player���͵�ָ��*p����girl��boy�Ķ����ַ�ֱ𸳸�p�����ֱ����p->playPC()��

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
    player * p = new girl();    //�½�һ����������� ������ָ��ָ������
    p->playPC();                //������girl()����
    delete p;
    p = new boy();              //ͬ������
    p->playPC();
}
