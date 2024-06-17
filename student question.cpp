#include<iostream>
using namespace std;

class Student 
{
	private:
		int roll;
		string name;
		int mathMark;
		int cheMark;
		int phyMark;
		
	public:
		Student(int r,string n,int m,int p,int c)
		{
			roll=r;
			name=n;
			mathMark=m;
			phyMark=p;
			cheMark=c;
		}
		int total()
		{
			return mathMark+phyMark+cheMark;
		}
		char grade()
		{
			float average=total()/3;
			if(average>60)
			  return 'A';
			else if (average>40 && average<60)
			  return 'B';
			else
			  return 'C';
		}
};
int main()
{
	int roll;
	string name;
	int m,p,c;
	cout<<"Enter the roll number of Students:";
	cin>>roll;
	cout<<"Enter Name of Student:";
	cin>>name;
	cout<<"Enter marks in 3 subjects";
	cin>>m>>p>>c;
	Student s(roll,name,m,p,c);
	cout<<"Total Marks:"<<s.total()<<endl;
	cout<<"Grade of Students:"<<s.grade()<<endl;
}
