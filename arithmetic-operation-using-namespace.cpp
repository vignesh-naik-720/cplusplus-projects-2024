#include <iostream>
namespace calculator
{
  int add(int x, int y){ return x + y;}
  int sub(int x, int y){ return x - y;}
  int mult(int x, int y){ return x * y;}
  float div(int x, int y){ return (float)x / y;}
}
using namespace std;
using namespace calculator;

int main()
{
  int a, b;
  cout << "Enter two numbers : " << endl;
  cin >> a >> b;
  cout << "The sum of a and b : " << add(a, b) << endl;
  cout << "The difference between a and b : " << sub(a, b) << endl;
  cout << "The product of a and b : " << mult(a, b) << endl;
  cout << "The quotient of a and b : " << div(a, b) << endl;
  return 0;
}
  
