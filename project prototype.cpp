#include<iostream>
#include<fstream>

using namespace std;

void under_5();
void under_10();
void under_20();
void above_20();
int option(int*);
int gate_no;

class details
{
private:
    long long number;
public:
    char name[20];
    int age=0;

void enter_data();
void show_data();

}c;



void under_5()
{
    cout<<"choose any one of the rides mentioned below\n";
    cout<<"1.option 1\n";
    cout<<"2.option 2\n";
    cout<<"3.option 3\n";
    cout<<"4.option 4\n";
    cout<<"5.option 5\n";
}

void under_10()
{
    cout<<"choose any one of the rides mentioned below\n";
    cout<<"1.option 1\n";
    cout<<"2.option 2\n";
    cout<<"3.option 3\n";
    cout<<"4.option 4\n";
    cout<<"5.option 5\n";
}

void under_20()
{
    cout<<"choose any one of the rides mentioned below\n";
    cout<<"1.option 1\n";
    cout<<"2.option 2\n";
    cout<<"3.option 3\n";
    cout<<"4.option 4\n";
    cout<<"5.option 5\n";
}

void above_20()
{
    cout<<"choose any one of the rides mentioned below\n";
    cout<<"1.option 1\n";
    cout<<"2.option 2\n";
    cout<<"3.option 3\n";
    cout<<"4.option 4\n";
    cout<<"5.option 5\n";
}

void details::enter_data()
{
  cout<<"1.Name:\n";
   cin>>c.name;
    cout<<"2.age\n";
    cin>>c.age;
    cout<<"3.number\n";
    cin>>c.number;
}

void details::show_data()
{
    cout<<"the entered details are\n";
    cout<<"name:"<<c.name;
    cout<<"\nage:"<<c.age;
    cout<<"\nnumber:"<<c.number<<"\n";
}



int main ()
{

    cout<<"welcome to the smart park\n";
    cout<<"please enter the required details\n";

    ofstream file;

    file.open("details.txt");
    c.enter_data();

    file.write((char*)&c,sizeof(c));
    file.close();




    c.show_data();



    if((c.age<5) &&(c.age>0))
    {
        cout<<"your age is less than 5\n ";
        under_5();

        }

        else if((c.age>5)&&(c.age<10))
        {
            cout<<"your age is under 10\n";
            under_10();

        }

         else if((c.age>10) &&(c.age<20))
        {
            cout<<"your age is under 20\n";
            under_20();

        }

         else if (c.age>20)
            {
                cout<<"your age is greater than 20\n";
                above_20();

            }

            else
            {
                cout<<"invalid age\n";
            }






   do{
     cout<<"enter the number of the ride you want to go in\n";
    cin>>gate_no;
    if((gate_no>0)&&(gate_no<=5))
         {cout<<"please proceed to gate number:"<<gate_no<<"\n";
            break;
      }
     else
    {
        cout<<"invalid choice\n";


        }

   }while(gate_no!=1||gate_no!=2||gate_no!=3||gate_no!=4||gate_no!=5);

    cout<<"\nenjoy the ride\n";
    cout<<"\nthank you,visit again\n";
}
