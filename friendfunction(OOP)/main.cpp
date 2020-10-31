#include<iostream>
using namespace std;

class person
{
private:
	string name;
	string gender;
	int age;
public:
	person ()
	{

	}
	person(string n,string g,int a):name(n),gender(g),age(a)
	{

	}

	//friend function that is not method in this class , no inheritance
	friend void print(person);
};

//in this function we can access private attributes in class "friends"
void print(person p)
{
	cout<<"name is "<<p.name<<endl;
	cout<<"gender is "<<p.gender<<endl;
	cout<<"age is "<<p.age<<endl;
}

int main()
{
	person per("ahmed","male",14);
	print(per);
}
