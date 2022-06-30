
#include <iostream>
#include <ctime>
using namespace std;



int main()
{
    time_t timeDisplay;
    struct tm * localTime;
    time (&timeDisplay);
    localTime = localtime(&timeDisplay);
    cout << "Current Day, Date, Time is: " << asctime(localTime);
    return 0;
}
