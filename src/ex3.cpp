//
// Created by Alex Merryman on 1/13/16.
//

int main() {
    string friend_gender = 0;
    string friend_name = 0;

    cout << "Please enter a friend's name and 'm' if he is male, or 'f' if she is female.";
    cin >> friend_name;

    if (friend_gender == "m") {
        cout << "If you see " << friend_name << " please ask him to call me.";
    }
    else if (friend_gender == "f") {
        cout << "If you see " << friend_name << " please ask her to call me.";
    }
}