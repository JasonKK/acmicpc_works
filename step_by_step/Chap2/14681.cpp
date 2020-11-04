#define QUAD1 1
#define QUAD2 2
#define QUAD3 3
#define QUAD4 4

#include <iostream>


using namespace std;

void calculate_quad(int x,int y);

int main(void)
{
    int x,y;

    cin>>x;
    cin>>y;

    calculate_quad(x,y);

    return 0;
}

void calculate_quad(int x,int y)
{
    if(x>0&&y>0)
    cout<<QUAD1<<endl;
    else if(x<0&&y>0)
    cout<<QUAD2<<endl;
    else if(x<0&&y<0)
    cout<<QUAD3<<endl;
    else
    cout<<QUAD4<<endl;
    
}
