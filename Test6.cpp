/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/5/18.
 *@Description:  C++Programing And Application Test
**/

//Q1：定义一个基类Animal，有私有整型成员变量age。
// 构造其公有派生类dog，在其成员函数SetAge（int n）中直接给age赋值，看看会有什么问题。
// 把age改成公有成员变量，还会有问题吗？
//#include<iostream>
//
//using namespace std;
//
//class base_Animal{
//public:
//    int age;
//};
//
//class dog:public base_Animal{
//private:
//    int n;
//public:
//    void SetAge(int n){age=n;cout<<"狗的年龄为："<<age;};
//};
//
//int main()
//{
//dog dog1;
//dog1.SetAge(5);
//}

//Q2：定义一个基类BaseClass，有整型成员变量Number，构造其派生类DerivedClass，观察构造函数和析构函数的执行情况；
#include<iostream>

using namespace std;

class BaseClass{
    int Number;
};

class DerivedClass:public BaseClass{

};


//Q3：定义一个自行车（bicycle）类和一个汽车（motorcar）类。
// 自行车（bicycle）类有高度（Height）等属性，汽车（motorcar）类有座位数（SeatNum）等属性。
// 从bicycle和motorcar派生出摩托车（motorcycle）类。

//#include<iostream>
//
//using namespace std;
//
//class bicycle{
//public:
//    int Height;
//};
//
//class motoracar{
//public:
//    int SeatNum;
//};
//
//class motorcucle:public bicycle,public motoracar{
//
//};
