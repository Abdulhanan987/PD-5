#include<iostream>
using namespace std;
char type;
float price,p1,p2,p3,p4,p5,t1,t2,result;
float taxCalculator(float price);
float M();
float E();
float S();
float V();
float T();
main()
{
    cout<<"Enter the vehicle type code (M,E,S,V,T): ";
    cin>>type;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
  result =  taxCalculator(price);
  cout<<"The final price of a vehicle of type "<<type<<" afer adding the tax is $"<<result;

}
float taxCalculator(float price)
{     float p1,p2,p3,p4;
      if(type=='M')
      {
         t1= M();
         t2 = t1 + price;
      }
             if (type == 'E')
             {
                      t1=  E();
                      t2 = t1 + price;
                      
             }
             if (type=='S')
             { t1=  S();
                t2 = t1 + price;
            
                

             }
             if (type == 'V')
             {
               t1= V();
               t2 = t1 + price;

             }
             if (type == 'T')
             {
                 t1= T();
                 t2 = t1 + price;
             }
             return t2;
}
float M()
{     
       p1 = price *0.06;
       return p1;
}
float E()
{
    p2 = price *0.08;
    return p2;
}
float S()
{
    p3 = price * 0.1;
    return p3;
}
float V()
{
    p4 = price * 0.12;
    return p4;
}
float T()
{
    p5 = price * 0.15;
    return p5;
}
