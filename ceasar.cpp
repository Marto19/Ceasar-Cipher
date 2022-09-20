#include <iostream>

//The following function recieves text and the shift amount as parameters
//and returns the encrypted text
std::string encrypt(std::string text, int shift){
    std::string result = "";

    for (int i = 0; i < text.length(); i++){
        if(isupper(text[i])){
            result += char(int(text[i] + shift - 65)%26 +  65);
        }
        else{
            result += char(int(text[i] + shift - 65)%26 + 65);
        }
        return result;
    }
}

int main(){
    int shift;
    std::string text;
    std::cout << "Enter text: ";
    std::cin >> text;
    std::cout << std::endl;
    std::cout << "Your text is: " << text << std::endl;
    std::cout << "Your shift is: " << shift << std::endl;
    std::cout << "Encrypted text is: " << encrypt(text, shift) << std::endl;
}