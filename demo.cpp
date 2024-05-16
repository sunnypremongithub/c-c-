#include <iostream>
using namespace std;
int main()
{
    int start,end,i;
    cout<<"enter start or end value";
    cin>>start>>end;
    if(start<end)
    {
        for(i=start;i<=end;i++)
        {
            cout<<i<<endl;
        }
    }
    else
    {
        for(i=end;i<=start;i++)
        {
            cout<<i<<endl;
        }
    }
}

