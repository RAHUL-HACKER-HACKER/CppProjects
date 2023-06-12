#include <iostream>
using namespace std;
class swapping
{
	public:
		int temp;
		disp(int a,int b)
		{
			cout << "Before swapping." << endl;
            cout << "a = " << a << ", b = " << b << endl;

            temp = a;
            a = b;
            b = temp;

            cout << "\nAfter swapping." << endl;
            cout << "a = " << a << ", b = " << b << endl;
			
		}
};

int main()
{
    swapping s;
    int a,b;
    cout<<"inter two int a and b : ";
    cin>>a>>b;
    s.disp(a,b);

    

    return 0;
}

