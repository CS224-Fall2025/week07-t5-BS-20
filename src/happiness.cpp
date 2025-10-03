#include <iostream>
using namespace std;


void FindHappiness(int n);

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    do{
        if (n < 1){
            cout << "Invalid input! Try again! " ;
            cin >> n;
        }
    }
    while ( n < 1);
    FindHappiness(n);
    return 0;
}


void FindHappiness(int n){
    while ( n > 9){
        int sum = 0;
        while ( n > 0){
            int r = n % 10;
            n = n / 10;
            sum += (r * r);
        }
        n = sum; 
    }

    if (n == 1 ) cout << "Happy Number!" << endl;
    else cout << "Sad Number!" << endl;
}
