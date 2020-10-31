#include<iostream>
using namespace std;

class Rectangle
{
private:
	float Length;
	float Width;

public:
	void setLength(float len)
	{
		if(len>=0)
			Length = len;
		else
			cout<<"Error, please enter positive value\n";
	}

	float getLength()
	{
		return Length;
	}

	void setWidth(float wid)
	{
		if(wid>=0)
			Width = wid;
		else
			cout<<"Error, please enter positive value\n";
	}

	float getWidth()
	{
		return Width;
	}

	float getArea()
	{
		return Length * Width;
	}

	Rectangle merge (Rectangle r)
	{
		Rectangle result ;
		result.Length = Length +r.Length;
		result.Width = Width + r.Width;
		return result;
	}

};


int main()
{
	Rectangle box1;
	Rectangle box2;
	Rectangle merged;
	box1.setLength(2);
	box1.setWidth(2);
	box2.setLength(1);
	box2.setWidth(1);
	merged = box2.merge(box1);
	cout<<"The area of merged boxes is "<<merged.getArea();
	return 0;
}
