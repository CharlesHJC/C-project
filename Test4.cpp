/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/5/11.
 *@Description:  C++Programing And Application Test
**/

//Q1:����һ��point���㣩�࣬���г�Ա�������ٰ���set_point��move_point�������˽�����ݳ�Ա�е��λ�ú���ɫ���������ж���Ĺ��к�����������λ�ú���ɫ��������й��г�Ա��˽�г�Ա������
#include<iostream>

using namespace std;

class point {
public:
    void set_point();

    void move_point();

    void show_point();

private:
    string color;
    int x, y;
    int change_x, change_y;
};

void point::set_point() {
    cout << "�������ĺ����꣺";
    cin >> x;
    cout << "�������������꣺";
    cin >> y;
    cout << "����������ɫ��";
    cin >> color;
}

void point::move_point() {
    cout << "����ĺ������ƶ�������λ��(�Ҽ����)";
    cin >> change_x;
    cout << "������������ƶ�������λ��(�ϼ��¼�)";
    cin >> change_y;
}

void point::show_point() {
    cout << "�ƶ��������Ϊ��" << x + change_x << "," << y + change_y << endl;
    cout << "�����ɫΪ��" << color;
}

int main() {
    point P;
    P.set_point();
    P.move_point();
    P.show_point();
}


//Q2:����һ��student��ѧ�����࣬�����е�˽�г�Ա��ѧ����������ͳɼ����������������char *�����䶨���int�ͣ��ɼ������double�ͣ��Զ��幹�캯���������������۲칹�캯�������������ĵ��ô���ʹ�����
#include<iostream>
#include<cstring>

using namespace std;

class student {
public:
    student(string nam, int a, double S) {
        age = a;
        name = nam;
        Score = S;
        cout << "Constructor called." << endl;
    }

    ~student() {
        cout << "Constructor called." << endl;
    }

    void display() {
        cout << "ѧ��������" << name << endl;
        cout << "ѧ�����䣺" << age << endl;
        cout << "ѧ���ɼ���" << Score << endl;
    }

private:
    int age;
    double Score;
    basic_string<char> name;
};

int main() {
    student stud1("HJC", 22, 90.00);
    stud1.display();
    return 0;
}

//Q3:����һ������Ϊstudent����СΪ4�Ķ������飬����һ��ָ��student���ָ�룬������ָ����������һ��Ԫ�أ���������һ��Ԫ�ص�������Ϣ��
#include <iostream>
#include <string>
using namespace std;

class student {
public:
    void set(string n, int a, double s) {
        name = n;
        age = a;
        score = s;
    }

    void move() {
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "score:" << score << endl;
    }

private:
    string name;
    int age;
    double score;
};


int main() {
    student p1[4];
    student *p;
    p1[0].set("�콭", 22, 95);
    p1[1].set("���κ�", 22, 87);
    p1[2].set("Ҧ�׸�", 21, 90);
    p1[3].set("�μ��", 21, 90);
    p = &p1[3];
    p->move();
}


//Q4:����һ��������Date�����������һ�����ڣ����ṩ�Ĳ����У�
//void:
//printDate();    //��ʾ���ڣ���ʽ�硰�����ǣ�201��3��8�ա�
//void GetYear();     //ȡ���ֵ
//void GetMonth();   //ȡ�µ�ֵ
//void GetDay();     //ȡ�յ�ֵ
//void SetDate(int Y, int m, int d);  //��������ֵ
//����������ڶ��������¶��壺
//Date dl(2010, 6, 8);    //���������ڶ���һ�����ڱ���
//Date d2;            //����һ�����ڶ���
//Date d3(dl);         //�����е����ڹ���һ���¶���
//Ҫ��ÿ����Ա������Ҫ������

#include <iostream>
using namespace std;

class Date {
public:
    void printDate() {
        cout << year << "��" << month << "��" << day << "��" << endl;
    }

    void GetYear() {
        cout << "�����ǣ�" << year << "��" << endl;
    }

    void GetMonth() {
        cout << "�����ǣ�" << month << "��" << endl;
    }

    void GetDay() {
        cout << "�����ǣ�" << day << "��" << endl;
    }

    void SetDate(int Y, int m, int d) {
        year = Y;
        month = m;
        day = d;
    }

private:
    int year;
    int month;
    int day;
};

int main() {
    Date d1;
    d1.SetDate(2021, 5, 6);
    Date d2;
    Date d3(d1);

    d1.printDate();

    d1.GetYear();
    d1.GetMonth();
    d1.GetDay();
}