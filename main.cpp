
#include <iostream>
using namespace std;

void task8(){
  int dayM;
  int yearN;//Доделать
  cout <<"VVedite chislo mesyaca" <<endl;
  cin >> dayM;
  switch(dayM){
    case 1:
    cout <<"31" <<endl;
    break;
    case 2:
    cout <<"28 or 29" <<endl;
    break;
    case 3:
    cout <<"31" <<endl;
    break;
    case 4:
    cout <<"30" <<endl;
    break;
    case 5:
    cout <<"31" <<endl;
    break;
    case 6:
    cout <<"30" <<endl;
    break;
    case 7:
    cout <<"31" <<endl;
    break;
    case 8:
    cout <<"31" <<endl;
    break;
    case 9:
    cout <<"30" <<endl;
    break;
    case 10:
    cout <<"31" <<endl;
    break;
    case 11:
    cout <<"30" <<endl;
    break;
    case 12:
    cout <<"31" <<endl;
    break;
  }
}


void task10(){
int day;
cout <<"Vvedite chislo dnya nedeli" <<endl;
cin >> day;
switch ( day ){
  case 1:
  cout <<"Monday" <<endl;
  break;
  case 2:
  cout <<"Tuesday" <<endl;
  break;
  case 3:
  cout <<"Wendsday" <<endl;
  break;
  case 4:
  cout <<"Thersday" <<endl;
  break;
  case 5:
  cout <<"Friday" <<endl;
  break;
  case 6:
  cout <<"Satarday" <<endl;
  break;
  case 7:
  cout <<"Sunday" <<endl;
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
cout << "Proverka treugolnika... ... ..." <<endl;
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
cout <<"Chislo chetnoe" <<endl;
else if (A%2 >= 1 )
cout <<"Chislo nechetnoe" <<endl;
task8();
task10();
task5();
task6();
return 0;
}

