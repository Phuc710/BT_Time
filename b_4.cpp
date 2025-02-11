#include <iostream>
using namespace std;
int main(){
    int a,sum = 0;
    cout << "Enter a: ";
    cin >> a;

    for(int i = 1; i <= a; i++){
        sum+=i;
        
        (sum == 55)? cout << "***\t" : cout << sum << "\t ";
       
    }
    cout << "Tong tu 0 den " << a << " la: " << sum << endl;
}