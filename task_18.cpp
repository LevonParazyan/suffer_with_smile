#include <iostream>
#include <cstring>

std::string shortestWord(std::string text);
std::string largestWord(std::string text);


int main(){
        std::string text = "Ay qezig ban";
        std::cout << shortestWord(text) <<
	std::endl << largestWord(text) << std::endl;
	return 0;
}

std::string shortestWord(std::string text) {
        std::string tmpWord = "";
        std::string minWord = text;
        for(int i = 0; i < (int)text.length(); ++i) {
                if(text[i] != ' ') {
                        tmpWord += text[i];
                }
                else{
                        if(tmpWord.length() < minWord.length()) {
                                minWord = tmpWord;
                                tmpWord = "";
                        }
                }
        }
        if(tmpWord != "") {
                if(tmpWord.length() < minWord.length()) {
                        minWord = tmpWord;
                }
        }
        return minWord;
}

std::string largestWord(std::string text) {
        std::string tmpWord = " ";
        std::string maxWord = " ";
        for(int i = 0; i < (int)text.length(); ++i) {
                if(text[i] != ' ') {
                        tmpWord += text[i];
                }
                else{
                        if(tmpWord.length() > maxWord.length()) {
                                maxWord = tmpWord;
                                tmpWord = "";
                        }
                }
        }
	if(tmpWord != "") {
                if(tmpWord.length() > maxWord.length()) {
                        maxWord = tmpWord;
                }
        }

        return maxWord;
}

