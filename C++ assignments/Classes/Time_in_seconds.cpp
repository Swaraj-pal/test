#include <iostream>
using namespace std;
class time{
    public:
    int hours,minutes,seconds;
    void secondssum()
    {
        int sum; 
        sum=seconds+(minutes*60)+(hours*3600);
        cout << sum << " " << endl;
    }   
};
int main() 
{
time t1;
cout << "Enter HH, MM, SS" << endl;
cin >> t1.hours >> t1.minutes >> t1.seconds;
t1.secondssum();
return 0;
}