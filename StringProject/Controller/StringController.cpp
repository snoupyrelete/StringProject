//
//  StringController.cpp
//  StringProject
//
//  Created by Robson, Dylan on 2/2/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include <iostream>
#include "StringController.hpp"


StringController :: StringController()
{
    emptyString = "";
    fullString = "blaegh";
    
    // create double and int array
    
//    int * name;
//    name = new int[5];
//    
    int intArray[5];
    
    intArray[2] = 3;
    
    cout << "@ the 2nd index of the array, the value is: " << intArray[2] << endl;
    cout << "@ the 4th index of the array (unset value) the value is: " << intArray[4] << endl;
    cout << "\n" << endl;
    
    this->doubleSize = 5;
    this->doubleArray = new double[doubleSize];
    buildArray();
    cout << "\n" << endl;
    
    
}

void StringController :: start()
{
    numberMethods();
    
}

void StringController :: buildArray()
{
    for (int iterator = 0; iterator < doubleSize; iterator++)
    {
        doubleArray[iterator] = iterator * 2;
        cout << "@ the " << iterator << " index of the array, the value is: " << doubleArray[iterator] << endl;
    }
}

void StringController :: numberMethods()
{
    // empty() returns 0 if not empty and 1 if it is empty.
    // Empty
    cout << "the empty string is: " <<emptyString.empty() << endl;
    cout << "the full string is: " << fullString.empty() << endl;
    
    // Size
    cout << "the empty string's size is: " << emptyString.size() << endl;
    cout << "the full string's size is: " << fullString.size() << endl;
    
    // Substring
    cout << "substring of fullString from 2-3: "<< fullString.substr(2,3) << endl;
    cout << "substring of fullString from 2-end : " << fullString.substr(2) << endl;
    
    // compare() returns 0 if they're the same of -1 if they're not the same
    // Compare
    cout << "comparing emptyString to fullString: " << emptyString.compare(fullString)<< endl;
    cout << "comparing fullString to fullString: " << fullString.compare(fullString) << endl;
    
    // At
    cout << "using at on index 3 of fullString: " << fullString.at(3) << endl;
    
    // []
    cout << "using [] brackets at index 3 of fullString : " << fullString[3] << endl;
}
