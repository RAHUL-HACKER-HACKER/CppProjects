#include<iostream>
using namespace std;
class info{
	
    string a;
	int b;
	char c;
	
	public:		
			
		
		info(string a,int b,char c){
			
			this->a=a;
			this->b=b;
			this->c=c;
			
			
		}
		
        public:
		void display(){
			
			cout<<"name of employee :"<<a<<endl;
			cout<<"grade of employee :"<<c<<endl;
			cout<<"salary of employee :"<<b<<endl;
			
		}
		
	
	
};
int main(){
	//access by object
	info obj("rahul kumar",50000,'A');
	obj.display();
	
	//access by pointer
	//info *obj2=&obj;
	//obj2->display();
	
	//access by reference
	//info &obj3=obj;
	//obj3.display();
	
	//access by resolution operator ( :: )
	//obj.info::display();
	
	
	
}

