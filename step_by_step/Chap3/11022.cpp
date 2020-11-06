#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num,a,b;


    cin>>num;

    int add[num];
    int a_array[num];
    int b_array[num];
    
    for(int i=0;i<num;i++)
    {
      cin>>a;
      cin>>b;

      a_array[i]=a;
      b_array[i]=b;
      add[i]=a+b;
    }

    for(int i=0;i<num;i++)
    {
        cout<<"Case #"<<i+1<<": "<<a_array[i]<<" + "<<b_array[i]<<" = "<<add[i]<<'\n';
    }

    return 0;
}
