//
// Created by Aditya Ved on 24/11/22.
//

#include <iostream>
#include <iterator>
#include <map>
using namespace std;

void insert_pair_in_map(map<int,int> * ptr_to_my_map);
void remove_pair(map<int,int> * ptr_to_my_map);
void find_pair(map<int,int> my_map);
void display_all_pairs(map<int,int> my_map);

int main()
{
    map<int,int> my_map1;

    while(true)
    {
        cout << "Enter 1 to add a key value pair to the map\n";
        cout << "Enter 2 to remove a key value pair from the map\n";
        cout << "Enter 3 to find the value for a particular key\n";
        cout << "Enter 4 to display all key value pairs in the map\n";
        cout << "Enter 5 to exit";
        cout << endl;

        int response;
        cin >> response;

        if(response == 1)
        {
            insert_pair_in_map(&my_map1);
        }

        else if(response == 2)
        {
            remove_pair(&my_map1);
        }

        else if(response == 3)
        {
            find_pair(my_map1);
        }

        else if(response == 4)
        {
            display_all_pairs(my_map1);
        }
        else if(response == 5)
        {
            break;
        }

        else
        {
            cout << "Invalid input please try again !!!\n";
        }

    }


    return 0;
}


void insert_pair_in_map(map<int,int> * ptr_to_my_map)
{
    int key;

    while(true)
    {
        cout << "Enter the key to be inserted" << endl;
        cin >> key;

        map<int, int>::iterator itr;
        itr = ptr_to_my_map->begin();

        int flag=0;

        // checks for all the keys in the map
        while(itr != ptr_to_my_map->end())
        {
            if(itr->first == key )
            {
                cout << "A pair with given key already exists , please try again " << endl;
                flag = 1;
                break;
            }
            itr++;
        }

        if(flag == 1)
        {
            continue;
        }

        if(flag == 0)
        {
            cout << "Successfully Verified that new key is unique" << endl;
            break;
        }
    }

    cout << "Enter the value for the given key" << endl;
    int value;
    cin >> value;
    ptr_to_my_map->insert({key, value});


}

void remove_pair(map<int,int> * ptr_to_my_map)
{
    int key;

    while(true)
    {
        cout << "Enter the key of the pair to be deleted" << endl;
        cin >> key;
        map<int, int>::iterator itr;
        itr = ptr_to_my_map->find(key);
        if(itr != ptr_to_my_map->end())
        {
            // given key exists
            cout << "Successfully verified the existence of the key to be deleted" << endl;
            break;
        }
        else
        {
            cout << "No pair with given key exists in the map , please try again " << endl;
        }
    }

    ptr_to_my_map->erase(key);
    cout << "Successfully deleted the given key value pair from the map " << endl;

}

void find_pair(map<int,int> my_map)
{
    cout << "Enter the key of the pair to be searched" << endl;
    int key;
    cin >> key;

    if(my_map.find(key) == my_map.end())
    {
        cout << "Did not find a pair in the map with the given key" << endl;
    }
    else
    {
        cout << "Pair with given key exists in the map : " << endl;
        cout << "Key : " << key << "\t\t Value : " << my_map.find(key)->second << endl;
    }
}

void display_all_pairs(map<int,int> my_map)
{
    map<int, int>::iterator itr;
    itr = my_map.begin();
    cout << "\nDisplaying all key value pairs inside the map " << endl;
    while(itr != my_map.end())
    {
        cout << "Key : " << itr->first << "\t\t Value : " << itr->second << endl;
        itr ++;
    }
}