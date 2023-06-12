using namespace std;
#include <iostream>
class smartphone{
	public:
	 void fnS(){
			
			
			cout<<"hi  i am smartphone class\n";
			
		}
		virtual void selfie()=0;//pure virtual fn
		virtual void calling()=0;//pure virtual fn
		
		
	
	
};
class android:public smartphone{
	public:
	
	void selfie(){
		
		cout<<"hi smartphone taking selfie\n";
		
		
	}
	void calling(){
		cout<<"hi smartphone calling\n";
	}
	
	
};
class iphone:public smartphone{
	public:
	
	void selfie(){
		
		cout<<"hi iphone taking selfie\n";
		
		
	}
	void calling(){
		cout<<"hi iphone calling\n";
	}
	
	
	
};
main()
{
	iphone a;
	smartphone* s;
	
	s=&a;
	
	s->fnS();
	s->selfie();
	s->calling();
	
	
}
