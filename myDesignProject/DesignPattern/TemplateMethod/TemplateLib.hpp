//
//  TemplateLib.hpp
//  DesignPattern
//
//  Created by Eric on 2021/3/9.
//

#ifndef TemplateLib_hpp
#define TemplateLib_hpp

#include <stdio.h>
class TemplateLib
{
public:
    TemplateLib(){}
    virtual ~TemplateLib(){}
    
    void run();
    
protected:
    void step1();
    void step3();
    void step5();
    
    virtual void step2() =0;
    virtual void step4() =0;
};


#endif /* TemplateLib_hpp */
