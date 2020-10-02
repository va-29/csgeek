#include<iomanip>
#include<iostream>
using namespace std;
class Time
{
        public:
        int hours,minutes,seconds;
        Time()  
        {  
                hours=0;  
                minutes=0;  
                seconds=0;  
        }  
        void setHours(int hour)
        {
                this->hours=hour;
        }
        void setMinutes(int minute)
        {
                this->minutes=minute;
        }
        void setSeconds(int second)
        {
                this->seconds=second;
        }
        int getHours()
        {
                return this->hours;
        }
        int getMinutes()
        {
                return this->minutes;
        }
        int getSeconds()
        {
                return this->seconds;
        }
        void display()
        {
            cout<<"The sum of given time is:"<<endl;
            cout<<setw(2)<<setfill('0')<<hours;
            cout<<":";
            cout<<setw(2)<<setfill('0')<<minutes;
            cout<<":";
            cout<<setw(2)<<setfill('0')<<seconds;   
            }
};

int main()
{
       Time t,t1,t2;
        int hr,min,sec;
        cout<<"Enter the first time:\n";
        cin>>hr;
        cin>>min;
        cin>>sec;
        t1.setHours(hr);
        t1.setMinutes(min);
        t1.setSeconds(sec);
        cout<<"Enter the second time:\n";
        cin>>hr;
        cin>>min;
        cin>>sec;
        t2.setHours(hr);
        t2.setMinutes(min);
        t2.setSeconds(sec);
        t=t1+t2;
        t.display();
return 0;
}


