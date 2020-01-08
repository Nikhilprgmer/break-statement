#include <iostream>

using namespace std;

int main()
{
    int weeknumber;
    cout<<"enter week number (1-7):";
    cin>>weeknumber;
    switch(weeknumber)
    {
        case 1: cout<<"monday";
            break;
        case 2: cout<<"tuesday";
            break;
        case 3: cout<<"wednesday";
            break;
        case 4: cout<<"thursday";
            break;
        case 5: cout<<"friday";
            break;
        case 6: cout<<"suterday";
            break;
        case 7: cout<<"sunday";
            break;
        default: cout<<"invalid input!please enter week n0. between no. 1-7.";

    }
    return 0;
}
