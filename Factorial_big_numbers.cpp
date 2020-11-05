#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {
int i = 0, carry=0, number, j=0, counting, length;
int arr[10000] = {0};
if(n==1) {cout<<"1"<<endl;}
else
{
number = n;
while (number!=0)
{
    arr[i]=number%10;
    number=number/10;
    i++;
}
while (n!=1)
{
    for (j=0;j<i;j++);
    n--;
    i=0;
    carry=0;
    for (i=0;i<=j+1;i++)
    {
        counting=n*arr[i]+carry;
        arr[i]=counting%10;
        carry=counting/10;
    }
}
  for (i=j;i>=0;i--)
  {
    if (arr[i]!=0)
    {
      length=i;
      break;
    }
  }
  for (i=length;i>=0;i--)
    {
        cout<<arr[i];
    }
}
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
