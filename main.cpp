#include <iostream>
using namespace std;

int main() {
int maxNumber;
    int sum = 0;

    cout << "enter a postive integer value: ";
    cin >> maxNumber;

    while (maxNumber <= 0) {
        cout << "Invalid input. please enter a number greater than 0: ";
        cin >> maxNumber;
    }
for (int i = 1; i <= maxNumber; i++) {
    sum += i;
}
  cout << "the sum of integers from 1 up to " << maxNumber << " is: " << sum << endl;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}