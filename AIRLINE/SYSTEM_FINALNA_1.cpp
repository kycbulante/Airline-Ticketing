#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <string>
#include <mmsystem.h>
#include <iomanip>
#define ERR_CHOICE "\n INVALID CHOICE! Please try again ...\n"
#define CLEAR_BUFFER scanf ("%c", &temp)

using namespace std;

string name, email, pass, num, email1, pass1;
int temp;
int loginAttempt = 0;
double balance, paymentTotal, balancePayment;

COORD coord = { 0, 0 };
void gotoxy(int x, int y)
{
    coord.X = x; coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void fScreen()
{
	 system("cls");
	 gotoxy(25,3);
	 cout<<"\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E";
	 gotoxy(45,3);
	 cout<<"\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F";
	 gotoxy(25,4);
	 cout<<"\x1E \t\t  TECHNOLOGICAL UNIVERSITY OF THE PHILIPPINES  	\t\x1F";
	 gotoxy(25,5);
	 cout<<"\x1E \t\t\t\t  Manila                    	\t\x1F";
	 gotoxy(25,6);
	 cout<<"\x1E								\t\x1F";
	 gotoxy(25,7);
	 cout<<"\x1E\t\t      CC101L-M - Computer Programming		\t\x1F";
	 gotoxy(25,8);
	 cout<<"\x1E\t\t\t2nd Semester S.Y. 2020-2021      	  \t\x1F";
	 gotoxy(25,9);
	 cout<<"\x1E								\t\x1F";
	 gotoxy(25,10);
	 cout<<"\x1E \t\t\t       Final Project                  	  \t\x1F";
	 gotoxy(25,11);
	 cout<<"\x1E\t        Title: DIGITAL FLIGHT TICKETING AND RESERVATION \t\x1F";
	 gotoxy(25,12);
	 cout<<"\x1E \t\t\t   SYSTEM FOR ONSEN TA AIRLINES          \t\x1F";
	 gotoxy(25,13);
	 cout<<"\x1E								\t\x1F";
	 gotoxy(25,14);
	 cout<<"\x1E \t\tMembers: Adison, Angela Camille - BSIT       	  \t\x1F";
	 gotoxy(25,15);
	 cout<<"\x1E \t\t\t Bulante, Kaycee - BSIT          	  \t\x1F";
	 gotoxy(25,16);
	 cout<<"\x1E \t\t\t Escotido, Kate Febe - BSIT      	  \t\x1F";
	 gotoxy(25,17);
	 cout<<"\x1E \t\t\t Ramirez, Kairos - BSIT          	  \t\x1F";
	 gotoxy(25,18);
	 cout<<"\x1E \t\t\t Sumeracruz, Jamiel - BSIT      	  \t\x1F";
	 gotoxy(25,19);
	 cout<<"\x1E \t\tInstructor: Ms. Jasmin A. Caliwag           	  \t\x1F";
	 gotoxy(25,20);
	 cout<<"\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E";
	 gotoxy(45,20);
	 cout<<"\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F\x1E\x1F"<<flush;
	 cout<<""<<flush;
	 _getch();
	 system("cls");
	gotoxy(37,3);
	cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
	gotoxy(53,6);
	cout<<"  Welcome to";
	gotoxy(50,7);
	cout<<" ONSEN TA AIRLINES";
	gotoxy(39,10);
    cout<<"           %%                           ";
    gotoxy(39,11);
	cout<<"         %%%%%%%%                       ";
    gotoxy(39,12);
	cout<<"            %%%%%%%%.            %%%%%  ";
    gotoxy(39,13);
	cout<<"              %%%%%%%%%%    %%%%%%%%%%  ";
    gotoxy(39,14);
	cout<<"                %%%%%%%%%%%%%%%%%%      ";
    gotoxy(39,15);
	cout<<"                  %%%%%%%%%%%           ";
    gotoxy(39,16);
	cout<<"      %%      %%%%%%%%%%%%%%            ";
    gotoxy(39,17);
	cout<<"     %%%%%%%%%%%%%%%%%%%%%%%            ";
    gotoxy(39,18);
	cout<<"      .%%%%%%%%      %%%%%%            ";
    gotoxy(39,19);
	cout<<"        %%%%         %%%%%%             ";
    gotoxy(39,20);
	cout<<"         %%%          %%%%%             ";
    gotoxy(39,21);
	cout<<"                      %%%%%             ";
    gotoxy(39,22);
	cout<<"                      %%%%              ";
	gotoxy(37,25);
	cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
	PlaySound(TEXT("welcome.wav"),NULL,SND_SYNC);
	_getch();
}

void cAccount()
{
	system("cls");
	int r,q;
	gotoxy(30,6);
    cout <<"\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0 Create your Account \xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0 ";
    gotoxy(39,9);
    cout <<"\x10 Name : ";
    getline (cin, name);
	gotoxy(39,11);
    cout << "\x10 Email : ";
    getline (cin, email);
 	gotoxy(39,13);
    cout <<"\x10 Mobile Number : ";
    getline (cin, num);
 	gotoxy(39,15);
    cout <<"\x10 Password : ";
    getline (cin, pass);

    char save;
    gotoxy(39,18);
    cout <<"Save this record? [Y/N] : ";
    cin>> save;
    if (toupper (save) =='Y')
    {
        ofstream file;
        file.open(email + "email.txt");
        file << email << endl << pass;
        file.close();
    	gotoxy (49,20);
    	cout<<"Saving Record";
    	gotoxy(62,20);
    	for(r=0;r<=5;r++)
    {
        for(q=1;q<=100000000;q++);
        cout<<".";
    }
    	gotoxy(49,22);
        cout <<"Record Saved!";
        _getch();
    }
    else
    {
    	gotoxy(50,21);
        cout<<"Record did not save";
        gotoxy(35,24);
        cout<<"Going back to Main Menu";
        gotoxy(58,24);
	    for(r=0;r<=5;r++)
	    {
	        for(q=1;q<=100000000;q++);
	        cout<<".";
	    }
    }
}


void rTicket()
{
    system("cls");
    string destination;
    int select,pref,dest=0,passenger,seatClass=0;
    int tDest[9]={0};
    int tManila=0, tDavao=0, tCebu=0, tBacolod=0, tCoron=0, tSurigao=0, tUSA=0, tSingapore=0, tAustralia=0, finalTotal=0, from=0;
	double balance, paymentTotal, balancePayment, change;
    double total;
    char ex,back,xit;
     do{
    while(from<=0||from>=9){
    system("cls");
     gotoxy(43,2);
    cout<<"RESERVING FLIGHT";
    gotoxy(20,7);;
    cout<<"1 Manila\t\t\t2 Cebu\t\t\t3 Davao";
    gotoxy(20,10);
	cout<<"4 Bacolod\t\t\t5 Coron\t\t\t6 Surigao";
	gotoxy(20,13);
	cout<<"7 USA\t\t\t8 Singapore\t\t9 Australia";
    gotoxy(17,20);
    cout<<"YOU'RE FLYING FROM? (ENTER 1-9) : ";
	cin>>from;
	if(from<=0||from>=9)
    {
    cout<<"\n\t\t\t PLEASE SELECT FROM 1 to 9 ONLY ";
    _getch();
    }
    }
    do{
    system("cls");
    gotoxy(30,5);
    cout<<"\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF";
    gotoxy(30,6);
    cout<<"\xB3 \t\tPLEASE CHOOSE YOUR DESTINATION \t\t\t\xB3";
    gotoxy(30,7);
    cout<<"\xB3\t\t\t\t\t\t\t\t\t\xB3";
    gotoxy(30,8);
    cout<<"\xB3 1. DOMESTIC FLIGHT (INTERNATIONAL AIRPORT)\t\t\t\xB3";
    gotoxy(30,9);
    cout<<"\xB3 \t\t\t\t\t\t\t\t\xB3";
    gotoxy(30,10);
    cout<<"\xB3 2. DOMESTIC FLIGHT (PRINCIPAL DOMESTIC AIRPORT)\t\t\t\xB3";
    gotoxy(30,11);
    cout<<"\xB3 \t\t\t\t\t\t\t\t\xB3";
    gotoxy(30,12);
    cout<<"\xB3 3. INTERNATIONAL FLIGHT\t\t\t\t\t\t\xB3";
    gotoxy(30,13);
    cout<<"\xB3 \t\t\t\t\t\t\t\t\xB3";
    gotoxy(30,14);
    cout<<"\xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9";
    gotoxy(30,15);
    cout<<"    ENTER YOUR OPTION : ";
	cin>>select;

    switch (select)
    {
    case 1:
        {

            do{
            system("cls");
            gotoxy(0,1);
			cout<<"\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
            gotoxy(55,1);
			cout<<"\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
			gotoxy(49,2);
            cout<<"INTERNATIONAL AIRPORT";
            gotoxy(0,3);
            cout<<"\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
            gotoxy(54,3);
            cout<<"\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
			gotoxy(26,5);
            cout<<"1. MANILA"<<"\t\t\t"<<"2. CEBU"<<"\t\t\t\t"<<"3. DAVAO";
            gotoxy(20,8);
            cout<<"PLEASE CHOOSE YOUR DESTINATION (1-3): ";
            cin>>dest;
            if(dest==from)
            {
                cout<<"\n\t\t\t DESTINATION AND WHERE YOU ARE FROM CANNOT BE THE SAME";
                _getch();
            }
            if(dest>3)
            {
                 cout<<"\n\t\t\t PLEASE SELECT FROM 1 to 3 ONLY ";
                _getch();
            }
            }while((dest==from)||(dest>3));

                if(dest==1)
                    {
                    	destination="MANILA";
                        gotoxy(37,11);
                        cout<<"YOUR CHOSEN DESTINATION IS MANILA";
                        gotoxy(20,14);
                        cout<<"ENTER THE NUMBER OF PASSENGER : ";
                        cin>>passenger;
                        do{
                        gotoxy(20,17);
                        cout<<"PLEASE SELECT YOUR DESIRED SEAT CLASS";
                        gotoxy(26,20);
                        cout<<"1. ECONOMIC CLASS\t\t2. BUSINESS CLASS\t\t3. FIRST CLASS";
                        gotoxy(32,22);
						cout<<"870\t\t      \t\t1350\t\t       \t2400";
                        gotoxy(20,25);
						cout<<"PLEASE ENTER YOUR OPTION (1-3): ";
                        cin>>seatClass;
                        if(seatClass>3)
                        {
                            cout<<"\n\t\t\t PLEASE SELECT FROM 1 to 3 ONLY ";
                             _getch();
                        }
                        }while(seatClass>3);
                            if (seatClass==1)
                            {
                                total=870*passenger;
                                tDest[0]=tDest[0]+total;
                            }
                            else if(seatClass==2)
                            {
                                total=1350*passenger;
                                tDest[0]=tDest[0]+total;
                            }
                            else if(seatClass==3)
                            {
                                total=2400*passenger;
                                tDest[0]=tDest[0]+total;
                            }
                            cout<<"\n\n\tRESERVATION COMPLETE";
                            PlaySound(TEXT("rc.wav"),NULL,SND_SYNC);

                    }
                        else if(dest==2)
                        {
                        	destination="CEBU";
                        	gotoxy(37,11);
                            cout<<"YOUR CHOSEN DESTINATION IS CEBU";
                            gotoxy(20,14);
                            cout<<"ENTER THE NUMBER OF PASSENGER : ";
                            cin>>passenger;
                              do{
                            seatClass=0;
                        gotoxy(20,17);
                        cout<<"PLEASE SELECT YOUR DESIRED SEAT CLASS";
                        gotoxy(26,20);
                        cout<<"1. ECONOMIC CLASS\t\t2. BUSINESS CLASS\t\t3. FIRST CLASS";
                        gotoxy(32,22);
						cout<<"870\t\t      \t\t1350\t\t       \t2400";
                        gotoxy(20,25);
						cout<<"PLEASE ENTER YOUR OPTION (1-3): ";
                        cin>>seatClass;
                        if(seatClass>3)
                        {
                            cout<<"\n\t\t\t PLEASE SELECT FROM 1 to 3 ONLY ";
                             _getch();
                        }
                        }while(seatClass>3);
                             if (seatClass==1)
                            {
                                total=900*passenger;
                                tDest[1]=tDest[1]+total;
                            }
                            else if(seatClass==2)
                            {
                                total=1550*passenger;
                                tDest[1]=tDest[1]+total;
                            }
                            else if(seatClass==3)
                            {
                                total=2900*passenger;
                                tDest[1]=tDest[1]+total;
                            }
                            cout<<"\n\n\tRESERVATION COMPLETE";
                            PlaySound(TEXT("rc.wav"),NULL,SND_SYNC);
                        }
                        else if(dest==3)
                        {
                        	destination="DAVAO";
                        	gotoxy(37,11);
                            cout<<"YOUR CHOSEN DESTINATION IS DAVAO";
                            gotoxy(20,14);
                            cout<<"ENTER THE NUMBER OF PASSENGER : ";
                            cin>>passenger;
                              do{
                                seatClass=0;
                        gotoxy(20,17);
                        cout<<"PLEASE SELECT YOUR DESIRED SEAT CLASS";
                        gotoxy(26,20);
                        cout<<"1. ECONOMIC CLASS\t\t2. BUSINESS CLASS\t\t3. FIRST CLASS";
                        gotoxy(32,22);
						cout<<"870\t\t      \t\t1350\t\t       \t2400";
                        gotoxy(20,25);
						cout<<"PLEASE ENTER YOUR OPTION (1-3): ";
                        cin>>seatClass;
                        if(seatClass>3)
                        {
                            cout<<"\n\t\t\t PLEASE SELECT FROM 1 to 3 ONLY ";
                             _getch();
                        }
                        }while(seatClass>3);
                             if (seatClass==1)
                            {
                                total=930*passenger;
                                tDest[2]=tDest[2]+total;
                            }
                            else if(seatClass==2)
                            {
                                total=1400*passenger;
                                tDest[2]=tDest[2]+total;
                            }
                            else if(seatClass==3)
                            {
                                total=2650*passenger;
                                tDest[2]=tDest[2]+total;
                            }
                            {
                                cout<<"\n\n\tENTER A VALID SEAT CLASS NUMBER";
                            }
                            cout<<"\n\n\tRESERVATION COMPLETE";
                            PlaySound(TEXT("rc.wav"),NULL,SND_SYNC);
                        }
                            gotoxy(20,25);
                            cout<<"ENTER A VALID DESTINATION NUMBER";

                break;
        }//end of case 1

    case 2:
        {
            if (from==1||from==2||from==3)
                from=0;
            do{
            system("cls");
            gotoxy(0,1);
            cout<<"\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
            gotoxy(55,1);
			cout<<"\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
			gotoxy(49,2);
            cout<<"PRINCIPAL DOMESTIC AIRPORT";
            gotoxy(0,3);
            cout<<"\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
            gotoxy(54,3);
            cout<<"\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
			gotoxy(26,5);
            cout<<"1. BACOLOD"<<"\t\t\t"<<"2. CORON"<<"\t\t\t"<<"3. SURIGAO";
            gotoxy(20,8);
            cout<<"PLEASE CHOOSE YOUR DESTINATION : ";
            cin>>dest;
            if (from==4)
                {from=1;}
            else if (from==5)
                {from=2;}
            else if (from==6)
                {from=3;}
            if(dest==from)
            {
                cout<<"\n\t\t\t DESTINATION AND WHERE YOU ARE FROM CANNOT BE THE SAME";
                _getch();
            }
            }while((dest==from)||(dest>3));
                if(dest==1)
                    {
                    	destination="BACOLOD";
                        gotoxy(37,11);
                        cout<<"YOUR CHOSEN DESTINATION IS BACOLOD";
                        gotoxy(20,14);
                        cout<<"ENTER THE NUMBER OF PASSENGER : ";
                        cin>>passenger;
                           do{
                                seatClass=0;
                        gotoxy(20,17);
                        cout<<"PLEASE SELECT YOUR DESIRED SEAT CLASS";
                        gotoxy(26,20);
                        cout<<"1. ECONOMIC CLASS\t\t2. BUSINESS CLASS\t\t3. FIRST CLASS";
                        gotoxy(32,22);
						cout<<"870\t\t      \t\t1350\t\t       \t2400";
                        gotoxy(20,25);
						cout<<"PLEASE ENTER YOUR OPTION (1-3): ";
                        cin>>seatClass;
                        if(seatClass>3)
                        {
                            cout<<"\n\t\t\t PLEASE SELECT FROM 1 to 3 ONLY ";
                             _getch();
                        }
                        }while(seatClass>3);
                            if (seatClass==1)
                            {
                                total=730*passenger;
                                tDest[3]=tDest[3]+total;
                            }
                            else if(seatClass==2)
                            {
                                total=1250*passenger;
                                tDest[3]=tDest[3]+total;
                            }
                            else if(seatClass==3)
                            {
                                total=2150*passenger;
                                tDest[3]=tDest[3]+total;
                            }
                            cout<<"\n\n\tRESERVATION COMPLETE";
                            PlaySound(TEXT("rc.wav"),NULL,SND_SYNC);
                        }
                    else if(dest==2)
                        {
                        	destination="CORON";
                        	gotoxy(37,11);
                            cout<<"YOUR CHOSEN DESTINATION IS CORON";
                            gotoxy(20,14);
                            cout<<"ENTER THE NUMBER OF PASSENGER : ";
                            cin>>passenger;
                              do{
                            seatClass=0;
                        gotoxy(20,17);
                        cout<<"PLEASE SELECT YOUR DESIRED SEAT CLASS";
                        gotoxy(26,20);
                        cout<<"1. ECONOMIC CLASS\t\t2. BUSINESS CLASS\t\t3. FIRST CLASS";
                        gotoxy(32,22);
						cout<<"870\t\t      \t\t1350\t\t       \t2400";
                        gotoxy(20,25);
						cout<<"PLEASE ENTER YOUR OPTION (1-3): ";
                        cin>>seatClass;
                        if(seatClass>3)
                        {
                            cout<<"\n\t\t\t PLEASE SELECT FROM 1 to 3 ONLY ";
                             _getch();
                        }
                        }while(seatClass>3);
                             if (seatClass==1)
                            {
                                total=930*passenger;
                                tDest[4]= tDest[4]+total;
                            }
                            else if(seatClass==2)
                            {
                                total=1400*passenger;
                                tDest[4]= tDest[4]+total;
                            }
                            else if(seatClass==3)
                            {
                                total=2350*passenger;
                                tDest[4]= tDest[4]+total;
                            }
                            cout<<"\n\n\tRESERVATION COMPLETE";
							PlaySound(TEXT("rc.wav"),NULL,SND_SYNC);
                    	}
                      else if(dest==3)
                        {
                        	destination="SURIGAO";
                        	gotoxy(37,11);
                            cout<<"YOUR CHOSEN DESTINATION IS SURIGAO";
                            gotoxy(20,14);
                            cout<<"ENTER THE NUMBER OF PASSENGER : ";
                            cin>>passenger;
                              do{
                        seatClass=0;
                        gotoxy(20,17);
                        cout<<"PLEASE SELECT YOUR DESIRED SEAT CLASS";
                        gotoxy(26,20);
                        cout<<"1. ECONOMIC CLASS\t\t2. BUSINESS CLASS\t\t3. FIRST CLASS";
                        gotoxy(32,22);
						cout<<"870\t\t      \t\t1350\t\t       \t2400";
                        gotoxy(20,25);
						cout<<"PLEASE ENTER YOUR OPTION (1-3): ";
                        cin>>seatClass;
                        if(seatClass>3)
                        {
                            cout<<"\n\t\t\t PLEASE SELECT FROM 1 to 3 ONLY ";
                             _getch();
                        }
                        }while(seatClass>3);
                             if (seatClass==1)
                            {
                                total=830*passenger;
                                tDest[5]= tDest[5]+total;
                            }
                            else if(seatClass==2)
                            {
                                total=1100*passenger;
                                tDest[5]= tDest[5]+total;
                            }
                            else if(seatClass==3)
                            {
                                total=1980*passenger;
                                tDest[5]= tDest[5]+total;
                            }
                            cout<<"\n\n\tRESERVATION COMPLETE";
                        	PlaySound(TEXT("rc.wav"),NULL,SND_SYNC);
                        }
                            break;
        }//end of case 2
	case 3:
        {
            if (from==1||from==2||from==3)
                from=0;
            do{
            system("cls");
            gotoxy(0,1);
            cout<<"\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
            gotoxy(55,1);
			cout<<"\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
           	gotoxy(49,2);
            cout<<"INTERNATIONAL FLIGHT";
            gotoxy(0,3);
            cout<<"\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
            gotoxy(54,3);
            cout<<"\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
			gotoxy(26,5);
            cout<<"1. USA"<<"\t\t\t"<<"2. SINGAPORE"<<"\t\t\t"<<"3. AUSTRALIA";
            gotoxy(20,8);
            cout<<"PLEASE CHOOSE YOUR DESTINATION : ";
            cin>>dest;
            if (from==7)
                {from=1;}
            else if (from==8)
                {from=2;}
            else if (from==9)
                {from=3;}
            if(dest==from)
            {
                cout<<"\n\t\t\t DESTINATION AND WHERE YOU ARE FROM CANNOT BE THE SAME";
                _getch();
            }
            }while(dest==from);
                    if(dest==1)
                        {
                        	destination="USA";
                        	gotoxy(37,11);
                            cout<<"YOUR CHOSEN DESTINATION IS USA";
                            gotoxy(20,14);
                            cout<<"ENTER THE NUMBER OF PASSENGER : ";
                            cin>>passenger;
                              do{
                                seatClass=0;
                        gotoxy(20,17);
                        cout<<"PLEASE SELECT YOUR DESIRED SEAT CLASS";
                        gotoxy(26,20);
                        cout<<"1. ECONOMIC CLASS\t\t2. BUSINESS CLASS\t\t3. FIRST CLASS";
                        gotoxy(32,22);
						cout<<"870\t\t      \t\t1350\t\t       \t2400";
                        gotoxy(20,25);
						cout<<"PLEASE ENTER YOUR OPTION (1-3): ";
                        cin>>seatClass;
                        if(seatClass>3)
                        {
                            cout<<"\n\t\t\t PLEASE SELECT FROM 1 to 3 ONLY ";
                             _getch();
                        }
                        }while(seatClass>3);
                            if (seatClass==1)
                            {
                                total=4870*passenger;
                                tDest[6]= tDest[6]+total;
                            }
                            else if(seatClass==2)
                            {
                                total=5600*passenger;
                                tDest[6]= tDest[6]+total;
                            }
                            else if(seatClass==3)
                            {
                                total=7390*passenger;
                                tDest[6]= tDest[6]+total;
                            }
                            cout<<"\n\n\tRESERVATION COMPLETE";
                        	PlaySound(TEXT("rc.wav"),NULL,SND_SYNC);
                        }
                    else if(dest==2)
                        {
                        	destination="SINGAPORE";
                        	gotoxy(37,11);
                            cout<<"YOUR CHOSEN DESTINATION IS SINGAPORE";
                            gotoxy(20,14);
                            cout<<"ENTER THE NUMBER OF PASSENGER : ";
                            cin>>passenger;
                              do{
                                seatClass=0;
                        gotoxy(20,17);
                        cout<<"PLEASE SELECT YOUR DESIRED SEAT CLASS";
                        gotoxy(26,20);
                        cout<<"1. ECONOMIC CLASS\t\t2. BUSINESS CLASS\t\t3. FIRST CLASS";
                        gotoxy(32,22);
						cout<<"870\t\t      \t\t1350\t\t       \t2400";
                        gotoxy(20,25);
						cout<<"PLEASE ENTER YOUR OPTION (1-3): ";
                        cin>>seatClass;
                        if(seatClass>3)
                        {
                            cout<<"\n\t\t\t PLEASE SELECT FROM 1 to 3 ONLY ";
                             _getch();
                        }
                        }while(seatClass>3);
                             if (seatClass==1)
                            {
                                total=2070*passenger;
                                tDest[7]= tDest[7]+total;
                            }
                            else if(seatClass==2)
                            {
                                total=3540*passenger;
                                tDest[7]= tDest[7]+total;
                            }
                            else if(seatClass==3)
                            {
                                total=5670*passenger;
                                tDest[7]= tDest[7]+total;
                            }
                            cout<<"\n\n\tRESERVATION COMPLETE";
                        	PlaySound(TEXT("rc.wav"),NULL,SND_SYNC);

                   		}
                      else if(dest==3)
                        {
                        	destination="AUSTRALIA";
                        	gotoxy(37,11);
                            cout<<"YOUR CHOSEN DESTINATION IS AUSTRALIA";
                            gotoxy(20,14);
                            cout<<"ENTER THE NUMBER OF PASSENGER : ";
                            cin>>passenger;
                               do{
                                    seatClass=0;
                        gotoxy(20,17);
                        cout<<"PLEASE SELECT YOUR DESIRED SEAT CLASS";
                        gotoxy(26,20);
                        cout<<"1. ECONOMIC CLASS\t\t2. BUSINESS CLASS\t\t3. FIRST CLASS";
                        gotoxy(32,22);
						cout<<"870\t\t      \t\t1350\t\t       \t2400";
                        gotoxy(20,25);
						cout<<"PLEASE ENTER YOUR OPTION (1-3): ";
                        cin>>seatClass;
                        if(seatClass>3)
                        {
                            cout<<"\n\t\t\t PLEASE SELECT FROM 1 to 3 ONLY ";
                             _getch();
                        }
                        }while(seatClass>3);
                             if (seatClass==1)
                            {
                                total=1870*passenger;
                                tDest[8]= tDest[8]+total;
                            }
                            else if(seatClass==2)
                            {
                                total=2350*passenger;
                                tDest[8]= tDest[8]+total;
                            }
                            else if(seatClass==3)
                            {
                                total=4400*passenger;
                                tDest[8]= tDest[8]+total;
                            }
                            cout<<"\n\n\tRESERVATION COMPLETE";
                        	PlaySound(TEXT("rc.wav"),NULL,SND_SYNC);
                        }
                            break;
        	}//end of case 3
    }//end of switch main
    system("cls");
    gotoxy(25,3);
    cout<<"\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD";
    gotoxy(45,3);
    cout<<"\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB";
    cout<<"\n\t\t\t \xBA\t\t\t\tONSEN TA TICKET \t\t\t\t\t \xBA";
    gotoxy(25,5);
    cout<<"\xBA	\t\t\t\t\t\t\t\t\t\t \xBA";
    gotoxy(25,6);
    cout<<"\xBA \tFLYING FROM: "<<from; cout<<"\t\t\t\t\t\t\t\t\t \xBA";
    gotoxy(25,7);
    cout<<"\xBA\t\t\t\t\t\t\t\t\t\t\t \xBA";
    gotoxy(25,8);
    cout<<"\xBA DESIGNATED DESTINATION: "<<destination;cout<<"\t\t\t\t\t\t\t \xBA";
    gotoxy(25,9);
    cout<<"\xBA\t\t\t\t\t\t\t\t\t\t\t \xBA";
    gotoxy(25,10);
    cout<<"\xBA \tSEATCLASS: "<<seatClass; cout<<"\t\t\t\t\t\t\t\t\t \xBA";
    gotoxy(25,11);
    cout<<"\xBA\t\t\t\t\t\t\t\t\t\t\t \xBA";
    gotoxy(25,12);
    cout<<"\xBA \tNUMBER OF PASSENGER: "<<passenger; cout<<"\t\t\t\t\t\t\t\t \xBA";
    gotoxy(25,13);
    cout<<"\xBA\t\t\t\t\t\t\t\t\t\t\t \xBA";
    gotoxy(25,14);
    cout<<"\xBA \tTOTAL PAYMENT: "<<total; cout<<"\t\t\t\t\t\t\t\t \xBA";
    gotoxy(25,15);
    cout<<"\xBA\t\t\t\t\t\t\t\t\t\t\t \xBA";
   	gotoxy(25,16);
    cout<<"\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD";
	gotoxy(54,16);
	cout<<"\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
	gotoxy(25,18);
    cout<<" DO YOU WANT TO RESERVE ANOTHER TICKET? (Y/N): ";
    cin>>ex;
	}//end of do
    while(((ex=='Y')||(ex=='y')));

//Summary of prices//
	system("cls");
	gotoxy(28,4);
	cout<<"\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF";
	gotoxy(28,5);
	cout<<"\xB3\t\t\t  YOUR TICKET-ITENERARY\t\t\t\t\t\xB3";
	gotoxy(28,6);
	cout<<"\xB3 \t\t\t\t\t\t\t\t\t\t\xB3";
	gotoxy(28,7);
	cout<<"\xB3 \t     DESTINATIONS\t\t       Prices\t\t\t\t\xB3";
	gotoxy(28,8);
	cout<<"\xB3 \t\t\t\t\t\t\t\t\t\t\xB3";
	gotoxy(28,9);
    cout<<"\xB3 \t\tManila       \t\t\t"<<tDest[0]; cout<<"\t\t\t\t\xB3";
    gotoxy(28,10);
	cout<<"\xB3 \t\t\t\t\t\t\t\t\t\t\xB3";
    gotoxy(28,11);
    cout<<"\xB3 \t\tDavao      \t\t\t"<<tDest[2]; cout<<"\t\t\t\t\xB3";
    gotoxy(28,12);
	cout<<"\xB3 \t\t\t\t\t\t\t\t\t\t\xB3";
    gotoxy(28,13);
    cout<<"\xB3 \t\tCebu       \t\t\t"<<tDest[1]; cout<<"\t\t\t\t\xB3";
    gotoxy(28,14);
	cout<<"\xB3 \t\t\t\t\t\t\t\t\t\t\xB3";
    gotoxy(28,15);
    cout<<"\xB3 \t\tBacolod        \t\t\t"<<tDest[3]; cout<<"\t\t\t\t\xB3";
    gotoxy(28,16);
	cout<<"\xB3 \t\t\t\t\t\t\t\t\t\t\xB3";
    gotoxy(28,17);
    cout<<"\xB3 \t\tCoron      \t\t\t"<<tDest[4]; cout<<"\t\t\t\t\xB3";
    gotoxy(28,18);
	cout<<"\xB3 \t\t\t\t\t\t\t\t\t\t\xB3";
    gotoxy(28,19);
    cout<<"\xB3 \t\tSurigao        \t\t\t"<<tDest[5]; cout<<"\t\t\t\t\xB3";
    gotoxy(28,20);
	cout<<"\xB3 \t\t\t\t\t\t\t\t\t\t\xB3";
    gotoxy(28,21);
    cout<<"\xB3 \t\tUSA       \t\t\t"<<tDest[6]; cout<<"\t\t\t\t\xB3";
    gotoxy(28,22);
	cout<<"\xB3 \t\t\t\t\t\t\t\t\t\t\xB3";
    gotoxy(28,23);
    cout<<"\xB3 \t\tSingapore      \t\t\t"<<tDest[7]; cout<<"\t\t\t\t\xB3";
    gotoxy(28,24);
	cout<<"\xB3 \t\t\t\t\t\t\t\t\t\t\xB3";
    gotoxy(28,25);
    cout<<"\xB3 \t\tAustralia      \t\t\t"<<tDest[8]; cout<<"\t\t\t\t\xB3";
	gotoxy(28,26);
	cout<<"\xB3 \t\t\t\t\t\t\t\t\t\t\xB3";

    finalTotal=tDest[0] + tDest[2] + tDest[1] + tDest[3] + tDest[4] + tDest[5] + tDest[6] + tDest[7] + tDest[8];

    gotoxy(28,27);
	cout<<"\xB3 Total Amount to Pay : "<<finalTotal; cout<<"\t\t\t\t\t\t\xB3";
 	gotoxy(28,28);
 	cout<<"\xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9";
	gotoxy(43,30);
	cout<<" PRESS ENTER TO PROCEED TO PAYMENT ";
	_getch();


//Payment//
	  system("cls");
			finalTotal=tDest[0] + tDest[2] + tDest[1] + tDest[3] + tDest[4] + tDest[5] + tDest[6] + tDest[7] + tDest[8];
		    gotoxy(30,6);
		    cout<<"\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 PAYMENT \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1";
			gotoxy(35,8);
			cout<<"Total Amount to Pay : \t\t"<<finalTotal;
			gotoxy(35,10);
			cout<<"Enter amount of payment : \t\t";
		    cin>>paymentTotal;
		    if (paymentTotal>=finalTotal)
        {
        change = paymentTotal - finalTotal;
        cout<<"\n\n\t\t\t\t   Your change :\t\t\t"<<change;
        for(int i=0;i<=8;i++)
        {
            tDest[i]=0;
        }
        }
    else {
        balance= finalTotal-paymentTotal;
        gotoxy(30,12);
        cout<<"\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
        gotoxy(35,14);
        cout<<"BALANCE : \t\t\t\t"<<balance;

        while(balance>0)
            {
				cout<<"\n\n\t\t\t\t   PLEASE PAY REMAINING BALANCE : \t"<<balance;
            	cout<<"\n\n\t\t\t      \x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
	            cout<<"\n\n\t\t\t\t   ENTER AMOUNT OF PAYMENT : \t\t";
	            cin>>balancePayment;
	            balance=balance-balancePayment;
        {
            if (balance <=0)
			{
	            change = abs(balance);
	            cout<<"\n\n\t\t\t\t   Your change :\t\t\t"<<change;
               for(int i=0;i<=8;i++)
                {
                tDest[i]=0;
                }
	            cout<<"\n\t\t	       \x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16\x16";
            }
        }
            }
        }
		cout<<"\n\n\n\n\n\t\t\t\t\t\t    TRANSACTION COMPLETE";
		cout<<"\n\t\t\t\t\t    Press [Y] to Redirect at Login Page\n\t\t\t\t\t    Press [A] to Reserve another Ticket \n\t\t\t\t\t\t      Press [E] to Exit \t\t\t ";
		cin>>back;
		if( back=='Y'||back=='y')
		{
			system("cls");
			return; void mainmenu();
		}
		else if (back=='E'||back=='e'){
			PlaySound(TEXT("term.wav"),NULL,SND_SYNC);
			exit(0);}
        else
            cout<<"\n\n\t\t\t\tPLEASE ENTER FROM THE CHOICES";
        }//end of do
         while(back=='A'||back=='a');

}//end of rticket

bool isLoggedIn ()
{
    string un, pw, username, password;

        cout << "\x0F Email: "; cin>>email;
        gotoxy(39,11);
        cout << "\x0F Password: "; cin>>pass;

    fstream read (email + "email.txt");
    getline(read, un);
    getline (read, pw);

    if (un==email && pw == pass)
    {
        return true;
    }
    else
    {
        return false;

    }
}


int logIn()
{
    char choice;
	system("cls");
	gotoxy(30,6);

    while (loginAttempt < 5)
    {
        gotoxy(30,6);
    cout <<"\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0 Log-in your Account \xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0";
    	gotoxy(39,9);

    	bool status = isLoggedIn();

        if (!status)
        {
            gotoxy(35,20);
            cout << "Invalid log-in attempt. Please try again." << '\n';
            system ("PAUSE");
            return 0;
        }
        else
        {
            gotoxy(45,15);
            cout <<"You have logged in successfully!";
            gotoxy(44,17);
            cout<<"Press ENTER to continue reserving";
            _getch();
            system("cls");
            rTicket();
            return 1;
        }

    }
return 0;
}


void mainmenu()
{
	system("cls");

	int menu;

	gotoxy(30,5);
	cout<<"Please login first.";
	gotoxy(30,7);
	cout<<"Don't have an account? Create one.";
	gotoxy(32,10);
	cout<<"1. Create Account";
	gotoxy(32,13);
	cout<<"2. Log-in";
	gotoxy(32,16);
	cout<<"3. Exit";
	gotoxy(32,20);
	cout<<"Please enter your option : ";
}

int main()
{
    system("color 5");
    fScreen();

    double total;
    int choice;
    while (1)
    while (choice!=3)
    {
        mainmenu();
        cin>>choice;

        if (choice==1)
        {
            CLEAR_BUFFER;
            cAccount();
        }
        else if (choice==2)
        {
            CLEAR_BUFFER;
            logIn();
        }
        else if (choice==3)
        {
        	gotoxy(35,18);
            cout<< "Goodbye! Thank you for using our program...";
            exit(0);
        }
        else
        {
        cout << ERR_CHOICE;
        gotoxy(35,18);
        cout<<"Press any key to try again...";
        mainmenu();
        _getch();
        }
    }
    return 0;
}



