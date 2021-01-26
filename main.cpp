#include <iostream>
using namespace std;

int main() {
  /* We have already declared the input variable number at the backend.
int number;
Find whether the given number is prime or not, and then
print your output to the console
*/
// Write your code here
int number = 10;
bool isPrime = true;

if(number <= 1) {
    isPrime = false;
}

for(int counter = 2; counter < number; counter++){
    if(number % counter == 0){
        isPrime = false;
        // to stop iterating
        break;
    }else{
      isPrime = true;
    }
}

if(isPrime){
    cout << "prime";
}else{
    cout << "not prime";
}
 
}