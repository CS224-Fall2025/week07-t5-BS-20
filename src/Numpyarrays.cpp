#include <iostream>
using namespace std;

class Numpyarray{
    private:
        int arr[10] = {0};
        const int size;
    public:
        Numpyarray(int size): size(size) {};

        friend istream& operator >>(istream& in, Numpyarray &a){
            for (int i = 0; i < a.size; i++){
                in >> a.arr[i];
            }
        }

        Numpyarray operator +(Numpyarray& array){
            Numpyarray result(size); 
            for (int i = 0; i < size; i++){
                result.arr[i] =  arr[1] + array.arr[i];
            }
            return result;
        }

        Numpyarray operator +(int n){
            Numpyarray result(size); 
            for (int i = 0; i < size; i++){
                result.arr[i] =  arr[1] + n;
            }
            return result;
        }
        void hello() {}
};


int main(){
    // Numpyarray *ptr = new Numpyarray(5);
    // ptr->hello();
    
    int size;
    cin >> size;
    Numpyarray np1(size);
    cin >> np1;
    // operator >>np1(cin);
    
}