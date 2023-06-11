#include <iostream>  
using namespace std;  
enum week { Monday=200, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };  
int main()  
{  
    week day=Tuesday;
    //day = Friday;  
    cout << "Day: " << day<<endl;
    
	cout<<Wednesday<<endl;
	
	cout<<(day==200)<<endl; 
	cout<<(Sunday==206)<<endl;  
    return 0;  
}     
