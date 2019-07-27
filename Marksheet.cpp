#include <iostream>
#include<conio.h>

using namespace std;

class get
{
private:
    string name, address;
    int mPhy, mChe, mMat, sum, avg, rollNo;
    long long int contact;

public:
    void getdata()
    {
        cout<<"Enter name of the student : ";
        cin>>name;
        cout<<endl<<"Enter roll number of the student : ";
        cin>>rollNo;
        cout<<endl<<"Enter address of the student : ";
        cin>>address;
        cout<<endl<<"Enter contact number of the student : ";
        cin>>contact;
    }

    void getmarks()
    {
        cout<<endl<<"Enter marks in Physics : ";
        cin>>mPhy;
        cout<<endl<<"Enter marks in Chemistry : ";
        cin>>mChe;
        cout<<endl<<"Enter marks in Mathematics : ";
        cin>>mMat;

        sum=mPhy + mChe + mMat;
        avg=sum/3;
    }

    void cal_grade()
    {
        if (avg>=90)
        {
            cout<<endl<<"Grade is : A"<<endl;
        }
        else if (avg>=80&&avg<90)
        {
            cout<<endl<<"Grade is : B"<<endl;
        }
        else if (avg>=70&&avg<80)
        {
            cout<<endl<<"Grade is : C"<<endl;
        }
        else if (avg>=60&&avg<70)
        {
            cout<<endl<<"Grade is : D"<<endl;
        }
        else if (avg>=50&&avg<60)
        {
            cout<<endl<<"Grade is : E"<<endl;
        }
        else if (avg<50)
        {
            cout<<endl<<"You are fail."<<endl;
        }
        else
        {
            cout<<endl<<"Invalid Input."<<endl;
        }
    }

    void cal_percent()
    {
        cout<<"Percentage is : "<<avg<<"%."<<endl;
    }

    void marklist()
    {
        cout<<endl<<"******************************"<<endl<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No : "<<rollNo<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Contact No : "<<contact;
    }
};
int main()
{
    get student1;
    student1.getdata();
    student1.getmarks();
    student1.marklist();
    student1.cal_grade();
    student1.cal_percent();

    return 0;
}
