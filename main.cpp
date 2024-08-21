//
//  main.cpp
//  Calculator
//
//  Created by Zaimone Miranda on 8/21/24.
//

#include <iostream>
#include <string>
#include <fstream>
#include <queue>

using namespace std;

class Calculator {
protected:
    double Add1;
    double Add2;
    double Sub1;
    double Sub2;
    double Mult1;
    double Mult2;
    double Div1;
    double Div2;
    int Choice;
    
    double ADD;
    double SUB;
    double MULTI;
    double DIV;
    
    
public:
    double Addition(){
        return ADD = Add1 + Add2;
    }

    double Subtraction(){
        return SUB = Sub1 - Sub2;
    }
    
    double Multiplication(){
        return MULTI = Mult1 * Mult2;
    }
    
    double Division(){
        return DIV = Div1 / Div2;
    }
    
    void Menu(){
        do {
            cout <<"\nCALCULATOR" << endl;
            cout <<"1. Addition" << endl;
            cout <<"2. Subtraction" << endl;
            cout <<"3. Multiplication" << endl;
            cout <<"4. Division" << endl;
            cout <<"5. Exit" << endl;
            cout <<"Enter your choice: ";
            cin >> Choice;
            
            switch (Choice) {
                case 1:
                    cout <<"Enter the 1st Number: ";
                    cin >> Add1;
                    cout <<"Enter the 2nd Number: ";
                    cin >> Add2;
                    cout <<"Result: " << Add1 <<" + "<< Add2 <<" = " << Addition() << endl;
                    break;
                    
                case 2:
                    cout <<"Enter the 1st Number: ";
                    cin >> Sub1;
                    cout <<"Enter the 2nd Number: ";
                    cin >> Sub2;
                    cout <<"Result: " << Sub1 <<" - "<< Sub2 <<" = " << Subtraction() << endl;
                    break;
                    
                case 3:
                    cout <<"Enter the 1st Number: ";
                    cin >> Mult1;
                    cout <<"Enter the 2nd Number: ";
                    cin >> Mult2;
                    cout <<"Result: " << Mult1 << " X " << Mult2 <<" = "<<Multiplication() << endl;
                    break;
                    
                case 4:
                    do {
                        cout <<"Enter the 1st Number: ";
                        cin >> Div1;
                        cout <<"Enter the 2nd Number: ";
                        cin >> Div2;
                        if (Div2 == 0){
                            cout <<"Error. Cannot Compute\n";
                        }
                    } while (Div2 == 0);
                    cout <<"Result: " << Div1 << " / " << Div2 << " = "<< Division() << endl;
                    break;
                    
                case 5:
                    cout <<"Program Ended. Thank you\n";
                    exit(0);
                    break;
                    
                default:
                    cout <<"Please enter the correct option" << endl;
                    break;
            }
            
        } while (Choice != 5);
        
    }
    
};

class Account{
protected:
    string Name;
    string BirthdayM;
    int BirthdayD;
    int BirthdayY;
    string Address;
    string AccountNum;
    
public:
    
    void Set_Birthday(){
        cout <<"Enter your Birthday: \n";
        cout <<"Month: ";
        cin >> BirthdayM;
        
        do {
            cout <<"Day: ";
            cin >> BirthdayD;
            if (BirthdayD > 31 || BirthdayD < 1){
                cout <<"Invalid Date. Try Again" << endl;
            }
        } while (BirthdayD > 31 || BirthdayD < 1);
        
        cout <<"Year: ";
        cin >> BirthdayY;
        if(2024 - BirthdayY < 18){
            cout <<"You are not allowed to enter the App" << endl;
            exit(0);
        }
        
    }
    
    string AccountNumber(){
        int randomNum = rand() % 9000 + 1000;
        string StringRandNum = to_string(randomNum);
        
        AccountNum = to_string(BirthdayY) + StringRandNum;
        return AccountNum;
    }
    
    void Create_Account(){
        cout <<"Create an Account\n";
        cout <<"Enter your Name: ";
        getline(cin, Name);
        Set_Birthday();
        cout <<"Account Details: " << endl;
        cout << Name << endl;
        cout << BirthdayM <<" / "<< BirthdayD <<" / "<< BirthdayY << endl;
        cout << AccountNumber() << endl;
    }
    
};



int main(int argc, const char * argv[]) {
    // insert code here...
    Calculator Calc;
    Account Acc;
    
    // Calc.Menu();
    
    Acc.Create_Account();
    
    return 0;
}
