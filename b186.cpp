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
    cout << cookie << "個餅乾 " << chocolate << "盒巧克力 " << cake << "個蛋糕\n";
    }
    return 0;
}
