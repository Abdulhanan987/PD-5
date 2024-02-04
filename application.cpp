#include <iostream>
#include <conio.h>
#include<string>
#include<limits>
using namespace std;
void printHeader();
int menu();
string subMenuBeforeMainMenu(string message);
int login();
bool signUp(string name, string password, string role, string users[], string passwords[], string roles[], int &usersCount, int userArrSize);
string signIn(string name, string password, string users[], string passwords[], string roles[], int usersCount);
int calculation();
int cal1(string leg[], string food[], int logincount,int &totalprice,string clas);
void personalInformation(string name[], string country[], string ID[], int logincount);
void flightInformation(string arrival[], string departure[], string date[], string dayOfDeparture[], int logincount);
void InflightServices(string leg[], string food[], int logincount);
string classSelection(string &clas);
string reviews(string review[], int logincount);
string budget(int budget[],int logincount);
void availableAirline(string airline[],int count);
string selectairline(string airlines[],int airlineChoice);
main()
{  system ("Color 03");
   int arrsize =10;
   string Username[arrsize];
    string uPassword[arrsize];
    string roles[arrsize];
    int usercount = 0;
    int loginoption =0;
     int usercountforCus = 10;
     string nameOfUser[usercountforCus], country[usercountforCus], ID[usercountforCus], leg[usercountforCus], food[usercountforCus];
  string date[usercountforCus];
  string departure[usercountforCus], arrival[usercountforCus];
  int result;string clas, customerreviews[usercountforCus];
  int logincount = 0; int totalrevenue=0;
  string budgetresult;  int count;
  
  string dayOfDeparture[usercountforCus];
  string airlineChoice;
 
    system("cls");
    printHeader();
    while (loginoption != 3)
  {   
     system("cls");
  
     printHeader();
    subMenuBeforeMainMenu("login");
    int call = login();
    if (call == 1)
    {   
      cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
      system("cls");
      printHeader();
       string name;
       string password;
       string role;
       cout<<subMenuBeforeMainMenu("SignIn")<<endl;
        cout<<"*.......................*"<<endl;
      cout<<"Enter the username: "<<endl;
      getline(cin, name);

      cout<<"Enter the password: "<<endl;
      getline(cin, password);
      role = signIn(name,password,Username,uPassword,roles,usercount);
      if(role=="User"||role=="user")
      {
        system("cls");
        printHeader();
        int option1 = menu();
        
        {  while (true)
  {
    system("cls");
    printHeader();
    subMenuBeforeMainMenu("User");
    result = menu();
    if (result == 1)
    {
      system("cls");
      printHeader();
      personalInformation(nameOfUser, country, ID, logincount);
      cout << "Press any key to continue: ";
  getch();
    }
    else if (result == 2)
    {
      system("cls");
      printHeader();
      flightInformation(arrival, departure, date, dayOfDeparture, logincount);
      cout << "Press any key to continue: ";
  getch();
    }
    else if (result == 3)
    {
      system("cls");
      printHeader();
      InflightServices(leg, food, logincount);
      cout << "Press any key to continue: ";
  getch();
    }
    else if (result == 4)
    {
      system("cls");
      printHeader();
      classSelection(clas);
    }
    else if(result==5)
    {
      system("cls");
      printHeader();
      cout<<"Your budget should be greater than $200 "<<endl;
      cout<<"Press any key to continue: ";
      getch();
    }
    else if(result==6)
    {
      system("cls");
      printHeader();
     
     
    }
    else if (result == 7)
    {
      system("cls");
      printHeader();
      reviews(customerreviews, logincount);
    }
    else if(result==8)
    {
       availableAirline(airlines,count);
       cout<<"Select your choice:";
       getline(cin,airlineChoice);
       cout<<"Press any key to continue: ";
       getch();
    }
    else if(result==9)
    {   int price;
     price= cal1(leg, food, logincount,totalrevenue,clas);
    }
    else if (result == 10)
    {
      system("cls");
      printHeader();
      price = cal1(leg, food, logincount,totalrevenue,clas);
      cout << "The total price is: " << price<<endl;
      cout << "Press any key to continue: ";
      getch();
      totalprice(totalrevenue);
    }

    else if (result == 11)
    {
      system("cls");
      printHeader();
      output(nameOfUser, departure, arrival, leg, food, date, ID, price, logincount, customerreviews);
    }

    else if (result == 12)
    {

      break;
      }
}    }    }
else if (call == 2)
    { 
      cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); 
      system("cls");
       printHeader();
       cout<<subMenuBeforeMainMenu("SignUp")<<endl;
       cout<<"*.......................*"<<endl;
       string name;
       string password;
       string role;
       cout<<"Enter the username: ";
       getline(cin,name);
       cout<<"Enter the password: ";
       getline(cin,password);
       cout<<"Enter your role: ";
       getline(cin,role);
     bool isTrue= signUp(name,password,role,Username,uPassword,roles,usercount,arrsize);  
     if(isTrue==true)
      {
        cout<<"Signed up succesfully"<<endl;
        
      }
      else
      {
        cout<<"Not signed up successfully"<<endl;

      }
      cout<<"Press any key to continue:";
        getch();
    }
    else if(call==3)
    {
      break;
    }
  
 else 
 {
  cout<<"Invalid option: "<<endl;
  cout<<"Press any key to continue:";
        getch();
        
        login(); }  }  }       }
void printHeader()
{  cout<<endl<<endl<<endl;
  cout << "\t\t#########################################################################################################################################" << endl;
  cout << "\t\t#                                                                                                                                        #" << endl;
  cout << "\t\t#    88888  8   88 8    8     8        8 88888 88    8   88888    88888       88888  88888 888888  8      88888 88    8 888888   88888   #" << endl;
  cout << "\t\t#   8       8  8    8  8      8   88   8   8   8 8   8  8        8           8     8   8   8     8 8        8   8 8   8 8       8        #" << endl;
  cout << "\t\t#    88888  888      88       8  8  8  8   8   8  8  8  8   8888  88888      8888888   8   888888  8        8   8  8  8 8888     88888   #" << endl;
  cout << "\t\t#         8 8  8     88       8 8    8 8   8   8   8 8  8      8       8     8     8   8   8  8    8        8   8   8 8 8             8  #" << endl;
  cout << "\t\t#    88888  8   88   88       88      88 88888 8    88   888888   88888      8     8 88888 8  8888 888888 88888 8    88 8888888  88888   #" << endl;
  cout << endl;
  cout << "\t\t#########################################################################################################################################" << endl;
}
int menu()
{
  int op;
  cout << "\t\t\t\t\t\tSelect one of the following option: " << endl;
  cout << "\t\t\t\t\t\t1. Add Information: " << endl;
  cout << "\t\t\t\t\t\t2. Add flight Information: " << endl;
  cout << "\t\t\t\t\t\t3. In fligth Services: " << endl;
  cout << "\t\t\t\t\t\t4. Class Selection: " << endl;
  cout << "\t\t\t\t\t\t5  View budget requirements: "<<endl;
  cout << "\t\t\t\t\t\t6. Enter your budget:"<<endl;
  cout << "\t\t\t\t\t\t7. Reviews: " << endl;
  cout << "\t\t\t\t\t\t8. View Available Airlines"<<endl;
  cout << "\t\t\t\t\t\t9. View the days in which disount is available: "<<endl;
  cout << "\t\t\t\t\t\t9. View the price: " << endl;
  cout << "\t\t\t\t\t\t10. Your information: " << endl;
  cout << "\t\t\t\t\t\t11. Exit" << endl;
  cout << "\t\t\t\t\t\tYour option: " << endl;
  cin >> op;
  return op;
}
int login()

{
  system("cls");
  printHeader();
  int login;
  cout<<endl<<endl<<endl<<endl;
  cout << "\t\t\t\t\t\t1.Sign In: " << endl;

  cout << "\t\t\t\t\t\t2.Sign Up: " << endl;
  cout << "\t\t\t\t\t\t3. Exit: " << endl;
  cout << "\t\t\t\t\t\tEnter your choice within the given options: ";
  cin >> login;
  return login;
}
bool signUp(string name, string password, string role, string users[], string passwords[], string roles[], int &usersCount, int userArrSize)
{
  system("cls");
  printHeader();
  bool isFound = false;
  for (int x = 0; x < usersCount; x++)
  {
    if (name == users[x] && password == passwords[x])
    {
      
      
      isFound = true;
      break;
    }    }
    if (isFound==true)
    {
      return 0;
    }
   else if(usersCount<userArrSize)
  {
    users[usersCount]=name;
    passwords[usersCount]=password;
    roles[usersCount]=role;
    usersCount++;
    isFound = true;
  }
  else 
  {
    return false;
  }
  
  return isFound;
}
string signIn(string name, string password, string users[], string passwords[], string roles[], int usersCount)

{
  
  
  bool isFound = false;
  int var;
  
  for (int x = 0; x < usersCount; x++)
  {
    if (name == users[x] && password== passwords[x])
    {
      
      return roles[x];
      break;
    }
  }
  return "Wrong information"; }
  string subMenuBeforeMainMenu(string message)
{
  string menu = message + "Menu";
   return menu;
   
}
void output(string Name[], string departure[], string arrival[], string legspace[], string extrafood[], string Date[], string ID[], int price, int logincount, string reviews[])
{
  cout <<"\t\t\t\t\t\t"<< Name[logincount] << endl;
  cout << "\t\t\t\t\t\tDeparture: " << departure[logincount] << endl;
  cout << "\t\t\t\t\t\tArrival: " << arrival[logincount] << endl;
  cout << "\t\t\t\t\t\tServices:" << endl;
  cout << "\t\t\t\t\t\tLeg Space: " << legspace[logincount] << endl;
  cout << "\t\t\t\t\t\tFood Service: " << extrafood[logincount] << endl;
  cout << "\t\t\t\t\t\tDate of Departure: " << Date[logincount] << endl;
  cout << "\t\t\t\t\t\tID No:" << ID[logincount]<<endl;
  cout << "\t\t\t\t\t\tTicket Price: $" << price << endl;
  cout << "\t\t\t\t\t\tReviews: " << reviews[logincount] << endl;
  cout <<" \t\t\t\t\t\tPres any key to continue: ";
  getch();
}
int cal1(string leg[], string food[], int logincount,int &totalprice,string clas)
{
  int price1; 
  if ((leg[logincount] == "Yes"||leg[logincount]=="yes") && (food[logincount] == "No"||food[logincount]=="no")&&clas=="Business")
  {
    price1 = calculation() + 20;
  }

  else if ((leg[logincount] == "Yes"||leg[logincount]=="yes") && (food[logincount] == "Yes"||food[logincount]=="yes")&&clas=="Business")
  {
    price1 = calculation() + 30;
  }

  else if ((leg[logincount] == "No"||leg[logincount]=="no") && (food[logincount] == "Yes"||food[logincount]=="yes")&&clas=="Business")
  {
    price1 = calculation() + 20;
  }

  else if ((leg[logincount] == "No"||leg[logincount]=="no") && (food[logincount] == "No"||food[logincount]=="no")&&clas=="Business")
  {
    price1 = calculation()+10;
  }
  else if((leg[logincount] == "Yes"||leg[logincount]=="yes") && (food[logincount] == "Yes"||food[logincount]=="yes")&&clas=="Economy")
  {
    price1= calculation()+10;
  }
  else if((leg[logincount] == "No"||leg[logincount]=="no") && (food[logincount] == "Yes"||food[logincount]=="yes")&&clas=="Economy")
  {
   price1= calculation()+5;
  }
  else if((leg[logincount] == "Yes"||leg[logincount]=="yes") && (food[logincount] == "No"||food[logincount]=="no")&&clas=="Ecocnomy")
  {
    price1= calculation()+5;
  }
  else if((leg[logincount] == "No"||leg[logincount]=="no") && (food[logincount] == "No"||food[logincount]=="no")&&clas=="Economy")
  {
    price1 = calculation();
  }
   totalprice = totalprice + price1;
   logincount++;
  return price1;
}
void personalInformation(string name[], string country[], string ID[], int logincount)
{  cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  cout << "Enter your name: ";
  getline(cin, name[logincount]);
  cout << "Enter the country you live in: ";
  getline(cin, country[logincount]);
  cout << "Enter your ID Number: ";
  

  
}
int calculation()
{
  int price = 200;
  return price;
}
void flightInformation(string arrival[], string departure[], string date[], string dayOfDeparture[], int logincount)
{ cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  cout << "Enter the place of departure: ";
  getline(cin, departure[logincount]);
  cout << "Enter the place of arrival: ";
  getline(cin, arrival[logincount]);
  cout << "Enter the date of departure: ";
  
  getline(cin, date[logincount]);
  cout << "Enter the day of departure: ";
  getline(cin,dayOfDeparture[logincount]);
  

  
}
void InflightServices(string leg[], string food[], int logincount)
{ cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  cout << "Which services you want to avail: " << endl;
  cout << "Extra leg space(Yes/No): ";
  getline(cin, leg[logincount]);
  cout << "Food Service(Yes/No):";
  getline(cin, food[logincount]);
  
  
}
string classSelection(string &clas)
{
  cout << "Select your class: " << endl;
  cout << " Economy" << endl;
  cout << " Business" << endl;
  cout << " Write your class here: ";
  cin >> clas;
  cout << "Press any key to continue: ";
  return clas;
}
string reviews(string review[], int logincount)
{  cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  cout<<"Enter your reviews: ";
  getline(cin, review[logincount]);
  cout << "Press any key to contine: ";
  logincount++;
  
  return review[logincount];
}
string budget(int budget[],int logincount)
{  string statement;
   if(budget[logincount]<200)
   {
     statement = "The budget is not enough.";
   }
   else 
   {
    statement = "The budget is enough.";
   }
   return statement;
}
void availableAirline(string airline[],int count)
{
  for(int x=0;x<count;x++)
  {
    cout<<"\t\t\t\t\t\t"<<x+1<<". "<<airline[x]<<endl;
  }
}
string selectairline(string airlines[],int airlineChoice)
{      
    string result;
    
     if(airlineChoice==1)
     {
      result =airlines[0];
     }
     else if(airlineChoice==2)
     {
      result = airlines[1];
     }
     else if(airlineChoice==3)
     {
      result = airlines[2];
      
     }
     else if (airlineChoice==4)
     {
      result =airlines[3];
     }
   return result;
}