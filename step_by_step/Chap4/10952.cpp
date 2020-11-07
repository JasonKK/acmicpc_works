#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a,b;
    int arr[100];
    int i=1;

    cin>>a;
    cin>>b;

    arr[0]= a+b;

    while(a!=0 &&b!=0)
    {
        cin>>a;
        cin>>b;

        arr[i]=a+b;

        i++;
    }
    
    for(int t=0;t<i-1;t++)
    {
        cout<<arr[t]<<'\n';
    }

    return 0;
}
