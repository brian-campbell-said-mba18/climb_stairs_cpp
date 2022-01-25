#include"solutions.h"
using namespace std;

int main(){
    int input = -1;
    while(input < 0){
        cout << "Input a value greater than or equal to 0: ";
        cin >> input;
        cout << endl;
        if(input >=0){
            cout << "Input: " << input << " is valid" << endl;
        }else{
            cout << "Input: " << input << " NOT valid" << endl;
        }
    }
    
    cout << endl;
    cout << "Testing solution for input " << input << "..." << endl;

    Solution test;
    int ans = test.climbStairs(input);
    cout << "The answer for input " << input << " is: " << ans;


    return 0;
}