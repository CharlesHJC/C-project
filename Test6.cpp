/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/5/18.
 *@Description:  C++Programing And Application Test
**/

//Q1������һ������Animal����˽�����ͳ�Ա����age��
// �����乫��������dog�������Ա����SetAge��int n����ֱ�Ӹ�age��ֵ����������ʲô���⡣
// ��age�ĳɹ��г�Ա������������������
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
//    void SetAge(int n){age=n;cout<<"��������Ϊ��"<<age;};
//};
//
//int main()
//{
//dog dog1;
//dog1.SetAge(5);
//}

//Q2������һ������BaseClass�������ͳ�Ա����Number��������������DerivedClass���۲칹�캯��������������ִ�������
#include<iostream>

using namespace std;

class BaseClass{
    int Number;
};

class DerivedClass:public BaseClass{

};


//Q3������һ�����г���bicycle�����һ��������motorcar���ࡣ
// ���г���bicycle�����и߶ȣ�Height�������ԣ�������motorcar��������λ����SeatNum�������ԡ�
// ��bicycle��motorcar������Ħ�г���motorcycle���ࡣ

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
