#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
using namespace std;

void insertRecord();
void showRecord();
void searchRecord();
void updateRecord();
void deleteRecord();

int value,total=0,choice;

struct student{
	
	string name;
	string student_ID;
	string email;
	int marks;
	char grade;

} stud[10];

void functionName()
{
	  system("cls");
	  cout<<"\n\n\n\n\t\t\t1. Insert record."<<endl;
	  cout<<"\t\t\t2. Show record."<<endl;
	  cout<<"\t\t\t3. Search record."<<endl;
	  cout<<"\t\t\t4. Update record."<<endl;
	  cout<<"\t\t\t5. Delete record."<<endl;
	  cout<<"\t\t\t6. Exit."<<endl;
	  cout<<"\n\nEnter your choice: ";
	  cin>>choice;	
	switch(choice)
	  {
		case 1:
			insertRecord();
			break;
		case 2:
			showRecord();
			break;
		case 3:
			searchRecord();
			break;
		case 4:
			updateRecord();
			break;
		case 5:
			deleteRecord();
			break;
		case 6:
			 exit(0);
	
		default:
			cout<<"\nInvalid choice: ";
			break;
     	}
}

void insertRecord(  )
{
	cout<<"\n\nHow many students do you want to enter: ";
	cin>>value;
	
	if ( total==0 )
	{
	   total=total+value;	
	     for ( int i=0; i<value; i++ )
	       {
		       cout<<"\nEnter data of student "<<i+1<<endl<<endl;
		       cout<<"Enter name: ";
		       cin>>stud[i].name;
		       cout<<"Enter Student's ID: ";
		       cin>>stud[i].student_ID;
		       cout<<"Enter Student's email: ";
		       cin>>stud[i].email;
		       cout<<"Enter Student's marks: ";
		       cin>>stud[i].marks;
		       cout<<"Enter Student's grade: ";
		       cin>>stud[i].grade;
	       }
    }
    else
    {
       for ( int i=total; i<value+total; i++ )
	       {
	           cout<<"\nEnter data of student "<<i+1<<endl;
		       cout<<"Enter name: ";
		       cin>>stud[i].name;
		       cout<<"Enter student_ID: ";
		       cin>>stud[i].student_ID;
		       cout<<"Enter students email: ";
		       cin>>stud[i].email;
		       cout<<"Enter students marks: ";
		       cin>>stud[i].marks;
		       cout<<"Enter students grade: ";
		       cin>>stud[i].grade;
	       }
	    total=total+value;
	}
	  functionName();
}


void showRecord()
{
	if ( total==0 )
	{
		cout<<"No data is entered: "<<endl;
	}
	else
	{
	
	   for ( int i=0; i<total; i++ )
	   {
		   cout<<"Data of student: "<<i+1<<endl;
		   cout<<"Student's name: "<<stud[i].name<<endl;
		   cout<<"Student's ID: "<<stud[i].student_ID<<endl;
	       cout<<"Student's email "<<stud[i].email<<endl;
	       cout<<"Student's marks: "<<stud[i].marks<<endl;
	       cout<<"Student's grades: "<<stud[i].grade<<endl;
	    }
    }
	functionName();
}

void searchRecord()
{
	if  ( total==0 )
	{
		cout<<"No data is entered: "<<endl;
	}
	else if( total!=0 )
	{
	   string num;
	   cout<<"Enter CMS_ID of student you want to search: "<<endl;
	   cin>>num;
	
	    for ( int i=0; i<total; i++ )
     	{
	     	if ( num==stud[i].student_ID )
		   {
	  	      cout<<"Data of student: "<<i+1<<endl;
	    	  cout<<"Student's name: "<<stud[i].name<<endl;
		      cout<<"Student's ID: "<<stud[i].student_ID<<endl;
	          cout<<"Student's email: "<<stud[i].email<<endl;
	          cout<<"Student's marks: "<<stud[i].marks<<endl;
	          cout<<"Student's grades: "<<stud[i].grade<<endl;		
		   }
	    }
   }
    functionName();
}
void updateRecord()
{
	if ( total==0 )
	{
		cout<<"No data is entered: "<<endl;
	}
	else
	{
	   string num;
	   cout<<"Enter CMS_ID of student you want to update: "<<endl;
	   cin>>num;
	
	   for ( int i=0; i<total; i++ )
	    {
		    if ( num==stud[i].student_ID )
		    {
		      cout<<"Previous data: "<<endl;
		      cout<<"Data of student: "<<i+1<<endl;
		      cout<<"Name: "<<stud[i].name<<endl;
		      cout<<"Student's ID: "<<stud[i].student_ID<<endl;
	          cout<<"Student's email: "<<stud[i].email<<endl;
	          cout<<"Student's marks: "<<stud[i].marks<<endl;
	          cout<<"Student's grade: "<<stud[i].grade<<endl;
		      cout<<"\nEnter new data: "<<endl;
		      cout<<"Enter Name: ";
		      cin>>stud[i].name;
		      cout<<"Enter Student's ID: ";
		      cin>>stud[i].student_ID;
		      cout<<"Enter Email: ";
		      cin>>stud[i].email;
		      cout<<"Enter Marks: ";
		      cin>>stud[i].marks;
		      cout<<"Enter Grade: ";
		      cin>>stud[i].grade;		
		    }
	    }
	}		
	functionName();
}
void deleteRecord()
{
	if ( total==0 )
	{
		cout<<"No data is entered: "<<endl;
	}
	else
	{
	 int value;
	 cout<<"Press 1 if you want to delete the whole record: "<<endl;
	 cout<<"Press 2 if you want to delete the specific record: "<<endl;
	 cin>>value;
	
	  if ( value==1 )
	  {
		 total=0;
		 cout<<"All the record is deleted: "<<endl;
	  }
	  else if (value==2 )
	  {
	    string num;
	    cout<<"Enter CMS_ID of student you want to delete: "<<endl;
	    cin>>num;
	
	      for ( int i=0; i<total; i++ )
	    {
		    if ( num==stud[i].student_ID )
		    {
			   for ( int j=0; j<total; j++ )
			   {
				 stud[j].name=stud[j+1].name;
				 stud[j].student_ID=stud[j+1].student_ID;
				 stud[j].email=stud[j+1].email;
				 stud[j].marks=stud[j+1].marks;
				 stud[j].grade=stud[j+1].grade;
			    }
			     total--;
			     cout<<"Your required record id deleted....!"<<endl;
		    }
        }
	  }
	}
	functionName();
}

int main()
{	
	cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\t"<<endl;
	cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\t"<<endl;
	cout<<"\n\t\t\t\t\tWelcome to Student Management System: "<<endl<<endl;
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\t"<<endl;
   	cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\t"<<endl;
	cout<<endl<<endl<<endl;
	
	int a=0,b=0;
	string id,password;
	
	ifstream read("dumy.text");
	string output;
	
	while (getline(read,output) )
	{
	  cout<<"\t\t\tLogin ID: ";
	  cin>>id;

		if ( output==id )
		{
			b++;
		}

		 if ( output!=id )
		{
		    cout<<"Incorrect id name: "<<endl;
			break;	
		}
    }
    
    ifstream read1("dumy1.text");
	string output1;

    while (getline(read1,output1) )
    {
    	if ( b==1 )
    	{
    		cout<<"\n\t\t\tPassword: ";
	        cin>>password;

            if ( output1==password )
		      {
			    a++;
		      }
	        if ( output1!=password )
		      {
		        cout<<"Incorrect password: "<<endl;
			    break;	
		      }	
		}
		else
		{
			cout<<"\nTry next time: "<<endl;
			exit(0);
		}
 	}
    
    if (   a==1 && b==1 )
    {
    	//system("cls");
    	cout<<"\n\n\n\n\n\t\t\t\tSuccessfull..............:)!!"<<endl;
    		functionName();
	}
	else
	{
		//system("cls");
		cout<<"\n\n\t\t\t\tUnsuccessfull............:(!!"<<endl;
	}
		
	return 0;
}
