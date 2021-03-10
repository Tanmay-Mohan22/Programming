#include <iostream>
#include <iomanip>
 
using namespace std;
 
class Time
{
    private:
        int seconds;
        int HH,MM,SS;
    public:
        void getTime(void);
        void convertIntoSeconds(void);
        void displayTime(void);
};
 
void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          cin >> HH;
    cout << "Minutes? ";          cin >> MM;
    cout << "Seconds? ";          cin >> SS;
}
 
void Time::convertIntoSeconds(void)
{
    seconds = HH*3600 + MM*60 + SS;
}
 
void Time::displayTime(void)
{
    cout << "The time is = " << HH << ":"
                             << MM << ":"
                             << SS << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time T; 
     
    T.getTime();
    T.convertIntoSeconds();
    T.displayTime();
     
    return 0;
}
