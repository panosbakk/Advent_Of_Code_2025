#include <iostream>
#include <string>

using namespace std;

bool isRepeatedSequence(long long num) {
  string s = to_string(num);
  
  if (s.length() % 2 != 0) {
    return false;
  }
  
  size_t half = s.length() / 2;
  return s.substr(0, half) == s.substr(half);
}

int main(){
  long long num1, num2;
  char dash, comma;
  long long trailingSum = 0;
  
  while (cin >> num1 >> dash >> num2) {
    for (long long n = num1; n <= num2; n++) {
      if (isRepeatedSequence(n)) {
        trailingSum += n;
        cout << "Found: " << n << ", Trailing Sum: " << trailingSum << endl;
      }
    }
    
    if (cin >> comma) {
      if (comma != ',') {
        break;
      }
    } else {
      break;
    }
  }

  cout << "Final Sum: " << trailingSum << endl;
  return 0;
}
