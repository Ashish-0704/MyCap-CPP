#include<iostream>
using namespace std;

class Time
{
    int hh,mm,ss;
    public:
        void setData(int hh, int mm, int ss)
        {
            this->hh = hh;
            this->mm = mm;
            this->ss = ss;
        }
        void getData()
        {
            cout<<"\nTime in HH:MM:SS format is "<<hh<<":"<<mm<<":"<<ss;
        }
        void seconds();
};

void Time::seconds()
{
    int hour = hh*3600;
    int min  = mm*60;
    int sec  = ss;
    int time = hour+min+sec;
    cout<<"\nThe time in seconds is : "<<time<<" seconds";
}

int main()
{
    Time t;
    int hh,mm,ss;
    cout<<"\nEnter hours";
    cin>>hh;
    cout<<"\nEnter minutes";
    cin>>mm;
    cout<<"\nEnter seconds";
    cin>>ss;
    //t.setData(11,25,10);
    t.setData(hh,mm,ss);
    t.getData();
    t.seconds();
    return 0;
}