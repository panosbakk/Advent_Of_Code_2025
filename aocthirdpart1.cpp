#include <iostream>
using namespace std;

int findMaxTwoDigitNumber(const string& line) {
    if (line.length() < 2) {
        return -1;
    }

    for (char X_char = '9'; X_char >= '1'; --X_char) {
        size_t X_index = line.find(X_char);
        if (X_index == string::npos) {
            continue;
        }

        string sub_line = line.substr(X_index + 1);

        if (sub_line.empty()) {
            continue;
        }
        char max_Y_char = '0';

        for (char Y_char : sub_line) {
            if (Y_char > max_Y_char) {
                max_Y_char = Y_char;
            }
        }
        int tens = X_char - '0';
        int ones = max_Y_char - '0';
        return tens * 10 + ones;
    }

    return -1;
}

int main(){
  string line;
  long long sum = 0;
  while(cin >> line){
    int result = findMaxTwoDigitNumber(line);
    sum += result;
  }
  cout << sum << endl;
  return 0;
}