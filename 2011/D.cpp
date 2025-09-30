#include <iostream>
using namespace std;

int funcF(int x){
    if(x%2==0){
        return (x + 10)%256;
    }
    return (x - 4)%256;
}

int funcG(char c){
    return c - '0' % 256;
}

int funcY(int x, char c, int key){
    return funcF(funcG(x) ^ key);
}

//string reverseCipher(string cipheredText){
    
//}



int main(){
    int key;
    string cipheredText;
    cin >> key >> cipheredText;
    int result = 47 ^ key;
    cout << result;
    return 0;
}