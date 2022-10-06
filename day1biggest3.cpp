#include<iostream>
using namespace std;
inline int largest(int a , int b , int c);
int main() {
    int a , b ,c;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;
    int large = largest(a , b ,c);
    cout << "\n Largest of " << a << " , " << b << " , "  << c << " is " << large;
    return 0;
}

inline int largest(int a , int b , int c)   {
    if(a > b  && a > c)
        return a;
    else if(b > c)
        return b;
    else 
        return c;
}




