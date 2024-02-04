#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit,string dayOfWeek, double quantity);
main ()
{
    cout<<"Enter the fruit: ";
    string fruit;
    cin>>fruit;
    cout<<"Enter day of week: ";
    string dayofweek;
    cin>>dayofweek;
    cout<<"Enter the quantity: ";
    double quantity;
    cin>>quantity;
     if (dayofweek!="Monday"&&dayofweek!="Tuesday"&&dayofweek!="Wednesday"&&dayofweek !="Thursday"&&dayofweek!="Friday"&&dayofweek!="Saturday"&&dayofweek!="Sunday"||(fruit!="orange"&&fruit!="banana"&&fruit!="apple"&&fruit!="grapefruit"&&fruit!="kiwi"&&fruit!="pineapple"&&fruit!="grapes"))
    {
        cout<<"Error";
    }
    else
    {
    float result = calculateFruitPrice(fruit,dayofweek,quantity);
    cout<<result;     }
   
}
float calculateFruitPrice(string fruit,string dayOfWeek, double quantity)
{            float result;
    if ((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday")&&fruit=="orange")
    {           result = 0.85*quantity;

    }
    if((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday")&&fruit=="banana")
    {
        result = 2.50*quantity;
    }
    if((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday")&&fruit=="apple")
    {
        result = 1.20*quantity;
    }
    if((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday")&&fruit=="grapefruit")
    {
        result =1.45*quantity;
    }
    if((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday")&&fruit=="kiwi")
    {
        result = 2.70*quantity;
    }
    if((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday")&&fruit=="pineapple")
    {
       result =5.50*quantity;
    }
    if((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday")&&fruit=="grapes")
    {
        result = 3.85*quantity;
    }
    if((dayOfWeek=="Saturday"||dayOfWeek=="Sunday")&&fruit =="banana") 
    {
        result = 2.70*quantity;
    }
    if((dayOfWeek=="Saturday"||dayOfWeek=="Sunday")&&fruit =="apple")
    {
        result = 1.25*quantity;
    }
    if((dayOfWeek=="Saturday"||dayOfWeek=="Sunday")&&fruit =="orange")
    {
        result =0.90*quantity;
    }
    if((dayOfWeek=="Saturday"||dayOfWeek=="Sunday")&&fruit =="grapefruit")
    {
        result = 1.60*quantity;
    }
    if((dayOfWeek=="Saturday"||dayOfWeek=="Sunday")&&fruit =="kiwi")
    {
        result = 3.00*quantity;
    }
    if((dayOfWeek=="Saturday"||dayOfWeek=="Sunday")&&fruit =="pineapple")
    {
        result = 5.60*quantity;
    }
    if((dayOfWeek=="Saturday"||dayOfWeek=="Sunday")&&fruit =="grapes")
    {
        result = 4.20*quantity;
    }
    return result;
}