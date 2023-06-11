#include<iostream>
//calender calculater day from date
using namespace std;
int day(int y, int m, int d)
{
  static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  y -= m < 3;
  return ((y + y/4 - y/100 + y/400 + t[m-1] + d) % 7);
}
int main()
{
    int y,m,d,x;
    cout<<"Enter the date like as day month year(dd mm yyyy) :";
    cin>>d>>m>>y;
    x=day(y,m,d);
    switch(x)
	{
        case 0: cout<<endl<<d<<"-"<<m<<"-"<<y<<" on day, Sunday";
        break;
        case 1: cout<<endl<<d<<"-"<<m<<"-"<<y<<" on day, Monday";
        break;
        case 2: cout<<endl<<d<<"-"<<m<<"-"<<y<<" on day, Tuesday";
        break;
        case 3: cout<<endl<<d<<"-"<<m<<"-"<<y<<" on day, Wednesday";
        break;
        case 4: cout<<endl<<d<<"-"<<m<<"-"<<y<<" on day, Thursday";
        break;
        case 5: cout<<endl<<d<<"-"<<m<<"-"<<y<<" on day, Friday";
        break;
        case 6: cout<<endl<<d<<"-"<<m<<"-"<<y<<" on day, Saturday";
        break;
    }
    cout<<endl<<"thanks! Have a nice day---";
    return 0;
    

    
}
