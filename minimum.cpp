#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,a[n];
 cin>>n;
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 for(int j=0;j<n;j++)
 {
     cout<<a[j]<<" ";
 }
 int min=INT_MAX;
 for(int i=0;i<n;i++)
 {
 	if(min>a[i])
 	{
 		min=a[i];
	 }
 }
 cout<<endl;
 cout<<min;
}
