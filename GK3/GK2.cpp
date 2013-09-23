#include <iostream>
using namespace std;
float CiMi(float a,int b)
{
	if(a==0&&b<=0)
	{
		cout<<"You put wrong Number"<<endl;
	}
	else
	{
		if(b==1)
		{
			return a;
		}
		else
		{
			return CiMi(a,b-1)*a;
		}
	}
}
int main()
{
	float i;
	int j;
	cin>>i>>j;
	cout<<CiMi(i,j)<<endl;
}