#include <iostream>

using namespace std;

int main(void)
{
    int num,a,b;
    
    cin>>num;

    int arr[num];

    for(int i=0;i<num;i++)
    {
        cin>>a;
        cin>>b;
        arr[i]=a+b;
    }

    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
