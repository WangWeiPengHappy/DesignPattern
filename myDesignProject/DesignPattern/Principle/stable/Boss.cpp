//
//  Boss.cpp
//  DesignPattern
//
//  Created by Eric on 2021/3/15.
//

#include "Boss.hpp"
#include "Worker.hpp"

Boss::Boss(IWorker* pIWorker)
{
    m_pIWorker = pIWorker;
}


void Boss::EarnMoney()
{
    m_pIWorker->Work();
}
