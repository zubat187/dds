
#include <iostream>
using namespace std;

void task8(){
  int dayM;
  int yearN;//Доделать
  cout <<"VVedite chislo mesyaca" <<endl;
  cin >> dayM;
  switch(dayM){
    case 1:
    cout <<"31";
    break;
    case 2:
    cout <<"28 or 29";
    break;
    case 3:
    cout <<"31";
    break;
    case 4:
    cout <<"30";
    break;
    case 5:
    cout <<"31";
    break;
    case 6:
    cout <<"30";
    break;
    case 7:
    cout <<"31";
    break;
    case 8:
    cout <<"31";
    break;
    case 9:
    cout <<"30";
    break;
    case 10:
    cout <<"31";
    break;
    case 11:
    cout <<"30";
    break;
    case 12:
    cout <<"31";
    break;
  }
}


void task10(){
int day;
cout <<"Vvedite chislo dnya nedeli" <<endl;
cin >> day;
switch ( day ){
  case 1:
  cout <<"Monday";
  break;
  case 2:
  cout <<"Tuesday";
  break;
  case 3:
  cout <<"Wendsday";
  break;
  case 4:
  cout <<"Thersday";
  break;
  case 5:
  cout <<"Friday";
  break;
  case 6:
  cout <<"Satarday";
  break;
  case 7:
  cout <<"Sunday";
  break;
}
}

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
task8();
task10();
task5();
task6();
return 0;
}

