#include <iostream>
using namespace std;
int main()
{
    int i;
    int times[i];

    while(cin >> i){
        times[0] = 1;
        times[1] = 1;
        
        for(int j = 2;j <= i;j++){
            times[j] = times[j - 1] + times[j - 2];
        }
        cout << times[i] << "\n";
        }
    return 0;
    
}
