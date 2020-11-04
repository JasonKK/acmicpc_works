#define LEAP 1
#define NON_LEAP 0

#include <iostream>


using namespace std;

void calculate_leap(int year);

int main(void)
{
   int year;

   cin>>year;

   calculate_leap(year);

   return 0;
}

void calculate_leap(int year)
{
    if(year%4==0)
    {
        if(year%100!=0||year%400==0)
        {
            cout<<LEAP<<endl;
        }
        else
        {
            cout<<NON_LEAP<<endl;
        }
        
    }
    else
    {
         cout<<NON_LEAP<<endl;
    }
    
}
