#include <iostream>

//The following function recieves text and the shift amount as parameters
//and returns the encrypted text
std::string encrypt(std::string text, int shift){
    std::string result = "";

    for (int i = 0; i < text.length(); ++i){
        if(isupper(text[i])){
            result += char(int(text[i] + shift - 65)%26 + 65);
        }
        else{
            result += char(int(text[i] + shift - 97)%26 + 97);
        }
    }
    return result;
}

int main()
{
    std::string text;
    std::cout << "Enter text: ";
    std::cin >> text;
    int shift;
    std::cout << std::endl;
    std::cout << "Enter shift: ";
    std::cin >> shift;
    std::cout << "Your text is: " << text << std::endl;
    std::cout << "Your shift is: " << shift << std::endl;
    std::cout << "Encrypted text is: " << encrypt(text, shift) << std::endl;
    return 0;
}