#include <iostream>
using namespace std;

class person
{
  string name = "";
public:
  get_name()
  {
    cout << "Enter Your Name : ";
    cin >> name;
  }
  wish()
  {
    cout << "Good Day! " << name << endl;
  }
}
int main()
{
  person p;
  p.get_name();
  p.wish();
  return 0;
}
