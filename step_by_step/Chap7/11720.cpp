#include <iostream>

using namespace std;

int main(void)
{
   int num,sum;

   cin>>num;
   
   char arr[num];

   cin>>arr;
   for(int i=0;i<num;i++)
   {
       sum += arr[i] - '0';
   }

   cout<<sum<<endl;

   return 0;
}
