using namespace std;
#include<iostream>
#include<fstream>
//file write read operation
main()
{
	//write operation
	char arr[100];//used array string
	cout<<"inter your story---"<<endl;
	cin.getline(arr,100);
	
	ofstream ofs;//or ofstream ofs("file.txt") and also use ofs.open("file.txt") part
	ofs.open("file.txt");
	ofs<<arr;
	ofs.close();
	cout<<"file write operation performed successfully";
	//read operation
	char arr1[100];
	ifstream ifs;
	ifs.open("file.txt");
	ifs.getline(arr1,100);
	cout<<endl<<"file content : "<<arr1;
	ifs.close();
	cout<<endl<<"file read operation performed successfully";
	
	
	//or we can use;
	//write a file
    /*  string a;//used string 
    ofstream w;
    w.open("C:\\Users\\rahul\\Desktop\\rahulfile.txt");
    
    cout<<"enter any name :";
    getline(cin,a);
    w<<a;
    w.close();
    
    //read a file
    string b;
    ifstream r;
    r.open("C:\\Users\\rahul\\Desktop\\rahulfile.txt");
    
    //this prints all line
    while(getline(r,b)){
		
		cout<<b<<endl;
	}
    r.close();  */
	
	
}



