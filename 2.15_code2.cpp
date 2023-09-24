#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {

    while (true) {

        char equation[100];
        char* operato;
        int firstnum;
        int secondnum;

        cout << "? ";

        cin.getline(equation, 100, '\n');

        firstnum = atoi(strtok(equation, " "));
        operato = strtok(NULL, " ");
        secondnum = atoi(strtok(NULL, " "));

        if (strcmp(equation, "quit") == 0) {
            //cout<<"program end"<<endl;
            return 0;
        }

        else if (*operato == '+') {
            cout << firstnum << " + " << secondnum << " = " << firstnum + secondnum << "\n";
        }
        else if (*operato == '-') {
            cout << firstnum << " - " << secondnum << " = " << firstnum - secondnum << "\n";
        }
        else if (*operato == '*') {
            cout << firstnum << " * " << secondnum << " = " << firstnum * secondnum << "\n";
        }
        else if (*operato == '/') {
            cout << firstnum << " / " << secondnum << " = " << firstnum / secondnum << "\n";
        }
        else if (*operato == '%') {
            cout << firstnum << " % " << secondnum << " = " << firstnum % secondnum << "\n";
        }

    }
}
