#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
   if (argc < 3) {
	cout  << "Not enough arguments.";
	exit(0);
	} 
   string k = argv[2];
    int  key = stoi(k);
    string N = argv[1] ;
    int number = stoi(N);
    if ((key <= 0)||(number < 0)) {
	cout << "You can not divide by zero or the number is wrong";
	exit(0);
	}
    cout<<"Number of stairs: " <<number << "\n";
    cout<<"Giant can step over: " <<key << "\n";
   // if he can overstep k stairs, then he will stand no (k+1)-th stair after first step and so on
    int amount = number /(key +1);
    cout<<" the total number of stairs the Giant steps is: " << (key +1) * amount; 
    return 0;
}
