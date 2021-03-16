//
//  Boss.hpp
//  DesignPattern
//
//  Created by Eric on 2021/3/15.
//

#ifndef Boss_hpp
#define Boss_hpp

#include <stdio.h>
#include "IWorker.hpp"
class Boss
{
public:
    Boss(){}
    Boss(IWorker* pIWorker);
    ~Boss();
public:
    void EarnMoney();
    
private:
    IWorker* m_pIWorker;
};

#endif /* Boss_hpp */
