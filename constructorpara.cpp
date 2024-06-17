#include<iostream>
using namespace std;

class Rectangle
{
	private:
		int length;
		int breadth;
    
    public:
    	//a constructor cannot have a return type
  //  	Rectangle()
   // 	{
    //	 	length=10;
    //		breadth=111;
	//	}
		Rectangle(int l,int b)
		{
			setLength(l);
			setBreadth(b);
		}
		
	//	Rectangle(Rectangle &r)
	//	{
	//		length=r.length;
	//		breadth=r.breadth;		
	//	}
		void setLength(int l)
		{
			if(l>0)
				length=l;
			else
			    length=1;
		}
		
		void setBreadth(int b)
		{
				if(b>0)
				breadth= b;
			else
			    breadth=1;
		}
		
		int getLength(){return length;}
		int getBreadth(){ return breadth;}
		
		int area()
		{
			return length*breadth;
		}
		
		int perimeter()
		{
			return 2*(length+breadth);
		}
};

int main()
{
//	Rectangle r1;
	Rectangle  r1(10 , 5);
	Rectangle r2(r1);
	//r1.setLength(5);
	//r1.setBreadth(10);
//	cout<<r1.getBreadth()<<endl;
//	cout<<r1.getLength()<<endl;
	cout<<r2.area()<<endl;
	cout<<r2.perimeter()<<endl;
	return 0;
}
