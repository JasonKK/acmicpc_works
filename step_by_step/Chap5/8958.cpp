#define MAX_NUM 80

#include <iostream>
#include <cstring>


using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int sequel=1;
    int num;
    int j=0;
    char arr2[MAX_NUM];
    int count=0;
    cin>>num;

    int arr[num];

    for(int i=0;i<num;i++)
    {
        cin>>arr2;

        while(j<strlen(arr2))
        {
            if(arr2[j]=='O')
            {
            count+=sequel;

            sequel++;
            }
            else 
            {
            sequel=1;
            }
            j++;
        }

        arr[i]=count;
        count=0;
        sequel=1;
        j=0;
    }

    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<'\n';
    }

}
