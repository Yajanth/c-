#include<bits/stdc++.h>
using namespace std;
int main() {
    list<int> ls;
    ls.push_back(10); // inserts a copy of a number at the end
    ls.emplace_back(12); // inserts the number at the end of the list
    for (auto it = ls.begin(); it != ls.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    ls.push_front(1); // inserts a number at the beginning -- better time complexity than insert()
    ls.emplace_front(2); // inserts a number at the beginning
    for (auto it = ls.begin(); it != ls.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Begin: " << *ls.begin() << endl << "End: " << *prev(ls.end()) << endl; // Dereference iterators to print the values
    return 0;
}
