#include <iostream>
#include <stdlib.h>
using namespace std;

class Car{
    string CarName;
    string Color;
    string NumberofSeats;
public:
    Car(){};
    Car(string carname, string color, string numberofseats){
        CarName=carname;
        Color=color;
        NumberofSeats=numberofseats;
    };

    void setCarName(string carname){
        CarName=carname;
    }
    string getCarName(){
        return CarName;
    }
    void setColor(string color){
        Color=color;
    }
    string getColor(){
        return Color;
    }
    void setNumberofSeats(string numberofseats){
        NumberofSeats=numberofseats;
    }
    string getNumberofSeats(){
        return NumberofSeats;
    }

    void displayCarInfo(string carname, string color, string numberofseats){
        system("CLS");
        cout<<carname<<endl;
        cout<<color<<endl;
        cout<<numberofseats<<endl;
    }

    void displayCar(int index, string carname){
        //system("CLS");
        cout<<index<<"."<<carname<<endl;
    }


};


/*class Customer{
private:
    string customerName;
    int age;
    long identification;
    string address;
public:
    void payRentFee();
    string giveLocation();
    string giveDateAndTime();
};*/

class Menu{
    Car car;
    /*Car car[15]={
        {"Mercedes C200", "Black", "5 seats"},
        {"Toyota Camry 2.0G", "Silver", "5 seats"},
        {"Audi A4", "Red", "5 seats"}
    };*/
public:
    Menu(){};
    void firstMenu();
    void secondMenua();
    void secondMenub();
    void secondMenuc();
    void paymentMenu(string carname, int quantity, string price);

};

void Menu::firstMenu(){
    cout <<"************** Welcome to HUST Car Rental Store *************** " << endl;
    cout <<"About us:   ";
    cout <<" " << endl;
    cout <<"What type of vehicle do you want to rent?"<< endl;
    cout <<"1. Sedan " << endl;
    cout <<"2. SUV  "<< endl;
    cout <<"3. Sports car  "<< endl;
    int choice1;
    cin>>choice1;
    switch(choice1){
case 1:
    system("cls");
    car.displayCar(1,"Mercedes C200");
    car.displayCar(2,"Toyota Camry 2.0G");
    car.displayCar(3,"Audi A4");
    cout<<"Please select a car: ";
    secondMenua();
    break;
case 2:
    system("cls");
    car.displayCar(1,"Mercedes GLC200");
    car.displayCar(2,"Ford Everest");
    car.displayCar(3,"Chevrolet Colorado");
    cout<<"Please select a car: ";
    secondMenub();
    break;
case 3:
    system("cls");
    car.displayCar(1,"Mercedes AMG-GT53");
    car.displayCar(2,"Lamborghini Aventador");
    car.displayCar(3,"Porsche 911");
    cout<<"Please select a car: ";
    secondMenuc();
    break;
default:
    cout<<"Invalid";}

}

void Menu::secondMenua(){
    int choice2;
    cin>>choice2;
    switch(choice2){
    case 1:
        system("cls");
        car.displayCarInfo("Mercedes C200", "Black", "5 seats");
        cout<<"Do you want to rent this car? (y/n) ";
        char yesOrNo;
        cin>>yesOrNo;
        if(yesOrNo=='y'){
        paymentMenu("Mercedes C200", 3, "250USD");
    }
    else if(yesOrNo=='n'){
        cout<<"Do you want to rent this car? (y/n) ";
    }
    else
        cout<<"Error!"<<endl;
        paymentMenu("Mercedes C200", 3, "250USD");
        break;
    case 2:
        system("cls");
        car.displayCarInfo("Toyota Camry 2.0G", "Silver", "5 seats");
        break;
    case 3:
        system("cls");
        car.displayCarInfo("Audi A4", "Red", "5 seats");
        break;
    default:
        cout<<"Invalid!"<<endl;}
    /*cout<<"Do you want to rent this car? (y/n) ";
    char yesOrNo;
    cin>>yesOrNo;
    if(yesOrNo=='y'){
        //paymentMenu(string carname, int quantity, string price);
    }
    else if(yesOrNo=='n'){
        cout<<"Do you want to rent this car? (y/n) ";
    }
    else
        cout<<"Error!"<<endl;*/
}

void Menu::secondMenub(){
    int choice2;
    cin>>choice2;
    switch(choice2){
    case 1:
        system("cls");
        car.displayCarInfo("Mercedes GLC200", "White", "7 seats");
        break;
    case 2:
        system("cls");
        car.displayCarInfo("Ford Everest", "Orange", "7 seats");
        break;
    case 3:
        system("cls");
        car.displayCarInfo("Chevrolet Colorado", "Blue", "5 seats");
        break;
    default:
        cout<<"Invalid!"<<endl;}
    cout<<"Do you want to rent this car? (y/n) ";
    char yesOrNo;
    cin>>yesOrNo;
    if(yesOrNo=='y'){
        //paymentMenu(string carname, int quantity, string price);
    }
    else if(yesOrNo=='n'){
        cout<<"Do you want to rent this car? (y/n) ";
    }
    else
        cout<<"Error!"<<endl;
}

void Menu::secondMenuc(){
    int choice2;
    cin>>choice2;
    switch(choice2){
    case 1:
        system("cls");
        car.displayCarInfo("Mercedes AMG-GT53", "Black", "4 seats");
        break;
    case 2:
        system("cls");
        car.displayCarInfo("Lamborghini Aventador", "Yellow", "2 seats");
        break;
    case 3:
        system("cls");
        car.displayCarInfo("Porsche 911", "Silver", "4 seats");
        break;
    default:
        cout<<"Invalid!"<<endl;}
    cout<<"Do you want to rent this car? (y/n) ";
    char yesOrNo;
    cin>>yesOrNo;
    if(yesOrNo=='y'){
        //paymentMenu(string carname, int quantity, string price);
    }
    else if(yesOrNo=='n'){
        cout<<"Do you want to rent this car? (y/n) ";
    }
    else
        cout<<"Error!"<<endl;
}

void Menu::paymentMenu(string carname, int quantity, string price){
    system("cls");
    cout<<"Payment info: "<<endl;
    for(int i=0;i<5;i++){
        cout<<"\n";
    }
    cout<<"Product name";
    for(int i=0;i<30;i++){
        cout<<" ";
    }
    cout<<"Quantity";
    for(int i=0;i<8;i++){
        cout<<" ";
    }
    cout<<"Price "<<endl;
    car.setCarName(carname);
    cout<<car.getCarName();
    for(int i=0;i<32;i++){
        cout<<" ";
    }
    cout<<quantity;
    for(int i=0;i<12;i++){
        cout<<" ";
    }
    cout<<price<<endl;
    cout<<"Confirm payment? (y/n) ";
    char choice3;
    cin>> choice3;
    if(choice3=='y'){
        system("cls");
        cout<<"Payment successful! Thank you"<<endl;
    }
    else if(choice3=='n'){
        paymentMenu(carname,quantity,price);
    }
    else
        cout<<"Error!"<<endl;

}


int main()
{
    Menu menu;
    menu.firstMenu();

    return 0;
}

