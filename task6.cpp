#include<iostream>
#include<string.h>
using namespace std;
 string calculateHotelPrices(string month, int numberOfStays);
 string calculateHostelPrices(string mon,int numOfStays);
main ()
{
    cout<<"Enter the month (May, June, July, August, September, October): ";
      string month;
      cin>>month;
      cout<<"Enter the number of stays: ";
      int stays;
      cin>>stays;
      string result = calculateHotelPrices(month,stays);
      string result1 = calculateHostelPrices(month,stays);
      cout<<result<<endl;
      cout<<result1;

      
}
 string calculateHotelPrices(string month, int numberOfStays)
 {          float result1; string answer;
    if ((month=="May"||month=="October")&&numberOfStays<=7)
    {
           
           result1= 65*numberOfStays;
           answer = "Apartment: "+to_string(result1)+ "$.";
               

    }
    if ((month=="May"||month=="October")&&(numberOfStays>7&&numberOfStays<=14))
    {
            
           result1= (65*numberOfStays) ;
           answer = "Apartment: " + to_string(result1)+ "$.";
               

    }
    if ((month=="May"||month=="October")&&(numberOfStays>14))
    {         
          
          result1= numberOfStays*58.5;
          answer =  "Apartment: " + to_string(result1)+ "$.";
                

    }
     if((month=="June"||month=="September")&&(numberOfStays<=14))
     {
             
             result1 = numberOfStays*68.70;
             answer = "Apartment: " + to_string(result1)+ "$.";
            
     }
     if ((month=="June"||month=="September")&&(numberOfStays>14))
     {
         
         result1 = 61.83*numberOfStays;
         answer =  "Apartment: " + to_string(result1)+ "$.";
            
     }
     if ((month=="July"||month=="August")&&(numberOfStays<=14))
     {
        
        result1 = 77*numberOfStays;
        answer = "Apartment: " + to_string(result1)+ "$.";
        
     }
     if ((month=="July"||month=="August")&&(numberOfStays>14))
     {
        
        result1= 68.4*numberOfStays;
        answer = "Apartment: " + to_string(result1)+ "$.";
             
     }
     return answer;
     
 }   
 string calculateHostelPrices(string mon,int numOfStays)
  {       float result;   string answer1;
     if ((mon=="July"||mon=="August")&&(numOfStays>14))
     {
        result = 76*numOfStays;
        answer1=       "Studio: "+ to_string(result) + "$.";

 }
  if ((mon=="July"||mon=="August")&&(numOfStays<=14))
     {
        result = 76*numOfStays;
        answer1=     "Studio: "+ to_string(result) + "$.";
     }
      if ((mon=="June"||mon=="September")&&(numOfStays>14))
     {
         result = 60.16*numOfStays;
          answer1=     "Studio: "+ to_string(result) + "$.";
     }
 if((mon=="June"||mon=="September")&&(numOfStays<=14))
     {
             result = numOfStays*75.20;
             answer1=     "Studio: "+ to_string(result) + "$.";
     }
 if ((mon=="May"||mon=="October")&&(numOfStays>14))
    {         
          result = (numOfStays*35) ;
          answer1=     "Studio: "+ to_string(result) + "$.";
    }
 if ((mon=="May"||mon=="October")&&(numOfStays>7&&numOfStays<=14))
    {
            result= 45*numOfStays ;
             answer1=     "Studio: "+ to_string(result) + "$.";
    }
if ((mon=="May"||mon=="October")&&numOfStays<=7)
    {
           result= 50*numOfStays;
           answer1=     "Studio: "+ to_string(result) + "$.";
    }
    return answer1;
  }