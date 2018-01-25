//
//  main.cpp
//  10035 - Primary Arithmetic
//
//  Created by Nur Islam on 6/18/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    string s1,s2;
    
    while(1)
    {
        cin >> s1 >> s2;
        if( s1 == "0" && s2 == "0" ) break;
        int Carries = 0,Count = 0,tempDigit1,tempDigit2;
        
        int Length1 = (int)s1.size() - 1;
        int Length2 = (int)s2.size() - 1;
        
        while( Length1 >= 0 || Length2 >= 0 )
        {
            if( Length1 >= 0 )
            {
                tempDigit1 = s1.at(Length1) - '0';
                Length1--;
            }
            else tempDigit1 = 0;
            
            if( Length2 >= 0 )
            {
                tempDigit2 = s2.at(Length2) - '0';
                Length2--;
            }
            else tempDigit2 = 0;
            
            if( Carries + ( tempDigit1 + tempDigit2 ) > 9 )
            {
                Count++;
                Carries = 1;
            }
            else Carries = 0;
        }
        if( Count == 0 ) cout << "No carry operation." << endl;
        else if( Count == 1 ) cout << Count << " carry operation." << endl;
        else cout << Count << " carry operations." << endl;
    }
    return 0;
}
