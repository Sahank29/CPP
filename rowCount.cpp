/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int r,c,val=0,count=0,newval,cnt,row;
    cout<<"size:";
    cin>>r>>c;
    int a[r][c];
    cout<<"Enter the values :";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
        cout<<"\n";
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==1)
            {
                count++;
                cnt=i;
            }
        }
        newval=count;
        count=0;
        if(newval>val)
        {
            row=cnt;
            val=newval;
        }
    }
    cout<<"row number is :"<<row<<"\n";
    cout<<"max number is :"<<val;

    return 0;
}

