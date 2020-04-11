#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "This is a simple calculator that takes 4 numbers and 3 operators" << endl;
  int user_input_1 = 0;
  std::cout << "Input 1 number: " << std::endl;
  std::cin >> user_input_1; 
    
  int user_input_2 = 0;
  std::cout << "Input 2nd number: " << std::endl;
  std::cin >> user_input_2;

  char user_input_operator = '+';
  std::cout << "You get to input 3 operators. Input one of these operators first: + - * / %" << std::endl;
  std::cin >> user_input_operator;

  int first_operator = 0;

  if (user_input_operator == '+') {
    std::cout << "The 2 numbers added equals: " << user_input_1 + user_input_2 << std::endl;
    first_operator = user_input_1 + user_input_2;
  }

  if (user_input_operator == '-') {
    std::cout << "The 2 numbers subtracted equals: " << user_input_1 - user_input_2 << std::endl;
    first_operator = user_input_1 - user_input_2;
  }

  if (user_input_operator == '*') {
    std::cout << "The 2 numbers multiplied equals: " << user_input_1 * user_input_2 << std::endl;
    first_operator = user_input_1 * user_input_2;
  }

  if (user_input_operator == '/') {
    std::cout << "The 2 numbers divided equals: " << user_input_1 / user_input_2 << std::endl;
    first_operator = user_input_1 / user_input_2;
  }

  if (user_input_operator == '%') {
    std::cout << "The 2 numbers remainder equals: " << user_input_1 % user_input_2 << std::endl;
    first_operator = user_input_1 % user_input_2;
  }

  //second operator
  int user_input_3 = 20;
  std::cout << "Input 3rd number: " << std::endl;
  std::cin >> user_input_3;

  char user_input_operator_2 = '+';
  std::cout << "Secondly, input one of these operators: + - * / %" << std::endl;
  std::cin >> user_input_operator_2;

  int second_operator = 0;

  if (user_input_operator_2 == '+') {
    std::cout << "The 2 numbers added equals: " << first_operator + user_input_3 << std::endl;
    second_operator = first_operator + user_input_3;
  }

  if (user_input_operator_2 == '-') {
    std::cout << "The 2 numbers subtracted equals: " << first_operator - user_input_3 << std::endl;
    second_operator = first_operator - user_input_3;
  }

  if (user_input_operator_2 == '*') {
    std::cout << "The 2 numbers multiplied equals: " << first_operator * user_input_3 << std::endl;
    second_operator = first_operator * user_input_3;
  }

  if (user_input_operator_2 == '/') {
    std::cout << "The 2 numbers divided equals: " << first_operator / user_input_3 << std::endl;
    second_operator = first_operator / user_input_3;
  }

  if (user_input_operator_2 == '%') {
    std::cout << "The 2 numbers remainder equals: " << first_operator % user_input_3 << std::endl;
    second_operator = first_operator % user_input_3;
  }

  // third operator
  int user_input_4 = 20;
  std::cout << "Input fourth number: " << std::endl;
  std::cin >> user_input_4;

  char user_input_operator_3 = '+';
  std::cout << "Thirdly, input one of these operators: + - * / %" << std::endl;
  std::cin >> user_input_operator_3;

  int third_operator = 0;

  if (user_input_operator_3 == '+') {
    std::cout << "The numbers added equals: " << second_operator + user_input_4 << std::endl;
    third_operator = second_operator + user_input_4;
  }

  if (user_input_operator_3 == '-') {
    std::cout << "The numbers subtracted equals: " << second_operator - user_input_4 << std::endl;
    third_operator = second_operator - user_input_4;
  }

  if (user_input_operator_3 == '*') {
    std::cout << "The numbers multiplied equals: " << second_operator * user_input_4 << std::endl;
    third_operator = second_operator * user_input_4;
  }

  if (user_input_operator_3 == '/') {
    std::cout << "The numbers divided equals: " << second_operator / user_input_4 << std::endl;
    third_operator = second_operator / user_input_4;
  }

  if (user_input_operator_3 == '%') {
    std::cout << "The numbers remainder equals: " << second_operator % user_input_4 << std::endl;
    third_operator = second_operator % user_input_4;
  }
}
