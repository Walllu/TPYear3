#include <iostream>

using namespace std;

int main()
{
    float cost, change, payed, left;
    int hundreds, fifties, twenties, tens, fivers, pounds, fifp, twep, tenp, fivp, twop, onep;
    hundreds = 0; // initialize with value of 0
    fifties = 0;
    twenties = 0;
    tens = 0;
    fivers = 0;
    pounds = 0;
    fifp = 0;
    twep = 0;
    tenp = 0;
    fivp = 0;
    twop = 0;
    onep = 0;
    //char input[50];
	// This program should be able to accept either a change amount, or calculate it
    // then provide the least amount of notes/coins of each type needed to produce it
    cout << "Please provide either the change required, or the cost and payment aquired." << endl;
    cout << "Use the following format \"25.01\" to mean 25 pounds, 1 pence." << endl;
    //cin.getline(input, 50); // get user input, test to see which case
    cin >> change;
    cout << change << endl;
    left = change;
    // A loop to remove the largest possible note from the remainder, 
    while(left>0){
        if(left-100>=0){
            hundreds+=1;
            left-=100;
        } else if (left-50>=0){
            fifties+=1;
            left-=50;
        } else if(left-10>=0){
            tens+=1;
            left-=10;
        } else if(left-5>=0){
            fivers+=1;
            left-=5;
        } else if(left-1>=0){
            pounds+=1;
            left-=1;
        } else if(left-0.5>=0){
            fifp+=1;
            left-=0.5;
        } else if(left-0.2>=0){
            twep+=1;
            left-=0.2;
        } else if(left-0.1>=0){
            tenp+=1;
            left-=0.1;
        } else if(left-0.05>=0){
            fivp+=1;
            left-=0.05;
        } else if(left-0.02>=0){
            twop+=1;
            left-=0.02;
        } else if(left-0.01>=0){
            onep+=1;
            left-=0.01;
        }
    }
    // now we print the output!
    cout << "Number of 100 pound notes = " << hundreds << endl;
    cout << "Number of 50 pound notes = " << fifties << endl;
    cout << "Number of 20 pound notes = " << twenties << endl;
    cout << "Number of 10 pound notes = " << tens << endl;
    cout << "Number of 5 pound notes = " << fivers << endl;
    cout << "Number of 1 pound notes = " << pounds << endl;
    cout << "Number of 50 pence coins = " << fifp << endl;
    cout << "Number of 20 pence coins = " << twep << endl;
    cout << "Number of 10 pence coins = " << tenp << endl;
    cout << "Number of 5 pence coins = " << fivp << endl;
    cout << "Number of 2 pence coins = " << twop << endl;
    cout << "Number of 1 pence coins = " << onep << endl;

    return 0;
}	