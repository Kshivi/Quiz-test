#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<windows.h>
#include<dos.h>
float v;          //global declaration
using namespace std;

class quiztest
{
    private:
    	
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
    void quiz1();              //students choose oops in c++
    void quiz2();				//students choose python
    void quiz3();				//students choose java
    void display();
   
};
void  quiztest::quiz1()
{
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
void  quiztest::quiz3()
{
   ifstream in;
   char a;
      int i=1;
   in.open("D:/java.txt");
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
     gets(name);
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

int main()
{
	system("color 7d");
	 quiztest q;
	 
    cout<<"\n\t\t\t\t\t\t\t\t\t\t**********WELCOME TO THE QUIZ TEST ***************";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t************SHIVANI KASHYAP*************";
	cout<<endl;
	cout<<"\n\n\t\t\t\t~~~~~~~~~*** QUIZ CONTEST ***~~~~~~~~~\t\tt\t\t\tTotal Marks:100\n\n";
	q.putdata();
	system("CLS");
	    int ch;
	
		cout<<"\n\n\n\t\t\tyou want to continue the  quiz enter the choice "<<"\n";
		cout<<"1.start the quiz";
		cout<<"\n0.end the quiz"<<"\n";
	    cin>>ch;
	while(ch){
	
	    cout<<"\n\t\t20 marks per Ques(ten negative marking for wrong ans)";
	    cout<<"\n\t\tenter the answere in a,b,c or d";
        cout<<"\n\n\t which subject you want to give quiz select your choice:\n"
        <<"\n\t\t1) OOPS in C++:"
        <<"\n\t\t2) PYTHON"
        <<"\n\t\t3) JAVA"<<"\n";
        int c;
        cin>>c;
        switch(c)
         {
            case 1:{
			          q.quiz1();
			          cout<<"\n\n..................YOUR OOPS IN C++ QUIZ RESULT.................\n\n";
                      q.display();
                       break;
                     
			        }
        	case 2:{
				
			
        		   q.quiz2();
        		   cout<<"\n\n......................YOUR PYTHON QUIZ RESULT........................\n\n";
        		   q.display();
        		   break;
        	}
       		case 3:{
				
       			  q.quiz3();
       			  cout<<"\n\n......................YOUR JAVA QUIZ RESULT........................\n\n";
       			  q.display();
       			  break;
       		}
       		default:
        		cout<<"\ninvalid choice! enter the choice between 1,2,3 ";
       	
         }
	    	cout<<"\n\n\n\t\t\t\tyou want to continue the  quiz enter the choice "<<"\n";
		    cout<<"1.start the quiz";
		    cout<<"\n0.end the quiz"<<"\n";
	    cin>>ch;
    }
} 
