#include <iostream>

using namespace std;

int main(){
    for(int y = 0; y < 12;y ++){
        for(int x  = 0 ; x< 12; x++){
            if(x == 0 || y == 0 || y == 11 || x == 11 ) cout << "*" << " ";
            else if( ( x == 2 && y>= 2 && y<=9 ) || ( y == 2 && x>= 2 && x<=9 ) || ( x == 9 && y>= 2 && y<=9 ) || ( y == 9 && x>= 2 && x<=9 ))cout << "*" << " ";
            else if( ( x == 4 && y>= 4 && y<=7 ) || ( y == 4 && x>= 4 && x<=7 ) || ( x == 7 && y>= 4 && y<=7 ) || ( y == 7 && x>= 4 && x<=7 ))cout << "*" << " ";
            else cout << "  ";
        }
        cout << endl;

    }
    return 0;
}