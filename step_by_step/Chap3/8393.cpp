#include <iostream>

using namespace std;

int main(void)
{
    int num,total =0;

    cin>>num;
    
    for(int i=0;i<=num;i++)
    {
        total+=i;
    }

    cout<<total<<endl;

    return 0;
}
