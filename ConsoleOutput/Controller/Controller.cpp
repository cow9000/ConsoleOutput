//
//  Controller.cpp
//  ConsoleOutput
//
//  Created by Vawdrey, Derek on 1/23/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "Headers/Controller.hpp"
#include <iostream>

Controller::Controller(){
    this->myName = "Derek";
}

void Controller::start(){
    std::cout << this->myName << std::endl;
    
    for(int i = 13; i < 32; i++){
        std::cout << i << std::endl;
    }
    
    std::string *myNamePointer = &this->myName;
    std::cout << myNamePointer << std::endl;
    
    std::cout << "i" << " like " << "cheese" << std::endl;
    
}
