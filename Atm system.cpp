#include<iostream>
#include<string>
using namespace std;
class atm{

private:

long int account_no;
int pin;
double balance;
string mobile_no;
string name;
public:

    void account_data(long int account_no_1,int pin_1,double balance_1,string mobile_no_1,string name1){
              account_no=account_no_1;
               pin=pin_1;
               balance=balance_1;
                mobile_no=mobile_no_1;
                name=name1;
    }

    double getbalance(){
    return balance;
    }

    void cashwithdraw(int amount){
    if(0<amount&&amount<balance){
        balance-=amount;
        cout<<"collect your cash"<<endl;
        cout<<"available balance :-"<<balance<<endl;
       return;
    }
    else{
        cout<<"Invalid input or Insufficient balance"<<endl;
        return;
    }

    }

     long int getaccountno(){
     return account_no;

     }

    string getnumber(){
    return mobile_no;
    }

    string getname(){
    return name;
    }

    void changenumber(string oldnumber,string newnumber){
     if(oldnumber==mobile_no){

        mobile_no=newnumber;
        cout<<"mobile number updated succesfully"<<endl;
        return;

     }
    else{
        cout<<"mobile number incorrect"<<endl;
        return;
    }
    }

};
int main(){

  atm acc1;
  acc1.account_data(11109876,1234,76455.5,"9848032919","hemanth");
  long int account_no2;
int pin2;
int n;
cout<<"enter a number between 11 and 99"<<endl;
cin>>n;

  cout<<"****welcome to Atm****"<<endl;
  cout<<"enter your account number"<<endl;
  cin>>account_no2;
  cout<<"enter your pin"<<endl;
  cin>>pin2;
  while(1&&11<n&&n<99){
  if(account_no2=acc1.account_no&&pin2==acc1.pin){
    int amount=0;

  cout<<"****welcome "<<acc1.name<<endl;
    string oldnumber,newnumber;
    cout<<"select option"<<endl;
    cout<<"1.check balance"<<endl;
    cout<<"2.cash withdraw"<<endl;
    cout<<"3.show user details"<<endl;
    cout<<"4.update mobile number"<<endl;
    cout<<"5.exit"<<endl;
int choice;
    cin>>choice;

    switch(choice){
          case 1:
              cout<<endl<<"your account balance is :"<<acc1.getbalance();
              break;
          case 2:
              cout<<"enter the amount :";
              cin>>amount;
              acc1.cashwithdraw(amount);
              break;
          case 3:
              cout<<endl<<"****User details are:-";
              cout<<endl<<"-> account number"<<acc1.getaccountno();
              cout<<endl<<"-> Name          "<<acc1.getname();
              cout<<endl<<"-> balance       "<<acc1.getbalance();
              cout<<endl<<"-> mobile number "<<acc1.getnumber();
              break;
          case 4:
              cout<<endl<<"enter old mobile number"<<endl;
              cin>>oldnumber;
              cout<<endl<<"enter new mobile number"<<endl;
              cin>>newnumber;
              acc1.changenumber(oldnumber,newnumber);
              break;
          case 5:
              return 0;
          default:
              cout<<endl<<"enter valid data!"<<endl;
    }

    break;
  }
}
}
