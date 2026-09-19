#include<iostream>
using namespace std;

float CheakBal(float x){
    return x;
}


float deposite (float x , float y){
    return x + y;
}


float withdraw(float x, float y){
    if(x > y ){
        float dep = x - y;
        return dep;
    }
    else {
        cout<<"               *********INSUFFINT BALANCE*****************       "<<endl;
       return x;
    }
    
}


int main (){
    float amount;
    int choise;
    float balance = 0.0;
    
    
    while(1){
        cout<<"\nPRESS ONE FOR TO CHECK BALANCE"<<endl<<"PRESS TWO FOR DEPOSITE"<<endl<<"PRESS THREE FOR WITHDRAW "<<endl<<"PRESS ANY NUMBER FOR EXIT\n"<<endl;
        cin>>choise;
        switch (choise){
            case (1):
         balance = CheakBal(balance);
            cout<<"YOUR ACCOUNT BALANCES = "<<balance;
            break;

            case(2):
            cout<<"ENTER A YOUR DEPOSITE AMOUNT: ";
            cin>>amount;
            cout<<"BEFORE DEPOSITE: "<<balance<<endl;
            balance = deposite(balance , amount );
            cout <<"AFTER DEPOSITE: "<<balance<<endl;
            break;

            case (3):
            cout<<"ENTER A WITHDRAW AMOUNT : ";
            cin>>amount;
            cout<<"BEFORE WITHDRAW: "<<balance<<endl;
            balance = withdraw(balance , amount );
            
            cout <<"AFTER WITHDRAW: "<<balance<<endl;
            break;
            
            default :
             return 0;




        }
    }
return 0;
    
    }
