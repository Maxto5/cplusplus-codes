#include<iostream>
using namespace std;
int main(){
  int hostNum,guestNum;

  cout<<"Host: Enter number"<<endl;
  cin >> hostNum;

  system("clear");

  cout<<"Guest: Enter your Guess"<<endl;
  cin >> guestNum;
 
  (hostNum == guestNum) ? (cout<<"Correct"<<endl):(cout<<"Incorrect"<<endl);  

return 0;
}
