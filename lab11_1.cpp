#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main()
{
    cout << "Press Enter 3 times to reveal your future.\n";
    int i;
    for (i=0;i<3;i++){
    cin.ignore();}
    srand(time(0));
    string g;
    int x = rand()%9;
    if(x == 0) g ="A";
    else if (x == 1) g = "B+";
    else if (x == 2) g = "B";
    else if (x == 3) g = "C+";
    else if (x == 4) g = "C";
    else if (x == 5) g = "D+";
    else if (x == 6) g = "D";
    else if (x == 7) g = "F";
    else g = "W";
    
    cout << "You will get "<< g <<" in this 261102." ;
    }

