#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

   int num1,num2,num3,total,temp;
   int arr[10]={0};

   cin>>num1>>num2>>num3;

   total= num1*num2*num3;


  do
   {
       temp=total%10;

       switch(temp)
       {
           case 0:
           {
               arr[0]++;
               break;
           }
           case 1:
           {
               arr[1]++;
               break;
           }
           case 2:
           {
               arr[2]++;
               break;
           }
           case 3:
           {
               arr[3]++;
               break;
           }
           case 4:
           {
               arr[4]++;
               break;
           }
           case 5:
           {
               arr[5]++;
               break;
           }
           case 6:
           {
               arr[6]++;
               break;
           }
           case 7:
           {
               arr[7]++;
               break;
           }
           case 8:
           {
               arr[8]++;
               break;
           }
           default:
           {
               arr[9]++;
               break;
           }

       }

       total=total/10;

   }while(total!=0);

   for(int i=0;i<10;i++)
   {
       cout<<arr[i]<<'\n';
   }
   
   return 0;
}
