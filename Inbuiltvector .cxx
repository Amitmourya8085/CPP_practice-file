#include <iostream>
#include<vector>
#include<algorithm>//add stl mathlab ray soch
#include<numeric>
using namespace std;

int main() {
    vector<int> v;

    // push_back & emplace_back
    v.push_back(10);
    v.push_back(20);
    v.emplace_back(30);

    cout << "Vector elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // size, capacity, empty
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Is Empty: " << v.empty() << endl;

    // reserve
    v.reserve(10);
    cout << "Capacity after reserve(10): " << v.capacity() << endl;

    // insert
    v.insert(v.begin() + 1, 100);  // insert at index 1

    // erase
    v.erase(v.begin() + 2);        // erase v[2]other shiftup

    // pop_back
    v.pop_back();

    cout << "After insert, erase, pop_back: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // index access
    cout << "v[0]: " << v[0] << endl;
    cout << "v.at(1): " << v.at(1) << endl;

    // front & back
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    // resize
    v.resize(5, 7); // resize to 5, fill new with 7
    cout << "After resize: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // assign
    v.assign(5, 10);
    cout << "After assign(5,10): ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // shrink_to_fit capcity=size
    v.shrink_to_fit();
    cout << "Capacity after shrink_to_fit: " << v.capacity() << endl;

    // algorithms //plz bhai cheack stl before use
    vector<int> a = {5, 1, 4, 2, 3};

    sort(a.begin(), a.end());
    cout << "Sorted: ";
    for (int x : a) cout << x << " ";
    cout << endl;

    reverse(a.begin(), a.end());
    cout << "Reversed: ";
    for (int x : a) cout << x << " ";
    cout << endl;

    cout << "Max element: " << *max_element(a.begin(), a.end()) << endl;
    cout << "Min element: " << *min_element(a.begin(), a.end()) << endl;

    //cout << "Sum: " << accumulate(a.begin(), a.end(), 0) << endl;
    cout << "Count of 2: " << count(a.begin(), a.end(), 2) << endl;

    auto it = find(a.begin(), a.end(), 3);
    if (it != a.end())
        cout << "3 found at index: " << it - a.begin() << endl;
    else
        cout << "3 not found" << endl;

    // swap
    v.swap(a);
    cout << "After swap, v: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // clear
    v.clear();
    cout << "After clear, size: " << v.size() << endl;

    return 0;
}