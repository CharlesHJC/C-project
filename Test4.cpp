/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/5/11.
 *@Description:  C++Programing And Application Test
**/

//Q1:定义一个point（点）类，公有成员函数至少包括set_point、move_point；该类的私有数据成员有点的位置和颜色，调用所有定义的公有函数，输出点的位置和颜色。体会类中公有成员和私有成员的区别。
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
    cout << "请输入点的横坐标：";
    cin >> x;
    cout << "请输入点的纵坐标：";
    cin >> y;
    cout << "请输入点的颜色：";
    cin >> color;
}

void point::move_point() {
    cout << "将点的横坐标移动几个单位？(右加左减)";
    cin >> change_x;
    cout << "将点的纵坐标移动几个单位？(上加下减)";
    cin >> change_y;
}

void point::show_point() {
    cout << "移动后的坐标为：" << x + change_x << "," << y + change_y << endl;
    cout << "点的颜色为：" << color;
}

int main() {
    point P;
    P.set_point();
    P.move_point();
    P.show_point();
}


//Q2:定义一个student（学生）类，该类中的私有成员有学姓名，年龄和成绩，其中姓名定义成char *，年龄定义成int型，成绩定义成double型；自定义构造函数和析构函数。观察构造函数和析构函数的调用次序和次数。
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
        cout << "学生姓名：" << name << endl;
        cout << "学生年龄：" << age << endl;
        cout << "学生成绩：" << Score << endl;
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

//Q3:定义一个类型为student，大小为4的对象数组，定义一个指向student类的指针，并将其指向数组的最后一个元素，并输出最后一个元素的所有信息。
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
    p1[0].set("徐江", 22, 95);
    p1[1].set("辛嘉豪", 22, 87);
    p1[2].set("姚易甫", 21, 90);
    p1[3].set("何嘉琛", 21, 90);
    p = &p1[3];
    p->move();
}


//Q4:定义一个日期类Date，该类对象存放一个日期，可提供的操作有：
//void:
//printDate();    //显示日期，格式如“日期是：201年3月8日”
//void GetYear();     //取年的值
//void GetMonth();   //取月的值
//void GetDay();     //取日的值
//void SetDate(int Y, int m, int d);  //设置日期值
//还允许对日期对象作以下定义：
//Date dl(2010, 6, 8);    //用所给日期定义一个日期变量
//Date d2;            //定义一个日期对象
//Date d3(dl);         //用已有的日期构造一个新对象
//要求每个成员函数都要被调用

#include <iostream>
using namespace std;

class Date {
public:
    void printDate() {
        cout << year << "年" << month << "月" << day << "日" << endl;
    }

    void GetYear() {
        cout << "现在是：" << year << "年" << endl;
    }

    void GetMonth() {
        cout << "现在是：" << month << "月" << endl;
    }

    void GetDay() {
        cout << "现在是：" << day << "号" << endl;
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