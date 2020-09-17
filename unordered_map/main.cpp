//
// Created by Oscar Maldonado on 2019-06-12.
//
#include <iostream>
#include "unordered_map.h"

/*
 This project was created by Oscar Maldonado
 Data Structures
 Unordered_maps
 
 Description: In this project we will create hash tables
 
 */


    using namespace std;

    int main()
    {
        unordered_map<string, string> h(7);

        cout << "h # count = " << h.bucket_count() << endl;
        cout << "h size = " << h.size() << endl;

        cout << "Insert a few pairs\n";
        h.insert(pair<string, string>("Red", "123 Main"));
        h.insert(pair<string, string>("Brown", "45 First"));
        h.insert(make_pair("Blue", "20 2nd St")); // make_pair() also works and is simpler

        h["Jack"] = "500 E St";
        h["Jill"] = "400 Lakewood";
        h["Jake"] = "2 Sierra Madre";

        cout << "h # count = " << h.bucket_count() << endl;
        cout << "h size = " << h.size() << endl;

        cout << "Lookup a few values\n";
        cout << "Brown:" << h["Brown"] << endl;
        cout << "Green:" << h["Green"] << endl; // adds pair ("Green", "")
        cout << "Jack:" << h["Jack"] << endl;
        cout << "One more:" << h["One more"] << endl;

        cout << "h # count = " << h.bucket_count() << endl;
        cout << "h size = " << h.size() << endl;

        cout << "h Everything\n";
        h.print();

        cout << "Modify Red's value\n";
        h["Red"] = "1234 Main St";

        cout << "h Again\n";
        h.print();

        return 0;

}
