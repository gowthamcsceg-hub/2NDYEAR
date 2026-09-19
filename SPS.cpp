#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int computer(){
     

    int computer = rand() % 3 + 1;

    return computer;
}
int main(){

int n = 0;
int user = 0;
int user_point = 0;
int computer_point = 0;
srand(time(0));
cout<<"WELLCOME TO STONE PAPER SCISSOR GAME\n";
cout<<"ENTER HOW MANY ROUND WE GOING TO PLAY\n";
cin>>n;
for(int i = 1; i <= n; i++){
cout<<"1.STONE\n"<<"2.PAPER\n"<<"3.SCISSOR\n";
cout<<"PRESS 1 IF YOU SELECT STONE \n"<<"PRESS 2 IF YOU SELECT PAPER \n"<<"PRESS 3 IF YOU SELECT SCISSORS \n";
cin>>user;
cout<<"YOUR SELECT = ";
if(user == 1){
    cout<<"STONE\n";
}
if(user == 2){
    cout<<"PAPER\n";

}
if(user == 3 ){
    cout<<"SCISSOR\n";
}
if(user > 3){
    cout<<"INVALIED IN PUT\n"<<"PLEASE SELECT PROPERLY "<<endl;

}

cout<<"COMPUTER CHOOES = ";
int a = computer();
if( a  == 1){
    cout<<"STONE  ";
}
if( a == 2){
    cout<<"PAPER  ";

}
if( a == 3 ){
    cout<<"SCISSOR  ";

}
if(user == a ){
   cout << "\nSORRY  BOTH CHOSE THE SAME  NO POINTS\n";
}
if( user == 1 && a == 2){
    cout<< "\nCOMPUTER GOT POINT\n ";
     computer_point++;


}
if(user == 1 && a == 3){
    cout<<"\nYOU GOT A POINT \n";;
     user_point++;

}
if( user == 2 && a == 1){
    cout<<"\nYOU GOT A POINT\n ";;
     user_point++;
}
if(user == 2 && a == 3){
     cout<< "\nCOMPUTER GOT POINT \n";
      computer_point++;

}
if(user == 3 && a == 1){
    cout<< "\nCOMPUTER GOT POINT\n";
     computer_point++;

}
if( user == 3 && a == 2){
     cout<<"\nYOU GOT A POINT \n";;
     user_point++;

}
}

cout<<"\nYOUR SCORE = "<<user_point<<endl;
cout<<"\nCOMPUTER SCORE = "<< computer_point<<endl;
if(user_point == computer_point){
    cout<<"\nMATCH DRAW\n";
}  
else if(user_point < computer_point){
    cout<< "********COMPUTER WIN**********\n";
}
else{
    cout<< " *****YOU WIN****** \n";
}

return 0;
}
