#include <iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
vector<string> v{"mango","apple","banana"};  
for(int i=0;i<v.size();i++)  
v.insert(v.begin()+2,"strawberry");  
std::cout<< v[i] << " ";  
  
return 0;  
 
  
}