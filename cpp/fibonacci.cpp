#include <iostream>
using namespace std;


// A recursive function that returns the nth fibonacci number
int fibonacci_nth(int n){
    int next;
    if(n==1 || n==2){
        return 1;
    } else {
        next = fibonacci_nth(n-1) + fibonacci_nth(n-2);
        if(next<0){
            return 0;  // return zero if the integer is overflowed
        } else {
            return next;
        }
    }
}

int main(){
    // This program asks for the user to input an integer, representing the index of the Fibonacci number that they'd like to see
    // then, it recursively calculates the nth fibonacci number in the sequence
    int input, answer;
    cout << "Type in the index of the Fibonacci you would like to see." << endl;
    cin >> input;
    answer = fibonacci_nth(input);
    if(answer==0){
        cout << "This index is too large, overflow error." << endl;
    } else {
        cout << answer << endl;
    }
}
