/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/5/18.
 *@Description:  C++Programing And Application Test
**/

//Q1:����һ��student��ѧ�����࣬�����е�˽�г�Ա��ѧ������������ͳɼ����������������char *�����䶨���int�ͣ��ɼ������double�ͣ��Զ��幹�캯��������������
#include<iostream>
using namespace std;

class Student
{
public:
    Student(string);

    Student(string name, int age);

    static float total;
    static int count;//���徲̬���ݳ�Ա
    void scoretotalcount(float s);
    static double sum();
    static double average();//���徲̬��Ա����
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
}//¼��ѧ������

void Student::scoretotalcount(float s)
{
    score = s;
    total += s;
}//¼��ѧ���ɼ�����¼������ܷ�

double Student::sum()
{
    return total;
}//����ȫ���ܷ�

double Student::average()
{
    return total / count;
}//����ȫ��ƽ����

void Student::show_Student(){
    cout<<"ѧ��������"<<name<<endl;
    cout<<"ѧ�����䣺"<<age<<endl;
    cout<<"ѧ���ɼ���"<<score<<endl;
}

int main()
{
    Student student1("�μ��",21);
    student1.scoretotalcount(90.5);
    student1.show_Student();

    Student student2("���κ�",22);
    student2.scoretotalcount(95.0);
    student2.show_Student();


    cout << "ȫ���ܷ�Ϊ��" << Student::sum() << endl;
    cout << "ȫ��ƽ����Ϊ��" << Student::average() << endl;

    return 0;
}