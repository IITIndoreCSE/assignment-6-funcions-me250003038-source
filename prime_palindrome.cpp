#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
if ( n < 2) return false;
if (n == 2 ) return true;
if ( n % 2 == 0 ) return false;

for (int i = 3; i <= sqrt(n);  i += 2) {
if (n % i == 0) 
return false;
}
return true;
    // TODO: complete the function as per instructions

}

bool isPalindrome(int n) {
int original = n, reversed = 0, digit;
while (n > 0) {
digit = n % 10;
reversed = reversed * 10 + digit;
n /= 10;
} 
return original == reversed;
    // TODO: complete the function as per instructions

}

bool primePalindrome(int n) {
return isPrime(n) && isPalindrome(n);
    // TODO: complete the function as per instructions
    
}

int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    return 0;
}
