#include <iostream>
#include <cstring>

std::string shortestWord(std::string text);

int main(){
	std::string text = "Vax im arev";
	std::cout << shortestWord(text);
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
