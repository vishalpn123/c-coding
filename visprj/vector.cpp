#include <iostream>
#include <vector>  
using namespace std;

int main() {
    vector<int> numbers;


    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);


    cout << "Elements in the vector:" << endl;
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

   
    cout << "Size of the vector: " << numbers.size() << endl;

    return 0;
}
