//
//  escape.h
//  Julia_Set
//
//  Created by Jeffrey Haberle on 9/20/16.
//  Copyright © 2016 CS3005. All rights reserved.
//

#ifndef escape_h
#define escape_h

class escape
{
public:
    escape();
    void escapeValue();
    
protected:
    int mP, mWidth, mHeight, mIter;
    double mA, mB;
    
};

#endif /* escape_h */
