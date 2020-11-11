#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int i,n,max,min;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    max=arr[0];
    min=arr[0];

    for(i=1;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
        if(min>arr[i])
        min=arr[i];
    }

    cout<<min<<" "<<max<<'\n';

    return 0;
}
