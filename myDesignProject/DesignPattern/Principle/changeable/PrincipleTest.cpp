//
//  PrincipleTest.cpp
//  DesignPattern
//
//  Created by Eric on 2021/3/15.
//

#include <stdio.h>
#include "Boss.hpp"
#include "Worker.hpp"
//#include "IWorker.hpp"

void PrincipleTest()
{
    IWorker *pWorker = new Worker();
    
    IWorker *pWorkerLeader = new WorkerLeader();

    Boss *pBoss1 = new Boss(pWorker);
    pBoss1->EarnMoney();
    
    Boss *pBoss2 = new Boss(pWorkerLeader);
    pBoss2->EarnMoney();

}
