#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <iostream>
#include <algorithm>

int main() {
    int list[26] = { 0, };
    char n;
    scanf("%c", &n);

    while (n != '\n')
    {
        int index = n > 'Z' ? n - 'a' : n - 'A';
        std::cout << "char : " << n << ", index : " << index << std::endl;
        list[index]++;
        scanf("%c", &n);
    }

    std::sort(list, list + 25, std::greater<int>());
    
    if (list[0] == list[1]) {
        std::cout << "?";
    }
    else {
        std::cout << list[0];
    }
}

/*
    while (true) {
        c++;
        if (std::cin.eof()) {
            break;
        }

        std::cin >> str;

        if (str == "" || str == " ") {
            break;
        }
    }


    std::cout << c;
*/
