#include <iostream>
using namespace std;
int main(){
    int n, sum =0,i=0;
    cout << "Enter a number: ";
    cin >> n;
    while(i < n){
        i++;
        sum +=i;
    }
    cout << "Tong tu den " << n << " la: " << sum << endl;
    return 0;
}