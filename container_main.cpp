#include <iostream>
#include "container.h"
#include <vector>
#include "container.h"

int main() {
    int yourMark = 1;
    
    //2-es
    Container<int> c1;
    c1.insert(1);
    c1.insert(2);
    c1.insert(2);
    c1.insert(3);

    const Container<char> c2;
    
    if (c1.size() == 4 && c2.size() == 0) {
        yourMark++;
    }

    //3-as
    Container<double> c3;
    c3.insert(1.1);
    c3.insert(1.1);
    if (c1.count(2) == 2 && c3.count(1.1) == 2) {
        yourMark++;
    }

    //4-es
    std::vector<int> items;
    items.push_back(2);
    items.push_back(55);

    const Container<int> c4(items);
    if (c1.max() == 3 && c3.max() == 1.1 && c4.max() == 55) {
        yourMark++;
    }

    //5-ös
    c1.removeMax();
    
    Container<int> c5;
    c5.removeMax();

    if (c1.size() == 3 && c1.max() == 2) {
        yourMark++;
    }

    std::cout << "Your mark: " << yourMark << std::endl;
    return 0;
}