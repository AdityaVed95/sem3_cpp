//
// Created by Aditya Ved on 24/11/22.
//

#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()
{
    // empty map container
    map<int, int> my_map1;

    // insert elements in random order
    my_map1.insert(pair<int, int>(1, 40));
    my_map1.insert(pair<int, int>(2, 30));
    my_map1.insert(pair<int, int>(2, 60));
    my_map1.insert(pair<int, int>(2, 20));
    my_map1.insert(pair<int, int>(2, 50));
    my_map1.insert(pair<int, int>(6, 50));

    return 0;
}
