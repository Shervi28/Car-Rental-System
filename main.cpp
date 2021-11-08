#include <iostream>
#include <random>
using namespace std;

int main() {
cout<<"Welcome to the Car Rental System"<<endl<<"You start of with 1000 dollars"<<endl;
cout<<"1)Work"<<endl;
cout<<"2)Show Cars"<<endl;
cout<<"3)Buy Cars"<<endl;
cout<<"4)Sell Cars"<<endl;

  int optionWelcome;
  cout<<"Pick an option:";
    cin>>optionWelcome;
    cout<<endl<<endl;
    string Shop[5] = {"Toyata", "Honda", "Audi", "Tesla", "Hennessy Venom h5"};
    
  
  
    int Toyota_Price=500;
    int Honda_Price=700;
    int Audi_Price=1000;
    int Tesla_Price=1500;
    int Hennessy_Venom_H5=2000;
  
    struct Car{
      string name;
      int price;
      bool available;
    
    };
  
    int money = 1000;
    if(optionWelcome==1){
    
    //auto val = random::get(-10, 10);
    }

    else if(optionWelcome==2){
      cout<<"Cars available"<<endl;
      cout<<Shop[0]<<endl;
      cout<<Shop[1]<<endl;
      cout<<Shop[2]<<endl;
      cout<<Shop[3]<<endl;
      cout<<Shop[4]<<endl;

      cout<<"Your Cars"<<endl;
      cout<<MyCars[0]<<endl;
      cout<<MyCars[1]<<endl;
    }

    else if(optionWelcome==3){
      int cartobuy;
      cout<<"1."<<Shop[0]<<"=500 dollars" <<endl;
      cout<<"2."<<Shop[1]<<"=700 dollars"<<endl;
      cout<<"3."<<Shop[2]<<"=1000 dollars"<<endl;
      cout<<"4."<<Shop[3]<<"=1500 dollars"<<endl;
      cout<<"5."<<Shop[4]<<"=2000 dollars"<<endl;
      cout<<"Pick a Car to Buy:";
      cin>>cartobuy;
      cout<<"\n";
      

      
    }
    

    else if(optionWelcome==4){
      
    }
    
  } 
  
    

// Put money 
// Show cars
// buy cars
// sell cars
// The cars are gonna stored in a array
// disaster management system/ natural disaster
