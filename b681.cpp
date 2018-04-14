#include <iostream>
using namespace std;
int main() {
  int point;
  int day;
  
  while(cin >> point){
    if(point > 0){
      day = point*2 - 1;
  }else if(point < 0){
      day = point*-2;
  }
  cout << day << "\n";
}
return 0;
}
