#include <iostream>
using namespace std;
int reverseNum(int n){
    int rem, rev = 0;
    
    while (n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}
int main(){
    int num, reverse;
    
    // Taking input
    cout << "Enter a number to reverse: ";
    cin >> num;
    
    // Calling out user-defined function
    reverse = reverseNum(num);
    
    // Displaying result
    cout << "Reversed number is: " << reverse << endl;
    
    return 0;
}
