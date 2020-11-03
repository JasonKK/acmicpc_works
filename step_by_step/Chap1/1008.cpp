#include <iostream>

using namespace std;

int main(void)
{
    double a,b,total;

    cin>>a;
    cin>>b;

    cout.precision(10);// 소수 9번째 자리까지 출력시키는 법
    total= a/b;

    cout<<total<<endl;
    
    return 0;
}

