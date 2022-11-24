//
// Created by Aditya Ved on 24/11/22.
//

#include <iostream>
#include <iterator>
#include <map>
using namespace std;

// data_structures/map_data_structure/checking_map_updation_in_fxn_call.cpp

void insert_new_call_by_value(map<int ,int> my_map1);
void display_map(map<int ,int> my_map1);
void insert_new_call_by_ref(map<int ,int> * ptr_to_my_map1);

int main()
{
    map<int ,int> my_map1;
    my_map1.insert({1,10});
    insert_new_call_by_value(my_map1);
    insert_new_call_by_ref(&my_map1);
    display_map(my_map1);
    return 0;
}

void insert_new_call_by_value(map<int ,int> my_map1)
{
    my_map1.insert({2,20});
}

void display_map(map<int ,int> my_map1)
{
    map<int,int> :: iterator itr;
    itr = my_map1.begin();
    while(itr != my_map1.end())
    {
        cout << itr->second << endl;
        itr++;
    }
}

void insert_new_call_by_ref(map<int ,int> * ptr_to_my_map1)
{
    ptr_to_my_map1->insert({3,30});
}