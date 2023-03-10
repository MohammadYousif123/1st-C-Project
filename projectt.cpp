#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;
void exit()
{
cout<<"thankyou so much sir for your precious time\n";
return exit();
}
void back()
{
	int main();
cout<<main();
}
void available_buses()
{
int bus_no;
char seat_y_n;
void reservation();
int main();

cout<<"HERE ARE THE AVAILABLE BUSES\n";
cout<<" 1.BUS NO:A-25\t\t\DEPARTURE TIME: 10 AM\t\tFROM:KARACHI TO LAHORE\t\tFARE: Rs.3000\n";
cout<<" 2.BUS NO:C-45\t\t\DEPARTURE TIME: 12 PM\t\tFROM:HYDERABAD TO SUKKUR\t\tFARE: Rs.1200\n";
cout<<" 3.BUS NO:B-35\t\t\DEPARTURE TIME: 01 PM\t\tFROM:KANDHKOT TO KARACHI\t\tFARE: Rs.1500\n";
cout<<" 4.BUS NO:D-55\t\t\DEPARTURE TIME: 03 PM\t\tFROM:KASHMORE TO LARKANA\t\tFARE: Rs.1000\n";
cout<<" 5.BUS NO:A-40\t\t\DEPARTURE TIME: 05 PM\t\tFROM:SUKKUR TO RAWALPINDI\t\tFARE: Rs.2800\n";
cout<<endl;
cout<<"select bus to view it's driver\n";
cin>>bus_no;
cout<<endl;
switch(bus_no)
{
case 1:cout<<"BUS NO:A-25\n";
cout<<"DRIVER NAME: ABHISHEK\n";
cout<<endl;
label1:
cout<<"do you want to reserve a ticket in this BUS? press 'y' for YES and 'n' for NO\n";
cin>>seat_y_n;
if(seat_y_n=='y' || seat_y_n=='Y')
{
	reservation();
}
else if(seat_y_n=='n' || seat_y_n=='N')
{
cout<<"thankyou!\n";
cout<<main();	
}
else {
cout<<"invalid entry\n";	
goto label1;
}
break;
case 2:cout<<" BUS NO:C-45\n";
cout<<"DRIVER NAME: JAGDESH\n";
cout<<endl;
label2:
cout<<"do you want to reserve a ticket in this BUS? press 'y' for YES and 'n' for NO\n";
cin>>seat_y_n;
if(seat_y_n=='y' || seat_y_n=='Y')
{
	reservation();
}
else if(seat_y_n=='n' || seat_y_n=='N')
{
cout<<"thankyou!\n";
cout<<main();	
}
else {
cout<<"invalid entry!\n";	
goto label2;
}
break;

case 3:cout<<"BUS NO:B-35\n";
cout<<"DRIVER NAME: RASHID\n";
cout<<endl;
label3:
cout<<"do you want to reserve a ticket in this BUS? press 'y' for YES and 'n' for NO\n";
cin>>seat_y_n;
if(seat_y_n=='y' || seat_y_n=='Y')
{
	reservation();
}
else if(seat_y_n=='n' || seat_y_n=='N')
{
cout<<"thankyou!\n";
cout<<main();	
}
else {
cout<<"invalid entry\n";	
goto label3;
}
break;
case 4:cout<<"BUS NO:D-55\n";
cout<<"DRIVER NAME: GOUTAM\n";
cout<<endl;
label4:
cout<<"do you want to reserve a ticket in this BUS? press 'y' for YES and 'n' for NO\n";
cin>>seat_y_n;
if(seat_y_n=='y' || seat_y_n=='Y')
{
	reservation();
}
else if(seat_y_n=='n' || seat_y_n=='N')
{
cout<<"thankyou!\n";
cout<<main();	
}
else {
cout<<"invalid entry!\n";	
goto label4;
}
break;
case 5:cout<<"BUS NO:A-40\n";
cout<<"DRIVER NAME: ZA BHUTTO\n";
cout<<endl;
label5:
cout<<"do you want to reserve a ticket in this BUS? press 'y' for YES and 'n' for NO\n";
cin>>seat_y_n;
if(seat_y_n=='y' || seat_y_n=='Y')
{
	reservation();
}
else if(seat_y_n=='n' || seat_y_n=='N')
{
cout<<"thankyou!\n";
cout<<main();	
}
else {
cout<<"invalid entry!\n";	
goto label5;
}
break;

}
}


void reservation()
{

cout<<"kindly fill up your reservation form\n";	
string pass_name;
long int pass_nmbr;
int st_no,correct_seat_no,bus_no;
char another_seat;

cout<<"give your seat number\n";
cin>>st_no;

if(st_no<=32)
{
cout<<"seat number:\t"<<st_no<<endl;}
else
{
cout<<"there are maximum 32 seats\n";
cout<<"enter the correct seat number\n";
cin>>correct_seat_no;
}

cout<<"give your name\n";
cin>>pass_name;
cout<<"give your contact number\n";	
cin>>pass_nmbr;

cout<<"enter your previous bus number\n";
cin>>bus_no;

cout<<"\t\t\t****you have succesfully reserved****\n";
cout<<"SEAT NUMBER:\t"<<st_no<<endl;
cout<<"PASSENGER NAME:\t"<<pass_name<<endl;
cout<<"CONTACT NUMBER:\t"<<pass_nmbr<<endl;

switch(bus_no)
{
case 25:	cout<<" 1.BUS NO:A-25\n";
                cout<<"DRIVER NAME: ABHISHEK\n";
                cout<<"DEPARTURE TIME: 10 AM\n";
                cout<<"FROM:KARACHI TO LAHORE\n";
                cout<<"\t\tFAIR: Rs:3000\n";
                cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"NOTE: kindly reach at the terminal half an hour before departure time\n";
				break;  
case 45:    
                cout<<"2.BUS NO:C-45\n";
				cout<<"DRIVER NAME: JAGDESH\n";
				cout<<"DEPARTURE TIME: 12 PM\n";
                cout<<"FROM:HYDERABAD TO SUKKUR\n";
                cout<<"\t\tFARE: Rs.1200\n";
                cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"NOTE: kindly reach at the terminal half an hour before departure time\n";
				break;                   
case 35:    
                cout<<"3.BUS NO: B-35\n";
                cout<<"DRIVER NAME: RASHID\n";
				cout<<"DEPARTURE TIME: 01 PM\n";
                cout<<"FROM:KANDHKOT TO KARACHI\n";
                cout<<"\t\tFARE: Rs.1500\n";
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"NOTE: kindly reach at the terminal half an hour before departure time\n";
				break;   
case 55:    
				cout<<" 4.BUS NO:D-55\n";
                cout<<"DRIVER NAME: GAUTAM\n";
				cout<<"DEPARTURE TIME: 03 PM\n";
				cout<<"FROM:KASHMORE TO LARKANA\n";
				cout<<"\t\tFARE: Rs.1000\n";
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"NOTE: kindly reach at the terminal half an hour before departure time\n";
				break; 
case 40:     
                cout<<" 5.BUS NO:A-40\n";
                cout<<"DRIVER NAME: ZA BHUTTO\n";
				cout<<"DEPARTURE TIME: 05 PM\n";
                cout<<"FROM:SUKKUR TO RAWALPINDI\n";
                cout<<"\t\tFARE: Rs.2800\n";
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"NOTE: kindly reach at the terminal half an hour before departure time\n";
                break;
}

cout<<endl;
label1: 
cout<<"do you want to reserve an other seat? press 'y' for YES and 'n' for NO\n";
cin>>another_seat;
   if(another_seat=='y' || another_seat=='Y')
{
reservation();
}
else if(another_seat=='n' || another_seat=='N')
{
exit();
}
else 
{
cout<<"invalid entry!\n";	
goto label1;
}

}




int main()
{
system("color 9b");
cout<<"\t\t\t*********************************\n";
cout<<"\t\t\t* BUS TICKET RESERVATION SYSTEM *\n";
cout<<"\t\t\t*********************************\n";
cout<<endl;
cout<<endl;
cout<<"\t\t*********************************\n";
cout<<"\t\t* AL-GHAZI NON-STOP BUS SERVICE *\n";
cout<<"\t\t*********************************\n";
cout<<endl;
cout<<endl;

cout<<"* * * * * * * * * * * * * * * * * * * * * "<<endl;
cout<<"*     *       *       *        *  *  *   *"<<endl;
cout<<"*     *       *       *        *  *  *   *"<<endl;
cout<<"*     HAWAI JAHAZ KA BACHA...! *          *"<<endl;
cout<<"*     *       *       *        *  *  *   *"<<endl;
cout<<"*     *       *       *        *  *  *   *"<<endl;
cout<<"*     *       *       *        *         *"<<endl;
cout<<"* * * * * * * * * * * * * * * * * * * * * "<<endl;
cout<<"     *   *        *   *                  "<<endl;
cout<<"      * *          * *                     "<<endl;



cout<<"\t**************************\n";
cout<<"\t* 1.AVAILABLE BUSES      *\n";
cout<<"\t* 2.RESERVATION          *\n";
cout<<"\t* 3.EXIT                 *\n";
cout<<"\t**************************\n";
cout<<endl;
cout<<endl;
cout<<"give your choice:-\n";





int a;
char x;
cin>>a;
switch(a)
{
case 1:available_buses();
reservation();
break;
case 2:reservation();
break;
label1:
case 3:cout<<"are you sure? Y/N?\n";
cin>>x;
if(x=='y' || x=='Y')
{
exit();	
}
else if(x=='n' || x=='N')
{
back();	
}
else 
{
	cout<<"invalid entry!\n";
	goto label1;
}





}



return 0;
}

