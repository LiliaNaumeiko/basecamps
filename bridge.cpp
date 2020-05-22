#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
   if (argc < 3) {
	cout  << "Not enough arguments.";
	exit(0);
	} 
   string d = argv[2];
    string n = argv[1] ;
    int distance = stoi(d);
    int  number = stoi(n);
    if ((0 > distance)||(number < 0)) {
	cout << "You can not divide by zero or the number is wrong";
	exit(0);
	}
	int amount = 0;
   // let me assume that the cable will be straigth
    for (int i = 1 ; i <= number; i++){
	amount = amount +i*distance; 
}
    cout<<" the total length of the cables: " << amount; 
    return 0;
}

