#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int first;
  cin >> first;

  cout << "Enter an operator (+, -, *, /, %): ";
  char math_operator;
  cin >> math_operator;

  cout << "Enter a number: ";
  int second;
  cin >> second;

//  const int sum = first + second;
//  const int remainder = first % second;
//  const int product = first * second;
//  const int quotient = first / second;
//  const int difference = first - second;

  if (math_operator == '+') {
    const int answer = first + second;
    cout << "The sum is: " << first << " " << math_operator << " " << second << " = " << answer << endl;

    cout << "Enter an operator: ";
    char math_operator2;
    cin >> math_operator2;

    cout << "Enter a number: ";
    cin >> second;

    if (math_operator2 == '+') {
      const int answer2 = answer + second;
      cout << "The sum is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;
      
      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;
 
      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }
  
    if (math_operator2 == '-') {
      const int answer2 = answer - second;
      cout << "The difference is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '*') {
      const int answer2 = answer * second;
      cout << "The product is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '/') {
      const int answer2 = answer / second;
      cout << "The quotient is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '%') {
      const int answer2 = answer % second;
      cout << "The remainder is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }
  } 

//Difference

  if (math_operator == '-') {
    const int answer = first - second;
    cout << "The difference is: " << first << " " << math_operator << " " << second << " = " << answer << endl;

    cout << "Enter an operator: ";
    char math_operator2;
    cin >> math_operator2;

    cout << "Enter a number: ";
    cin >> second;

    if (math_operator2 == '+') {
      const int answer2 = answer + second;
      cout << "The sum is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;
      
      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;
 
      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }
  
    if (math_operator2 == '-') {
      const int answer2 = answer - second;
      cout << "The difference is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '*') {
      const int answer2 = answer * second;
      cout << "The product is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '/') {
      const int answer2 = answer / second;
      cout << "The quotient is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '%') {
      const int answer2 = answer % second;
      cout << "The remainder is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }
  } 

//Product

  if (math_operator == '*') {
    const int answer = first * second;
    cout << "The product is: " << first << " " << math_operator << " " << second << " = " << answer << endl;

    cout << "Enter an operator: ";
    char math_operator2;
    cin >> math_operator2;

    cout << "Enter a number: ";
    cin >> second;

    if (math_operator2 == '+') {
      const int answer2 = answer + second;
      cout << "The sum is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;
      
      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;
 
      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }
  
    if (math_operator2 == '-') {
      const int answer2 = answer - second;
      cout << "The difference is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '*') {
      const int answer2 = answer * second;
      cout << "The product is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '/') {
      const int answer2 = answer / second;
      cout << "The quotient is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '%') {
      const int answer2 = answer % second;
      cout << "The remainder is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }
  }

//quotient

  if (math_operator == '/') {
    const int answer = first / second;
    cout << "The sum is: " << first << " " << math_operator << " " << second << " = " << answer << endl;

    cout << "Enter an operator: ";
    char math_operator2;
    cin >> math_operator2;

    cout << "Enter a number: ";
    cin >> second;

    if (math_operator2 == '+') {
      const int answer2 = answer + second;
      cout << "The sum is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;
      
      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;
 
      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }
  
    if (math_operator2 == '-') {
      const int answer2 = answer - second;
      cout << "The difference is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '*') {
      const int answer2 = answer * second;
      cout << "The product is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '/') {
      const int answer2 = answer / second;
      cout << "The quotient is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '%') {
      const int answer2 = answer % second;
      cout << "The remainder is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }
  } 

//Remainder

  if (math_operator == '%') {
    const int answer = first % second;
    cout << "The sum is: " << first << " " << math_operator << " " << second << " = " << answer << endl;

    cout << "Enter an operator: ";
    char math_operator2;
    cin >> math_operator2;

    cout << "Enter a number: ";
    cin >> second;

    if (math_operator2 == '+') {
      const int answer2 = answer + second;
      cout << "The sum is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;
      
      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;
 
      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }
  
    if (math_operator2 == '-') {
      const int answer2 = answer - second;
      cout << "The difference is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '*') {
      const int answer2 = answer * second;
      cout << "The product is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '/') {
      const int answer2 = answer / second;
      cout << "The quotient is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }

    if (math_operator2 == '%') {
      const int answer2 = answer % second;
      cout << "The remainder is: " << answer << " " << math_operator2 << " " << second << " = " << answer2 << endl;

      cout << "Enter an operator: ";
      char math_operator3;
      cin >> math_operator3;

      cout << "Enter a number: ";
      cin >> second;

      if (math_operator3 == '+') {
        const int answer3 = answer2 + second;
        cout << "The sum is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '-') {
        const int answer3 = answer2 - second;
        cout << "The difference is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '*') {
        const int answer3 = answer2 * second;
        cout << "The product is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '/') {
        const int answer3 = answer2 / second;
        cout << "The quotient is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }
      if (math_operator3 == '%') {
        const int answer3 = answer2 % second;
        cout << "The remainder is: " << answer2 << " " << math_operator3 << " " << second << " = " << answer3 << endl;
      }  

    }
  } 


}
