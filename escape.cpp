//
//  main.cpp
//  Julia_Set
//
//  Created by Jeffrey Haberle on 9/18/16.
//  Copyright © 2016 CS3005. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <fstream>
#include "escape.h"
using namespace std;

escape::escape()
:mWidth(0), mHeight(0), mP(0), mA(0), mB(0), mIter(0)
{
   //default constructor
}

//assigns escapevalue to points based on iteration escaped
void escape::escapeValue()
{
    
    ofstream myfile;
    string name;
    
    cout << "Grid width? ";
    cin >> mWidth;
    cout << "Grid height? ";
    cin >> mHeight;
    cout << "Parameter a? ";
    cin >> mA;
    cout << "Parameter b? ";
    cin >> mB;
    cout << "Maximum iterations? ";
    cin >> mIter;
    cout << "Output filename? ";
    cin >> name;
    
    myfile.open(name + ".txt");
    
    double deltaX = 4.0 / (mWidth-1);
    double deltaY = 4.0 / (mHeight-1);
    
    double old_x, old_y;
    double new_x, new_y;

    
    myfile << mWidth << " " << mHeight << " " << mIter <<endl;
    for (int row = 0; row < mHeight; row++)
    {
        for (int col = 0; col < mWidth; col++)
        {
            new_x = -2.0 + (col*deltaX);
            new_y = 2.0 - (row*deltaY);
            int i = 0;
            
            while (new_x*new_x + new_y*new_y < 4 && i < mIter)
            {
                old_x = new_x;
                old_y = new_y;
                
                new_x = old_x*old_x - old_y*old_y + mA;
                new_y = 2*old_x*old_y + mB;
                i++;
            }
            mP = i;
            //write to file
            myfile << mP <<" ";
        }
        myfile << endl;
    }
    myfile.close();
}



