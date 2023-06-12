using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>
void fix_random()
{
	int r;
	r=rand()%100;//reminder(%) value 1 to 99
	cout<<"random number : "<<r<<endl;
}
void one_time_random()
{
	srand(2);//change argument of srang()
	int r;
	r=rand()%100;
	cout<<"random number : "<<r<<endl;
}
void any_time_random()
{
	srand(time(0));
	int r;
	r=rand()%100;
	cout<<"random number : "<<r<<endl;
}
main()
{
	fix_random();
	one_time_random();
	any_time_random();
}



