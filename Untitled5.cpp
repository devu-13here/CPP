#include<iostream>
using namespace std;
void item::getdata(int a,int b)
{ number=a;
  cost=b;
}
class item
{
	int number;
	float cost;
	
  public:
  	void getdata(int a,float b);
  	void putdata(void);
};
