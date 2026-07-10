#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<string> expression;
    stack<int> calc;
    int choice = 0;
    cout<<"Enter the expression you want to evaluate(left-Right)"<<endl;
    while(true) {
        cout<<"----------------"<<endl;
        cout<<"1->Give your input"<<endl;
        cout<<"2->Stop and start Evaluation"<<endl;
        cout<<"----------------"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        if(choice==1) {
            string s;
            cout<<"Your input is:- ";
            cin>>s;
            expression.push_back(s);
        }
        else if(choice==2) {
            cout<<"User has given their input..."<<endl;
            break;
        }
        else{
            cout<<"Invalid choice..Enter Again"<<endl;
        }
    }

    for(int i=0; i<(expression.size()); i++) {
        string curr = expression[i];
        if(curr=="+"||curr=="-"||curr=="*"||curr=="/") {
            if(calc.size()<2) {
                cout<<"Not enough numbers to evaluate.."<<endl;
                return 1;
            } else{
                int val2 = calc.top();
                calc.pop();
                int val1 = calc.top();
                calc.pop();
            if(curr == "+") {
                calc.push(val1 + val2);
            }
            else if(curr == "-") {
                calc.push(val1 - val2);
            }
            else if(curr == "*") {
                calc.push(val1 * val2);
            }
            else if(curr == "/") {
                if(val2 == 0) {
                    cout << "Fatal Error: Cannot divide by zero!" << endl;
                    return 1; 
                }
                calc.push(val1 / val2);
            }
            }
        }
        else{
            try {
                int num = stoi(curr);
                calc.push(num);
            } 
            catch (const invalid_argument& e) {
                cout << "Fatal Error: Invalid input detected ('" << curr << "' is not a number or valid operator)." << endl;
                return 1;
            }
        }
    }

    if(calc.size()==1) {
        cout<<"-----------------------------"<<endl;
        cout<<"The Final result of the evaluation is:- "<<calc.top();
    }
    else{
        cout<<"Error occured re enter and re evaluate the expression"<<endl;
    }

    return 0;
}