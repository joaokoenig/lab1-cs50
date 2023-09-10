#include <iostream> 
#include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main(){
    
    int startPop;
    int finalPop;
    int years;

    do{
        cout << "Insert the starting size of the population: ";
        cin >> startPop;
    } while(startPop < 9);

    do{
        cout << "Insert the goal of population to reach: ";
        cin >> finalPop;
    }while(finalPop <= startPop);

    while (startPop < finalPop)
    {
        startPop = startPop + (startPop / 3) - (startPop / 4);
        years++;
    }
    

    cout << endl;
    cout << "It took " << years << " to reach the goal population." << endl;
    return 0;

}