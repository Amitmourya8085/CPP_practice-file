#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device rd;  // seed
    mt19937 gen(rd()); // Mersenne Twister generator

    uniform_int_distribution<> distrib(1, 1000); // range 1 to 100

    int randomNumber = distrib(gen);

    cout << "Random Number: " << randomNumber << endl;

    return 0;
}