#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device nd;  // seed
    mt19937 gen(nd()); // Mersenne Twister generator

    uniform_int_distribution<> distrib(1, 3); // range 1 to 100
    int i=0;
while(i<5){
    int randomNumber = distrib(gen);

    cout << "Random Number: " << randomNumber << endl;
	i++;
}    return 0;
}