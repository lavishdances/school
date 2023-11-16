// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.
// Alex DeGhetto

#include <iostream> 
using namespace std;

const int AT_BAT = 421; 
const int HITS = 123;
int main() {
float batAvg;
float hit=HITS, bat=AT_BAT;
batAvg = hit / bat; // assignment statement
cout << "The batting average is " << batAvg << endl; //output results
return 0;
}