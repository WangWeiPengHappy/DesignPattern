//
//  IWorker.hpp
//  DesignPattern
//
//  Created by Eric on 2021/3/16.
//

#ifndef IWorker_hpp
#define IWorker_hpp

#include <stdio.h>

class IWorker
{
public:
    virtual void Work() = 0;
    
public:
    IWorker(){};
    virtual ~IWorker(){};
};

#endif /* IWorker_hpp */
