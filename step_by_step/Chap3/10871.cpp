#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n,x;

    cin>>n;
    cin>>x;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]<x)
        cout<<arr[i]<<' ';
    
    }
    return 0;
}
