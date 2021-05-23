
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count;
    int a[10];
    int idno;
    cout<<"Enter the number of customer"<<endl;
    cin>>n;
    cout<<"Enter the customer id:";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<10;i++)
    {
    	count=0;
    	for(int j=1;j<10;j++)
    	{
    		if(a[i]==a[j])
	 {
	 count++;	
		}
	}	
	if(count>0)
	{
	idno=a[i];
	}
	
	}
	cout<<"customer id:"<<idno<<" count="<<count;

}
