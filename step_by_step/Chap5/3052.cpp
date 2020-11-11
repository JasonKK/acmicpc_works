#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

  int arr[10];
  int div[42] ={0};
  int count=0;
  int i,temp;

  for(i=0;i<10;i++)
  {
      cin>>arr[i];
  }

  for(i=0;i<10;i++)
  {
      temp=arr[i]%42;
      div[temp]++;
  }

  for(i=0;i<42;i++)
  {
      if(div[i]!=0)
      count++;
  }

  cout<<count<<'\n';



}
