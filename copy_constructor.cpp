using namespace std; 

#include<iostream> 

class c_cont{
 
            int a; 

            string b; 

        public: 

         c_cont(){ 

            cout<<"first constructor"<<endl; 

            a=5000; 

            b="hello how are you!!!"; 

} 

            //		c_cont(c_cont &x){ 

            //			cout<<"copy constructor"<<endl; 

            //			a=x.a; 

            //			b=x.b; 

//			} 

           void disp(){ 

                   cout<<"value of a : "<<a<<endl; 

                    cout<<"value of b : "<<b<<endl; 

         } 
}; 

int main(){ 

             c_cont obj1; 

              //c_cont obj2(obj1); 

               c_cout obj2=obj1; 

               obj2.disp();  

} 
