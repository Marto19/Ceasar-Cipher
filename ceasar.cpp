#include <iostream>

//The following function recieves text and the shift amount as parameters
//and returns the encrypted text
string encrypt(string text, int shift){
    string result = "";

    for (int i = 0; i < text.length(); i++){
        if(isupper(text[i])){
            result += char(int(text[i] + s - 65)%26 +  65);
        }
}