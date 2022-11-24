//
// Created by Aditya Ved on 24/11/22.
//
#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()
{
    map<int,int> my_map1;
    my_map1.insert({1,10});
    my_map1.insert({2,20});
    my_map1.insert({3,30});
    my_map1.insert({4,40});
    my_map1.insert({5,50});

    map<int, int>::iterator itr;
    itr = my_map1.begin();

    int key = 7;
    int flag=0;
    while(itr != my_map1.end())
    {
        if(itr->first == key )
        {
            cout << "Found key : " << itr->first << "\t\t whose value is : " << itr->second << endl;
            flag = 1;
            break;
        }
        itr++;
    }

    if(flag ==0)
    {
        cout << "Did not find key :  " << key << "   in map" << endl;
    }

    my_map1.clear();
    return 0;
}
