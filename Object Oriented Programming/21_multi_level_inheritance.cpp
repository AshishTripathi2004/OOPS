#include <bits/stdc++.h>
using namespace std;

class Student
{

protected:
    int roll_number;

public:
    void setRoll(int r)
    {
        roll_number = r;
    }

    void getRoll()
    {
        cout << "The student roll number is : " << roll_number << endl;
    }
};

class Exam : protected Student
{

protected:
    float theory;
    float practical;
    float sports;

public:
    void setMarks(float a, float b, float c)
    {
        theory = a;
        practical = b;
        sports = c;
    }

    void getMarks()
    {
        cout << "Theory score : " << theory << "%" << endl;
        cout << "Practical score : " << practical << "%" << endl;
        cout << "Sports score : " << sports << "%" << endl;
    }
};

class Results : protected Exam
{
protected:
    float cumulative;

public:
    void calculate()
    {
        cumulative = (theory + practical + sports) / 3.0;
    }

    //defining a wrapper function
    //protected members are also not accessible from outside
    //need to be set here
    void setDetails(int a, float b, float c, float d){
        roll_number=a;
        theory=b;
        practical=c;
        sports=d;
    }

    void getScoreCard()
    {
        cout << "The student roll number is : " << roll_number << endl;
        cout << "-------------------------------" << endl;
        cout << "Theory score : " << theory << "%" << endl;
        cout << "Practical score : " << practical << "%" << endl;
        cout << "Sports score : " << sports << "%" << endl;
        cout << "-------------------------------" << endl;
        cout << "Cumulative Percentage : " << cumulative << endl;
    }
};

int main()
{
    Results r;
    r.setDetails(10,98,97,89);
    r.calculate();
    r.getScoreCard();
    return 0;
}