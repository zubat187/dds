
#include <iostream>
using namespace std;

int main() {
  int a;
  int b;
  cout << "Vvedite 2 chisla!"<<endl;
  cin >>a;
  cin >>b;
  a = a + b;
  b = a - b;
  a = a - b;
  cout <<"Chisla pomenyzlis mestami:" <<endl <<a <<endl <<b;
  return 0;
}