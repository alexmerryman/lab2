//
// Created by Alex Merryman on 1/13/16.
//

int main() {
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    if (age < 12) {
        cout << "Next year you will be " << age+1;
    }
    else if (age == 17) {
        cout << "Next year you will be able to vote.";
    }
    else {
        cout << "I hear you just had a birthday and you are " << age << "years old.";
    }
}