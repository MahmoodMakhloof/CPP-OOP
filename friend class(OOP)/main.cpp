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

	//friend class , no inheritance
	friend class printclass;
};

//in this class we can access private attributes in class "friends"
class printclass
{
public:
	void print(person p)
	{
		cout<<"name is "<<p.name<<endl;
		cout<<"gender is "<<p.gender<<endl;
		cout<<"age is "<<p.age<<endl;
	}
};



int main()
{
	person per("mahmoud","male",14);
	printclass pc;
	pc.print(per);
}
