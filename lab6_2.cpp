#include <iostream>
using namespace std;
#include <cmath>
int main(){
    int sum = 0;
    int count = 3;

while(count <= 300){
    sum += count*count;
    count++;
}
    cout << "result = "<< sum;

    return 0;
}
