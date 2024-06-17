#include<iostream>
using namespace std;

class Student
{
	private:
		int roll;
		string name;
		int mathMark;
		int phyMark;
		int chemMark;
		
	public:
		Student(int r,string s,int m1,int m2,int m3)
		{
		roll=r;
		name=s;
		mathMark=m1;
		phyMark=m2;
        chemMark=m3;			
		}
		int total()
		{
			return mathMark+phyMark+chemMark;
		}
		char grade()
		{
			float average=total()/3;
			
			if(average>=60)
			 cout<<"A";
			else if (average>40 && average<60)
			 cout<<"B";
			else
			  cout<<"C";
		}
};

int main()
{
//	Student s(32,'Sweety',67,90,99);
   int roll;
   string name;
   int m,p,c;
   cout<<"Enter the roll no."<<endl;
   cin>>roll;
   cout<<"Enter the name of Student:"<<endl;
   cin>>name;
   cout<<"Enter marks in 3 subjects:"<<endl;
   cin>>m>>p>>c;
   Student s(roll,name,m,p,c);
   cout<<"Total Marks:"<<s.total()<<endl;
   cout<<"Grade of students:"<<s.grade()<<endl;
   

    	
}
