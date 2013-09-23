#include <iostream>
using namespace std;
float change(int a,float b)
{
	float c;
	switch (a)
	{
	case 1:c=(5.0/9)*(b-32);break;
	case 2:c=1.6*b+32;break;
	default: cout<<"You put wrong number"<<endl;
		break;
	}
	return c;
}
int main()
{
	int i;float j,k;
	cout<<"Put 1 means hua changes into she"<<endl;
	cout<<"Put 2 means she changes into hua"<<endl;
	cin>>i>>j;
	k=change(i,j);
	cout<<k<<endl;
}
