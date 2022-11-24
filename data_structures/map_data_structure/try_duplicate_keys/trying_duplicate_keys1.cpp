//
// Created by Aditya Ved on 24/11/22.
//

#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()
{
    cout << "hi";
    cout << endl;

    map<int,int> my_map1;
    my_map1.insert({1,40});
    my_map1.insert({2,30});
    my_map1.insert({2,20});
    my_map1.insert({2,40});
    my_map1.insert({6,50});
    map<int, int>::iterator itr;
    itr = my_map1.begin();

    while(itr != my_map1.end())
    {
        cout << "key : " << itr->first << "\tvalue : " << itr->second << endl;
        itr++;
    }


    if(my_map1.find(1) != my_map1.end())
    {

    }

    return 0;
}


