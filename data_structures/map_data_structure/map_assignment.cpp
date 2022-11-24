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
//    my_map1.insert({1,10});

    while(true)
    {
        cout << "Enter 1 to add a key value pair to the map\n";
        cout << "Enter 2 to remove a key value pair from the map\n";
        cout << "Enter 3 to find the value for a particular key\n";
        cout << "Enter 4 to exit\n";
        cout << endl;

        int response;
        cin >> response;

        if(response == 1)
        {

        }

        else if(response == 2)
        {

        }

        else if(response == 3)
        {

        }

        else if(response == 4)
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


void insert_pair_in_map()
{
    cout << "Enter the key to be inserted";
    int key;
    cin >> key;


}