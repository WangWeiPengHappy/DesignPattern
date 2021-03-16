//
//  Worker.cpp
//  DesignPattern
//
//  Created by Eric on 2021/3/15.
//

#include "Worker.hpp"
#include <iostream>
using namespace std;

void Worker::Work()
{
    cout << "Worker::Work" << endl;
}


void WorkerLeader::Work()
{
    cout << "WorkerLeader::Work " << endl;
}
