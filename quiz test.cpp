#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<dos.h>
float v;          //global declaration
using namespace std;

class quiztest
{
    private:
    	static int count;       //static data member
        int roll;
        float x;
    char name[20];
    char s[100],ans;
    char clss[20];

  public:
    quiztest()                       //default constructor
    { 
	  x=0; 
	}
    void putdata();
    void quiz1();              //students having odd rollnumbers
    void quiz2();				//students having even rollnumbers
    void display();
    void getcount(void)
    {
    	cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t$$$$$$$$$$***WHOLE QUIZ DATA***$$$$$$$$$$\n";
    	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t"<<count<<" Student given this quiz out of 3"<<"\n";
    	
	}
};
int quiztest::count;		//defination of static data member
void  quiztest::quiz1()
{
	count++;
   ifstream in;
   char a;
      int i=1;
   in.open("D:/testing.txt");
    while(in.eof()==0)
    {
    in.getline(s,100);
    cout<<endl<<s;
   if(i==5)
   {
   in.get(a);
   cout<<"\nans:";
    cin>>ans;
   i=-1;
    if(ans==a)
       {
       x=x+20;
       cout<<" *Your ans  correct.\n";
       }
    else
       {
       if(x>0)
        x=x-10;
       cout<<" # Wrong ans.\n";
       }
    }
    i++;
    }
   in.close();
}
void  quiztest:: quiz2()
{
	count++;
   ifstream in;
   char a;
      int i=1;
   in.open("D:/testing_2.txt");
    while(in.eof()==0)
    {
    in.getline(s,100);
    cout<<endl<<s;
   if(i==5)
   {
   in.get(a);
   cout<<"\nans:";
    cin>>ans;
   i=-1;
    if(ans==a)
       {
       x=x+20;
       cout<<" *Your ans  correct.\n";
       }
    else
       {
       if(x>0)
        x=x-10;
       cout<<" # Wrong ans.\n";
       }
    }
    i++;
    }
   in.close();
}
void quiztest :: putdata()
{
	cout<<"\tENTER YOUR DETAILS::\n";
     cout<<"\tName:";
     cin>>name;
     cout<<"\troll no:";
     cin>>roll;
     cout<<"\tenter your class..your class should be  btechcs/btechit:";
     cin>>clss;
     v=roll%2;
}
void quiztest :: display()
{
    cout<<"\n YOUR RESULT:\n";
    cout<<"\t"<<name<<" you got total "<<x<<" marks,out of 100.\n";
    if(x>33)
    {
      cout<<"\n\tcongragulation!...you passed the quiz";
	}
	else
	{
		cout<<"\n\tooops!...you fail this quiz\n";
		cout<<"\tBest of luck for next time\n";
	}
    cout<<"\n\n\tTHANKS FOR GIVING THIS QUIZ";
}
const int size=3;    //constant variable
int main()
{
	system("color 7d");
    int i;
    quiztest q[size]; 
    cout<<"\n\t\t\t\t\t\t\t\t\t\t**********WELCOME TO THE QUIZ TEST of OOPS BY***************";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t************SHIVANI KASHYAP*************";
	cout<<endl;
	for(i=0;i<size;i++)
	{
		cout<<"\n\n\t\t\t\t~~~~~~~~~*** QUIZ CONTEST ***~~~~~~~~~\t\tt\t\t\tTotal Marks:100\n\n";
    	q[i].putdata();
    	cout<<"\n\t20 marks per Ques(ten negative marking for wrong ans)";
   	    cout<<"\n\n\tselect your choice:\n"
        <<"\n\t\t1 for start test"
        <<"\n\t\t0 for quit the test:";
        int c;
        cin>>c;
        switch(c)
         {
            case 1:
            	if(v==1)
            	{
            		q[i].quiz1();    //odd rollno
        	        q[i].display();
            	}
            	else
            	{
            		q[i].quiz2();   //even rollno
        	        q[i].display();
				}
        	    break;
       		case 0:
       			cout<<"\n\t ok! zero marks assigned you on your quiz test";
       			break;
       		default:
        		cout<<"\ninvalid choice! enter the choice between 0 or 1";
       	
         }
	}
	q[i].getcount();
    
} 
