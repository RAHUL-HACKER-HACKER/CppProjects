// Let there be 3 users who are placing print requests randomly.
// Printer takes 5 seconds to print one page
// Pages are printed in a queue. This ensures that access is given on first-come, first- served basis.
//Subhranil-->
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

class PrintRequest
{
public:
  int req, NumberOfUsers = 5;
  int user1 = 0, user2 = 0, user3 = 0;
  string taskName;
  queue<string> q1, q2;
  void getOrders()
  {
    cout << endl;
    cout << "No.of Pages of User 1: ";
    cin >> req;
    user1 += req;
    cout << "Title of the page: ";
    for (int i = 0; i < req; i++)
    {
      cin >> taskName;
      q1.push(taskName);
      q2.push(taskName);
    }
    cout << endl;
    cout << "No.of Pages of User 3: ";
    cin >> req;
    user3 += req;
    cout << "Title of the page: ";
    for (int i = 0; i < req; i++)
    {
      cin >> taskName;
      q1.push(taskName);
      q2.push(taskName);
    }
    cout << endl;
    cout << "No.of Pages of User 1: ";
    cin >> req;
    user1 += req;
    cout << "Title of the page: ";
    for (int i = 0; i < req; i++)
    {
      cin >> taskName;
      q1.push(taskName);
      q2.push(taskName);
    }
    cout << endl;
    cout << "No. of Pages of User 2: ";
    cin >> req;
    user2 += req;
    cout << "Title of the page: ";
    for (int i = 0; i < req; i++)
    {
      cin >> taskName;
      q1.push(taskName);
      q2.push(taskName);
    }
    cout << endl;
  }
//subhranil--->

//Rahul-->
  void displayOrders()
  {
    cout << endl;
    cout << "Processing..." << endl;
    Sleep(3000);
    cout << "Ink    : Available" << endl;
    cout << "Pages  : Available" << endl;
    cout << "User 1 : " << user1 << " task" << endl;
    cout << "User 2 : " << user2 << " task" << endl;
    cout << "User 3 : " << user3 << " task" << endl;
  }

  void printOrders()
  {
    system("pause");
    cout << endl;
    for (int i = 0; i < q2.size(); i++)
    {
      cout << "Tasks remaining " << q1.size() << endl;
      Sleep(5000);
      cout << q1.front() << " printed successfully!" << endl;
      q1.pop();
      cout << endl;
    }
  }

  //Rahul -->

  //JJ -->
  void ask()
  {
    string ask;
    cout << "Do you want to print ?(y/n): ";
    cin >> ask;
    if (ask == "y")
    {
      PrintRequest obj;
      obj.getOrders();
      obj.displayOrders();
      obj.printOrders();
      cout << "Tasks Remaining 0" << endl;
      cout << "Error: 0";
      cout << endl;
      obj.ask();
    }
    else
    {
      cout << endl;
      cout << "** HP ink deskjet Printer **";
    }
  }
};

int main()
{
  cout << endl;
  PrintRequest obj;
  obj.ask();
  return 0;
}
//-->
