//
// Created by Aditya Ved on 24/11/22.
//

// CPP Program to demonstrate the implementation in Map

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
    my_map1.insert(pair<int, int>(3, 60));
    my_map1.insert(pair<int, int>(4, 20));
    my_map1.insert(pair<int, int>(5, 50));
    my_map1.insert(pair<int, int>(6, 50));

    my_map1[7]=10;	 // another way of inserting a value in a map


    // printing map my_map1
    map<int, int>::iterator itr;
    cout << "\nThe map my_map1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = my_map1.begin(); itr != my_map1.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
    cout << endl;

    // assigning the elements from my_map1 to my_map2
    map<int, int> my_map2(my_map1.begin(), my_map1.end());

    // print all elements of the map my_map2
    cout << "\nThe map my_map2 after" << " assign from my_map1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = my_map2.begin(); itr != my_map2.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
    cout << endl;

    // remove all elements up to
    // element with key=3 in my_map2
    cout << "\nmy_map2 after removal of"
            " elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    my_map2.erase(my_map2.begin(), my_map2.find(3));
    for (itr = my_map2.begin(); itr != my_map2.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }

    // remove all elements with key = 4
    int num;
    num = my_map2.erase(4);
    cout << "\nmy_map2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = my_map2.begin(); itr != my_map2.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }

    cout << endl;

    // lower bound and upper bound for map my_map1 key = 5
    cout << "my_map1.lower_bound(5) : "
         << "\tKEY = ";
    cout << my_map1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = " << my_map1.lower_bound(5)->second
         << endl;
    cout << "my_map1.upper_bound(5) : "
         << "\tKEY = ";
    cout << my_map1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << my_map1.upper_bound(5)->second
         << endl;

    return 0;
}
