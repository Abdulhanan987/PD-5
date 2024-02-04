#include<iostream>
using namespace std;
double h,w,l,calculation,result,result1,result2,result3;
string unit;
double pyramidVolume(float length,float width,float height);
double meters();
double centimeters();
double kilometers();
double millimeters();
main()
{
    double calculator=  pyramidVolume(l,w,h);
       cout<<"The volume of the pyramid is "<<calculator<<" cubic "<<unit;

}
double pyramidVolume(float length,float width,float height)
{         cout<<"Enter the length of the pyramid (in meters): ";
             cin>>l;
             cout<<"Enter the width of the pyramid (in meters): ";
                cin>>w;
                cout<<"Enter the height of the pyramid (in meters): ";
                cin>>h;
               cout<<"Enter the desired unit (millimeters,centimeters,meters,kilometers): ";
                 cin>>unit;
    calculation = (l*w*h)/3;
      if (unit=="meters")
      {
               meters();
               result =  meters();
                
      }
       if (unit=="centimeters")
       {
              result= centimeters();
       }          
       if (unit=="kilometers")
       {
            result=    kilometers();
       }       
          if (unit == "millimeters")
            {    
               result = millimeters();
               
            }   
            return result;
}
double meters()
   {
       double m1 = calculation;
        return m1;
   }
   double centimeters()
   {
       double m2 = calculation * 1000000;
           return m2;
   }
   double kilometers()
   {
       double m3 = calculation/1000000000;
       return m3;
   }
   double millimeters()
    {
        double m4 = calculation*1000000000;
        return m4;
    }
   