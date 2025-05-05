//! display the current date and time.
#include<iostream>
#include<ctime>    //?Including ctime built-in library in program to calculate current time
using namespace std;
int main()
{//?Dataype       Variable          //Pointerfunction                                   time() uses pointers to access yours system current time 
    time_t        CurrentTime =   time(NULL);           //?time_t is datatype to access time currentTime is variable ------------- time(NULL) NULL is pointer pointing to nothing
    cout<<ctime (&CurrentTime)<<endl;
    cout<<"\n\nSeconds in minute: "<<time;
    cout<<"\nCurrent Date: "<<__DATE__;
    cout<<"\nCurrent Time: "<<__TIME__;
    return 0;
}