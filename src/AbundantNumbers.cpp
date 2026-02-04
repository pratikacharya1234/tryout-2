#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
string abundantNum(){
    //For testing purposes. Please leave in the program
    string testResult;
    stringstream ss_input;
    stringstream ss_result;
    int numInput = 0;
    int numSum = 0;
    string result;
    
    //TODO: Create a loop that will execute the program until the user inputs -1
    while(numInput != -1) {
        cout << "Enter a number (-1 to quit): ";
        //TODO: Prompt the user to input a number. Use the numInput variable.
        cin >> numInput;
        
        //TODO: Create the main logic that will calculate if a number is abundant
        //      Start by creating a for loop that will iterate from 1 to the number
        //      that the user input.
        if(numInput != -1) {  // Only process if not the quit command
            for(int i = 1; i < numInput; i++) {
                //TODO: If numInput has a remainder then i is NOT a divisor
                //      If numInput does NOT have a remainder then add it to numSum
                if(numInput % i == 0) {  // No remainder means i is a divisor
                    numSum += i;
                }
            }
            
            //TODO: compare numSum to numInput. Using an if-else statement the result variable
            //      should say one of the following statements:
            //      result = "a deficient number"
            //      result = "a perfect number"
            //      result = "an abundant number"
            if(numSum < numInput) {
                result = "a deficient number";
            } else if(numSum == numInput) {
                result = "a perfect number";
            } else {  // numSum > numInput
                result = "an abundant number";
            }
            
            cout << numInput << " is " << result << endl;
            
            //For testing purposes. Please leave in the program
            ss_input << numInput;
            ss_result << result;
            testResult += ss_input.str() + " is " + ss_result.str() + " ";
            ss_input.str(""); // Clear the stringstream after use
            ss_input.clear(); // Clear any error flags
            ss_result.str("");
            ss_result.clear();
            
            //TODO: Finally, remember to set numSum back to 0
            numSum = 0;
        }
    }
     
    return testResult;
}
#ifndef TESTING
int main(){
    abundantNum();
    return 0;
}
#endif
