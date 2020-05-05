#include <iostream>

int input_1() {                     
    std::cout << "Enter any number: "; 
    int input_1;                     
    std::cin >> input_1;           
                                 
    return input_1;  
}
                      
char operators() {   
  
  std::cout << "Enter (+ - * / %):" << std:: endl;                                                                            
  char input_operator;                                                         
                                            
  std::cin >> input_operator;                                                              
                                            
  return input_operator;                                                                  
}


int main() {                                                                             
  std::cout << "Enter a max of 4 numbers and 3 operators. " << 
  std::endl;                                                                          
                                          
  int first_input_1 = input_1();                                                   
                                          

  char user_input_operator;               
                                         
  user_input_operator = operators();                                            
                                       

 int second_input_1 = input_1();      

int answer;                                                               
                                     
   
  if (user_input_operator == '+') {                                                                                      
    answer = first_input_1 + second_input_1;                                        
  }
  if (user_input_operator == '-') {           
    answer = first_input_1 - second_input_1;
  }
  if (user_input_operator == '*') {
    answer = first_input_1 * second_input_1;
  }
  if (user_input_operator == '/') {
    answer = first_input_1 / second_input_1;
  }
  if (user_input_operator == '%') {
    answer = first_input_1 % second_input_1;
  }

  std :: cout << answer << std :: endl;   
                                        


  char operator_2;
  operator_2 = operators();
  int input_3 = input_1();

  if (operator_2 == '+') {
    answer = answer + input_3;
  }
  if (operator_2 == '-') {
    answer = answer - input_3;
  }
  if (operator_2 == '*') {
    answer = answer * input_3;
  }
  if (operator_2 == '/') {
    answer = answer / input_3;
  }
  if (operator_2 == '%') {
    answer = answer % input_3;
  } 
  std :: cout << answer << std :: endl;                                           
   }


