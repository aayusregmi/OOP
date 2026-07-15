#include <iostream>
using namespace std;

int main() {
    char str[100];
    int ascii_str , ascii_int;
    cout << "Enter any Number (*accepted as String) : ";
    cin >> str;

    int num = 0;

    for (int i = 0; str[i] != '\0'; i++) {
		ascii_str = static_cast<int>(str[i]) - static_cast<int>('0');
		num = num*10 + ascii_str;
    }
    
    cout << endl << "Successfully Converted String Num to Integer Num" << endl;
    cout << "The square of your num is " << num * num;
    return 0;
    
}