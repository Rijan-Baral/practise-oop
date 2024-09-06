#include <iostream>
#include <string>
using namespace std;

// creating a class named cars.
class cars
{
  // these are data that are private and only the functions inside the same class can access them.
private:
  // these are member data.
  string companyName;
  string companyModel;
  string modelType;
  float milege;
  double price;

  // public can be accessed by objects outside the class in main function.
public:
  // creating a constructor.
  // there are three types of constructors: default constructor,parameterized constructor, copy constructor.

  // default constructor.
  cars()
  {
    cout << "This is a default constructor. this is called immediately when an object is created. an obj without parameter." << endl;
    cout << "we can hardcore values here so that when an object is created then the values are intitalized." << endl;
    companyName = "lambo";
    companyModel = "v3";
    modelType = "petrol";
    milege = 100;
    price = 100000;
  }

  // parameterized constructor
  cars(string cN, string cM, string mT, float m, double p)
  {
    companyName = cN;
    companyModel = cM;
    modelType = mT;
    milege = m;
    price = p;
  }

  // copy constructor
  cars(cars &car4) //&car4 gets the address of assigned object and copies it
  {
    companyName = car4.companyName; // here companyName is for car5 obj and car4.companyName is of car1 or the obj that we passed/assigned.
    companyModel = car4.companyModel;
    modelType = car4.modelType;
    milege = car4.milege;
    price = car4.price;
  }

  // function to set the data into the private variables.
  // these are also called member functions.
  int setData(string cN, string cM, string mT, float m, double p)
  {
    companyName = cN;
    companyModel = cM;
    modelType = mT;
    milege = m;
    price = p;
  }

  // function that helps to display the datat that has been set.
  int displayData()
  {
    cout << companyName << endl;
    cout << companyModel << endl;
    cout << modelType << endl;
    cout << milege << endl;
    cout << price << endl;
  }
};

int main()
{
  // creating an object named car1 of type cars. objects are nothing but a variable to a custom data type called classs.
  cars car1; // cars1 and car2 obj will call the default constructor because they donot pass any arg.
  cars car2;
  cars car3("ferrari", "v5", "diesel", 40, 3000);      // this obj will call the parameterized constructor since we are passing arg.
  car1.setData("Tesla", "v2", "electric", 50, 100000); // this will call the setdata function we created.
  car1.displayData();
  car2.displayData();
  car3.displayData();
  cars car5 = car1; //(initialize the copy constructor) creating car5 named object and assigning car1. now that car1 is passed into copy constructor as an arg. cars(cars &cars4) here cars4 is the cars1.
  car5.displayData();
  return 0;
}
