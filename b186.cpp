#include <iostream>
using namespace std;
int main()
{
    int cookie, chocolate, cake;
    while(cin >> cookie >> chocolate >> cake){
    while(cookie >= 10 && cake >= 2){
        chocolate++;
        cookie -= 10;
        cake -= 2;
    }
    cout << cookie <<"," << chocolate <<　"," <<　cake << "\n";
    }
    return 0;
}
