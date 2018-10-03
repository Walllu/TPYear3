#include <iostream>
using namespace std;

int main(){
    int input;
    bool answer;
    cout << "Please input a number between 1 and 1000 to check if it's prime!" << endl;
    cin >> input;
    if(input==2){
      cout << "You input 2, the only even prime number! " << endl;
    } else if(input==3){
      cout << "You input 3, the first odd prime number! (subject to controversy) " << endl;
    } else if(input%2==0){
        cout << "Your number is even, it's divisible by 2!" << endl;
    } else {
        // successively divide the input number by every number >=1 and <= input
        int i;
        for(i=3;i<input;i+=2){
            if(input%i==0){
                cout << "Your number is NOT prime! " << i << " divides it!" << endl;
                break;
            }
        }
      if(i>=input){
          cout << "Your number is prime! " << endl;
      }
    }
}
