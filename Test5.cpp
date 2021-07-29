/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/5/18.
 *@Description:  C++Programing And Application Test
**/

//Q1:定义一个student（学生）类，该类中的私有成员有学生姓名，年龄和成绩，其中姓名定义成char *，年龄定义成int型，成绩定义成double型；自定义构造函数和析构函数。
#include<iostream>
using namespace std;

class Student
{
public:
    Student(string);

    Student(string name, int age);

    static float total;
    static int count;//定义静态数据成员
    void scoretotalcount(float s);
    static double sum();
    static double average();//定义静态成员函数
    void show_Student();

private:
    string name;
    int age;
    double score;
};

int Student::count = 0;
float Student::total = 0;

Student::Student(string name,int age)
{
    this->name = name;
    this->age=age;
    count++;
}//录入学生姓名

void Student::scoretotalcount(float s)
{
    score = s;
    total += s;
}//录入学生成绩并随录入计算总分

double Student::sum()
{
    return total;
}//返回全班总分

double Student::average()
{
    return total / count;
}//返回全班平均分

void Student::show_Student(){
    cout<<"学生姓名："<<name<<endl;
    cout<<"学生年龄："<<age<<endl;
    cout<<"学生成绩："<<score<<endl;
}

int main()
{
    Student student1("何嘉琛",21);
    student1.scoretotalcount(90.5);
    student1.show_Student();

    Student student2("辛嘉豪",22);
    student2.scoretotalcount(95.0);
    student2.show_Student();


    cout << "全班总分为：" << Student::sum() << endl;
    cout << "全班平均分为：" << Student::average() << endl;

    return 0;
}