#include <iostream>

using namespace std;

int one(int n);
int two(int n,int count);

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n,count;

    cin>>n;

    if(n<100)
    count=one(n);
    else
    {
        count=99;
        count=two(n,count);
    }

    cout<<count<<'\n';    

    return 0;

}

int one(int n)
{
    int i=1;
    int count=0;

    for(;i<=n;i++)
    {
        count++;
    }

    return count;
}

int two(int n,int count)
{
     int i=100;
     int temp1,temp2,temp3,temp;

     for(;i<=n;i++)
     {

         temp=i;
         temp1=temp%10;
         temp/=10;
         temp2=temp%10;
           temp/=10;
         temp3=temp%10;

         if(i==1000)
         {
             return count;
         }
         if((temp3-temp2)==(temp2-temp1))
         {
             count++;
         }
         
     }

     return count;
}
