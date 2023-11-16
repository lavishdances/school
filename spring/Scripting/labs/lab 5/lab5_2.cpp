#include<iostream> 
#include<cmath>
using namespace std;
int main() {
    int x = 5, y = 8, z = 10;
    cout << ( x < y || y > z ) << endl;
    cout << ( x < y && y > z ) << endl;
    cout << ( y < z ) << endl;
    cout << !( y < z ) << endl;
    cout << ( !( y < z ) || ( x < y ) ) << endl;
    cout << ( !( y > z ) && !( x > y ) ) << endl;
    cout << !x << endl;
    cout << ( x + y > z ) << endl;
    cout << !( x + y > z ) << endl;
    cout << ( ( x + y > z ) || !( z - x > y ) ) << endl;
    if ( x > y || y > x && z > y )
        cout << "a" << endl;
        cout << "b" << endl;
    if ( x + y && y + x > z )
        cout << "one" << endl;
    else
        cout << "two" << endl;
    if ( x + y >= y + z || z - y < x )
        {
            cout << "three" << endl;
}   else {
        cout << "four" << endl;
        }
  return 0;   
}