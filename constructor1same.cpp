#include<iostream>
using namespace std;

class student
{
	int rno;
	char name[50];
	double fee;
	
	public:
		student();
		void display();
};

  student::student()
  {
  	cout<<"Enter the roll number:"<<endl;
  	cin>>rno;
  	cout<<"Enter the name:"<<endl;
  	cin>>name;
  	cout<<"Enter the fees:"<<endl;
  	cin>>fee;
  }
  
  void student::display()
  {
  	cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
  }
  

int main()
{
	student s;
	s.display();
	return 0;
}
