//
// Created by Alex Merryman on 1/13/16.
//

int main() {
    int input_num;
    cout << "Enter an integer.\n";
    cin >> input_num;

    int num_status;

    num_status = input_num%2;

    if (num_status == 0) {
        cout << "The value " << input_num << " is an even number.";
    }
    else {
        cout << "The value " << input_num << " is an odd number.";
    }
}