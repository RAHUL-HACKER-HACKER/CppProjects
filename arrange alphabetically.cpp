using namespace std;
#include <iostream>
main()
{
	string word;
	string arr1[26];
	//char arr2[26];
	char alphabets[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	cout<<"inter any word : ";
	cin>>word;
	
	for(int i=0;i<26;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(alphabets[i]==word[j])
			{
				arr1[i]=alphabets[i];
				
			}
		}
	}
	cout<<endl<<"word "<<word<<" in alphabetical order : ";
	for(int k=0;k<26;k++)
	{
		
		cout<<arr1[k];
		
	}
}
