#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int i;
    
    int arr[9];
    int temp,temp_num;

    for(i=0;i<9;i++)
    {
        cin>>arr[i];
    }

   temp=arr[0];
   temp_num=1;

    for(i=1;i<9;i++)
    {
        if(temp<arr[i])
        {
        temp=arr[i];
        temp_num=i+1;
        }
    }

    
    cout<<temp<<'\n';
    cout<<temp_num<<'\n';

    return 0;
}
