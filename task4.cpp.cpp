#include<iostream>
using namespace std;
int t1;

void projectTimeCalculation(int hours,int days,int workers);

main()
{        cout<<"Enter the needed hours: ";
            int h;
            cin>>h;
            cout<<"Enter the days that firm has: ";
            int d;
            cin>>d;
            cout<<"Enter the number of all workers: ";
            int w;
            cin>>w;
      projectTimeCalculation(h,d,w);       }
         

void projectTimeCalculation(int hours,int days,int workers)
{      float      calculation =days- (days *0.1);
               int time = workers*10;
                t1 = time * calculation;
            if(hours>t1)
            {
                int t2 = hours - t1;
              cout<< "Not enough time! " <<t2<<" hours needed";
                
            }
            if(hours<t1)
            {
                 int t3 = t1 - hours;
                cout<< "Yes!"<<t3<<" hours left";
                
            }
            
          
            
}
