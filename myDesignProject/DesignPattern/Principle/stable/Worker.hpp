//
//  Worker.hpp
//  DesignPattern
//
//  Created by Eric on 2021/3/15.
//

#ifndef Worker_hpp
#define Worker_hpp

#include "IWorker.hpp"
#include <stdio.h>

class Worker: public IWorker
{
public:
    virtual void Work();
    
public:
    Worker(){};
    ~Worker(){};
   
};

class WorkerLeader: public IWorker
{
public:
    virtual void Work();
public:
    WorkerLeader(){};
    ~WorkerLeader(){};
};
#endif /* Worker_hpp */
