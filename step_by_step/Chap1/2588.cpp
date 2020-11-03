#include <iostream>

using namespace std;

int main(void)
{
    int a,b,one,ten,hun;

    cin>>a;
    cin>>b;

    one= b%10;
    one*=a;
    cout<<one<<endl;
    b/=10;
    ten = b%10;
    ten*=a;
    cout<<ten<<endl;
    ten*=10;
    b/=10;
    hun=b%10;
    hun*=a;
    cout<<hun<<endl;
    hun*=100;
    cout<<one+ten+hun<<endl;


    return 0;


}

