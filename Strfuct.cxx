#include <iostream>
#include <string>
#include<algorithm>
#include<numeric>
using namespace std;

int main() {

    // Create string
    string s = "Amit";

    //  size() / length()
    cout << "Size: " << s.size() << endl;
    cout << "Length: " << s.length() << endl;

    //  empty()
    cout << "Is empty: " << s.empty() << endl;

    //  Access characters
    cout << "at(1): " << s.at(1) << endl;
    cout << "operator[]: " << s[1] << endl;
    cout << "front(): " << s.front() << endl;
    cout << "back(): " << s.back() << endl;

    //  append()
    s.append(" .");
    cout << "After append: " << s << endl;

    //  push_back()
    s.push_back('!');
    cout << "After push_back: " << s << endl;

    // pop_back()
    s.pop_back();
    cout << "After pop_back: " << s << endl;

    // insert()
    s.insert(5, ",");
    cout << "After insert: " << s << endl;

    //  erase()
    s.erase(5, 1);
    cout << "After erase: " << s << endl;

    // replace()
    s.replace(6, 5, "C++");
    cout << "After replace: " << s << endl;

    //  substr()
    cout << "Substring (0,5): " << s.substr(0, 5) << endl;

    //  find()
    cout << "Find C++: " << s.find("C++") << endl;

    // * rfind()
    string s2 = "abc abc abc";
    cout << "rfind abc: " << s2.rfind("abc") << endl;

    //   compare()
    string a = "hello";
    string b = "hello";
    cout << "Compare a & b: " << a.compare(b) << endl;

    //   clear()
    a.clear();
    cout << "After clear, is empty: " << a.empty() << endl;

    //   stoi()
    string num = "123";
    int x = stoi(num);
    cout << "stoi result: " << x + 10 << endl;

    //   to_string()
    int n = 500;
    string strNum = to_string(n);
    cout << "to_string: " << strNum << endl;

    //  * c_str()
    const char* ch = s.c_str();
    cout << "c_str(): " << ch << endl;

    //   getline()
    string line;
    cout << "Enter full line: ";
    getline(cin, line);
    cout << "You entered: " << line << endl;




    string s = "Amitmourya";

    // *sort()
    sort(s.begin(), s.end());
    cout << "Sorted: " << s << endl;

    //  reverse()
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s << endl;

    // 3 find()
    auto it = find(s.begin(), s.end(), 'a');
    if(it != s.end())
        cout << "Found 'a' at index: " << it - s.begin() << endl;

    //  count()
    cout << "Count of 'g': " << count(s.begin(), s.end(), 'g') << endl;

    //  count_if()
    cout << "Vowel count: "
         << count_if(s.begin(), s.end(), [](char c){
             return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
         }) << endl;

    // * unique() (remove adjacent duplicates)
    string s2 = "aaabbbcc";
    auto last = unique(s2.begin(), s2.end());
    s2.erase(last, s2.end());
    cout << "After unique: " << s2 << endl;

    //  remove()
    string s3 = "hello world";
    s3.erase(remove(s3.begin(), s3.end(), 'l'), s3.end());
    cout << "After remove 'l': " << s3 << endl;

    //   *remove_if()
    string s4 = "a1b2c3";
    s4.erase(remove_if(s4.begin(), s4.end(), ::isdigit), s4.end());
    cout << "After remove digits: " << s4 << endl;

    //   replace()
    string s5 = "cpp is fun";
    replace(s5.begin(), s5.end(), ' ', '_');
    cout << "After replace space: " << s5 << endl;

    //  * min_element() & max_element()
    cout << "Min char: " << *min_element(s.begin(), s.end()) << endl;
    cout << "Max char: " << *max_element(s.begin(), s.end()) << endl;

    //  * binary_search() (string must be sorted)
    sort(s.begin(), s.end());
    cout << "Binary search 'm': "
         << binary_search(s.begin(), s.end(), 'm') << endl;

    return 0;
}

