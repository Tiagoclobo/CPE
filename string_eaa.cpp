#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::to_string;

int main(){
    string app_str = "This string will be appended to ";
    int number = 12345;

    cout << app_str << endl;
    app_str += to_string(number);
    cout << app_str << endl;

    return EXIT_SUCCESS;
}
