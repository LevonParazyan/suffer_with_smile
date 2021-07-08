#include <iostream>
#include <cstring>

char getMostRepeatedSym(char *str);

int main(){
	char str[20];
	std::cin >> str;
	std::cin.getline(str, 20);
	std::cout << getMostRepeatedSym(str);
	return 0;
}

char getMostRepeatedSym(char* str) {
	int count[256] = {0};
	int len = strlen(str);
    	int max = 0;
    	char result;
	for (int i = 0; i < len; i++) {
        	count[str[i]]++;
        	if (max < count[str[i]]) {
            		max = count[str[i]];
            		result = str[i];
        	}
    	}
	return result;
}
