using namespace std;
#include<iostream>
#include<fstream>
//file write read operation
main()
{
	//write operation
	string a;
	ofstream ofs;//or ofstream ofs("file.txt") and remove ofs.open("file.txt") part
	ofs.open("file.txt");
	a="rahul_kumar";
	ofs<<a;
	ofs.close();
	cout<<"file write operation performed successfully";
	//read operation
	string b;
	ifstream ifs;
	ifs.open("file.txt");
	ifs>>b;
	cout<<endl<<"file content : "<<b;
	ifs.close();
	cout<<endl<<"file read operation performed successfully";
	
	
	//other programm
//	string a;
//	ofstream write("C:\\Users\\rahul\\Desktop\\rahulfile.txt");
//	write<<"hello rahul kumar ";
//	write.close();
//	ifstream read("C:\\Users\\rahul\\Desktop\\rahulfile.txt");
//	getline(read,a);//cin one line
//	cout<<a;
//	read.close();
	
	
}







