#include<bits/stdc++.h>
using namespace std;

string generateKey(string str, string key) {
    int x(str.size()), i(0); 
    
    while(key.length() != str.length()) {
        key.push_back(key[i++]);
    }
    return key; 
}
string cipherText(string str, string key) {
    string cipher_text; 
  
    for (int i = 0; i < str.size(); i++) {
        char x = (str[i] + key[i]) % 26;
        x += 'A';
        cipher_text.push_back(x); 
    }
    return cipher_text; 
}
string originalText(string cipher_text, string key) {
    string original_text; 
  
    for (int i = 0 ; i < cipher_text.size(); i++) {
        char x = (cipher_text[i] - key[i] + 26) % 26; 
        x += 'A'; 
        original_text.push_back(x); 
    } 
    return original_text; 
}
int main() {
    string plain_text, key;
    
    cin >> plain_text >> key;
    
    key = generateKey(plain_text, key);
    
    string cipher = cipherText(plain_text, key);
    string original = originalText(cipher, key);

    cout << "Cipher Text: " << cipher << '\n'
         << "Original Text: " << original;
}