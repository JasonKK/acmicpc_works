#include <iostream>

using namespace std;

void set_clock(int h, int m);

int main(void)
{
    int h,m;

    cin>>h;
    cin>>m;

    set_clock(h,m);

    return 0;
}

void set_clock(int h, int m)
{
    if(m-45<0)
    {
           m+=15;
        if(h==0)
            h=23;
        else
            h-=1;
    }
    else
    {
        m-=45;
    }
    
    cout<<h<<" "<<m<<endl;
}
