
#include <iostream>
using namespace std;

void task6(){
int a;
int b;
int c;
cout <<"VVedite storony treugolnika" <<endl;
cin >> a;
cin >> b;
cin >> c;
cout << "Proverka treugolnika" <<endl;
if ((a+b>c) && (a+c>b) && (b+c>a))
cout <<"Treugolnik sushestvuet" <<endl;
else 
cout <<"Treugolnik ne sushestvuet" <<endl;


}

void task5(){
  int a;
  int b;
  int c;
  cout << "VVedite chisla" << endl;
  cin >> a;
  cin >> b;
  cin >> c;
  if (1<=a && a<=3)
  cout <<" a podhodit" <<endl;
  else if (1<=b && b<=3)
  cout <<"b podhodit" <<endl;
  else if (1<=c && c<=3)
  cout <<"c podhodit" <<endl;

}
int main(){
int A;
cout <<"Vvedite chislo A" <<endl;
cin >> A;
if (A%2 == 0 )
cout <<"Chislo chetnoe";
else if (A%2 >= 1 )
cout <<"Chislo nechetnoe";
task5();
task6();
return 0;
}

