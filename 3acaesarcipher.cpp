#include<bits/stdc++.h>
using namespace std;

int main() {
    string plain, cipher, original;
    int n;
    cin >> n >> plain;
    
    n %= plain.length();
    for(char &x: plain) x = toupper(x);
    
    for(char x: plain) {
        cipher.push_back((x - 'A' + n) % 26 + 'A');
    }
    
    for(char x: cipher) {
        original.push_back((x - 'A' - n + 26) % 26 + 'A');
    }
    cout << "Cipher Text: " << cipher << '\n'
         << "Original Text: " << original;
}