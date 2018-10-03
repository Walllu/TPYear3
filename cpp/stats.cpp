#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //This program should take in an arbitrary number of real numbers
    int size;
    double input, mean, std, total;
    total = 0; // set total to zero, to tally up the numerator in the mean calculation
    cout << "Input the number of data points you'd like to input" << endl;
    cin >> size;
    int data[size];
    for(int i=0; i<size; i++){
        cout << "Input data point " << i+1 << endl;
        cin >> input;
        data[i] = input;
        total+=input;
    }
    mean = total/size; // compute the mean of the data set
    cout << "Thanks! Now let's calculate the mean and standard deviation of these data points..." << endl;
    cout << mean << endl;
    total = 0; // reset the total now to tally up the squared differences
    for(int i=0; i<size; i++){
        total+=pow((data[i]-mean), 2);
    }
    std = sqrt(total/(size-1)); // compute the standard deviation of the data set
    cout << std << endl;
    return 0;
}
