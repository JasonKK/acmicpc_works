#include <iostream>

using namespace std;


int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[10000];

    int temp1,temp2,temp3,temp4,result,temp,temp5;

    for(int i=0;i<10000;i++)
    {
        arr[i]=i+1;
    }

    
    for(int i=1;i<100;i++)
    {
        temp=i;
        temp1=i;
        temp2=temp%10;
        temp3=temp/10;

        result=temp1+temp2+temp3;

        for(int j=0;j<10000;j++)
        {
        if(arr[j]==result)
        {
            arr[j]=0;
        }
        }
    }


    for(int i=100;i<1000;i++)
    {
        temp=i;
        temp1=i;
        temp2=temp%10;
        temp/=10;
        temp3=temp/10;
        temp4=temp%10;

        result=temp1+temp2+temp3+temp4;

        for(int j=0;j<10000;j++)
        {
        if(arr[j]==result)
        {
            arr[j]=0;
        }
        }
    }


    for(int i=1000;i<10000;i++)
    {
        temp=i;
        temp1=i;
        temp2=temp%10;
        temp/=10;
        temp3=temp%10;
         temp/=10;
        temp4=temp%10;
        temp5=temp/10;

        result=temp1+temp2+temp3+temp4+temp5;

        for(int j=0;j<10000;j++)
        {
        if(arr[j]==result)
        {
            arr[j]=0;
        }
        }

    
    }

    for(int i=0;i<10000;i++)
    {
        if(arr[i]!=0)
        cout<<arr[i]<<'\n';
    }

}

