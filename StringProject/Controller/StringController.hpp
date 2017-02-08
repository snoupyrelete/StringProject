//
//  StringController.hpp
//  StringProject
//
//  Created by Robson, Dylan on 2/2/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef StringController_hpp
#define StringController_hpp

#include <string>
using namespace std;

class StringController
{
private:
    double * doubleArray;
    int doubleSize;
    void buildArray();
    
    string emptyString;
    string fullString;
    void numberMethods();
    
public:
    StringController();
    void start();
};

#endif /* StringController_hpp */
