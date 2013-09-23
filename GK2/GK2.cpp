#include <iostream>
using namespace std;
int PaiLian(int n,int m)
{
	int i,j,k,l;
	k=n;l=m;
	if(n<m)
	{
		for(i=1;i<n;i++)
		{
			k=k*(n-i);
		}
		for(j=1;j<n;j++)
		{
			l=m*(m-j);
		}
	return l/k;
	}
	else
	{
		cout<<"You put wrong Number"<<endl;
		return 0;
	}
}
int main()
{
	int i,j,k;
	cin>>i>>j;
	k=PaiLian(i,j);
	cout<<k<<endl;
}