#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num,i,j,k;


    cin>>num;

    for(i=num;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(k= j;k<=num;k++)
        {
            cout<<"*";
        }
        cout<<'\n';
    }
}
