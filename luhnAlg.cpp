#include <iostream>
using namespace std; 

int getDigit(const int number); 
int sumOddDigits(const string cardNum);
int sumEvenDigits(const string cardNum);

int main(){
  string cardNum; 
  int result = 0; 
  
  cout << "Enter card number to be verified:" << '\n';
  cin >> cardNum;
  
  result = sumOddDigits(cardNum) + sumEvenDigits(cardNum); 
  
  if (result % 10 == 0){
    cout << "Card number is VALID." << '\n';
  }
  else {
    cout << "INVALID CARD NUMBER !!" << '\n';
  }
  
  return 0;
}


int getDigit(const int number){
  return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const string cardNum){
  int sum = 0;
  
  for (int i = cardNum.size() - 1; i >= 0; i-=2){
    sum+=cardNum[i] - '0';
  }
  
  return sum;
}

int sumEvenDigits(const string cardNum){
  int sum = 0;
  
  for (int i = cardNum.size() - 2; i >= 0; i-=2){
    sum+=getDigit((cardNum[i] - '0') * 2);
  }
  
  return sum;
}
