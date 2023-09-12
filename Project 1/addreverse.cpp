#include <iostream>
#include <cmath>
/* checking if the number is a palindrome*/
bool checkPalindrome(int x) {
  int palindrome[5];
    int revPalindrome = 0;
    int count = 0;
    for (count = 0; x > 0 ; count++) {
      int numberInput = x;
        numberInput = numberInput % 10;
	palindrome[count] = numberInput;
        x = x / 10;
    }
    for (int i = 0; count == 0; i++){
      revPalindrome = palindrome[i] * pow(10,i);
      count--;
    }
	 return x == revPalindrome;
}

/* reversing the palindrome*/
int reversePalindrome(int x){
  int palindrome[5];
  int revPalindrome = 0;
  int count = 0;
    for (count = 0; x > 0 ; count++) {
      int numberInput = x;
        numberInput = numberInput % 10;
	palindrome[count] = numberInput;
        x = x / 10;
    }
    for (int i = 0; count == 0; i++){
      revPalindrome = palindrome[i] * pow(10,i);
      count--;
    }
	 return revPalindrome;
}

/* reverse and add the palindrome*/
int revaddPalindrome(int x) {
   
  while(!checkPalindrome(x)){
    int revPalindrome = reversePalindrome(x);
    x = x + revPalindrome;
  }
  return x;
}

/* main function*/
int main(){
    int numberInput;
    std::cout << "Enter the Palindrome: ";
    std::cin >> numberInput;

    int reverseaddPalindrome = revaddPalindrome(numberInput);
    std::cout << "The palindrome with the reverse and add fucntion is : " << numberInput << std::endl;
    return 0;
}
