using namespace std;
#include <iostream>
#include <cmath>
class student
{
	public:
	string name;
	int age;
	string vill;
	string dist;
	void details()
	{
		cout<<"name of student : "<<name<<endl;
		cout<<"age : "<<age<<endl;
		cout<<"village : "<<vill<<endl;
		cout<<"distict : "<<dist<<endl;
		cout<<"thanks you";
		
		
	}
};
int main()
{
	student s;
	cout<<"name of student : ";
	cin>>s.name;
	s.age=20;
	s.vill="kuchaikote";
	s.dist="gopalganj";
	s.details();
	return 0;
}
