#include <iostream>

//The following function recieves text and the shift amount as parameters
//and returns the encrypted text
std::string encrypt(std::string text, int shift){
    std::string result = "";

    for (int i = 0; i < text.length(); i++){
        if(isupper(text[i])){
            result += char(int(text[i] + shift - 65)%26 +  65);
        }
}