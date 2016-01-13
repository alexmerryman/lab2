//
// Created by Alex Merryman on 1/13/16.
//

int main() {
    char symbol;
    double operand1;
    double operand2;

    cout << "Enter an operation followed by two operands.\n";
    cin >> symbol >> operand1 >> operand2;

    string operation;
    string operand1str;
    string operand2str;

    operand1str = operand1;
    operand2str = operand2;
    operation = operand1str + symbol + operand2str;

    cout << "Is this the operation you wish to perform? " << operation << "\nPleas type 'yes' or 'no'.\n";
    string yes_or_no;
    cin >> yes_or_no;
    if (yes_or_no == "yes") {
        cout << operand1 << symbol << operand2;
    }
    else {
        cout << "I don't understand. Please enter an operation followed by two operands.\n"
    }
}