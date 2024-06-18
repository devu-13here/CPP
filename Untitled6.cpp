#include<iostream>
using namespace std;
int main()
{
	emp e1;
	cin>>e1.empno;
	
e1.readdata();
e1.displaydata();
}
{
	class emp
	{
		int empno;
		char empname[20];
		float basic;
		public:
			void readdata()
			{ cin>>empno;
			  gets(empname);
			  cin>>basic;	
			}
			void displaydata()
			{
				cout<<empno;
				cout<<empname;
				cout<<basic;
			}
	}
};
