#include<iostream>
using namespace std;
class Number
{
	int x;
	public:
		void getdata()
		{
			cout<<"\nenter x = ";
			cin>>x;
		}
		void showdata()
		{
			cout<<"\nx = "<<x;
			
		}
};
int main()
{
	Number t;
	t.getdata();
	t.showdata();
	return 0;
}


