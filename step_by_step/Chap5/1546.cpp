#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num,max_score,i;
    float avg=0;

    cin>>num;

    float arr[num];

    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    max_score=arr[0];

    for(i=1;i<num;i++)
    {
        if(max_score<arr[i])
        {
            max_score=arr[i];
        }
    }

    for(i=0;i<num;i++)
    {
      
       arr[i]= (arr[i]/max_score)*100;

       avg+=arr[i];
    }

    cout<<avg/num<<'\n';

}
