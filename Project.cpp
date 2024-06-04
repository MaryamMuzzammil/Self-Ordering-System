#include<iostream>
#include <ctime>
#include<string>
#include <stdlib.h>
using namespace std;

//globally initialized and declared variables :
     long digit;
     int foodName,quantity[14]={0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     multiply[14]={0,0,0,0,0,0,0,0,0,0,0,0,0,0},total=0,rate,i,price,subtotal,count=0;
     string option,confirm,anything,pay,r;
     char name[20];

//prototypes of udf :
void starting (void);
void menu (void);
void switch_case (void);
void bill (void);
void bill2 (void);
void rated (int);

// main 
 main()
{
	starting();
	do 
	{
	menu();
	cout<<"  Press the number of your choice ";
    cin>>foodName;
	switch_case();
	
	 //taking confirmation if no it won't run again 
     cout << "\n  confirm your order press [y] for yes , press [n] for no :";
     cin>> confirm; 
     if (confirm == "n" || confirm == "no" || confirm == "No" || confirm == "N"  ) 
      {
 	    cout<<"\n   Thank You for Coming !! ";
 	    break; 
      }	 
      if (confirm == "y" || confirm == "Y" || confirm == "yes" || confirm == "Yes"  )
      {
      //if yes it will show the bill :
      bill();
      // it will ask do you want something else to order 
       cout << "\n  Do you want to order something else ?? press [y] for yes , press [n] for no : ";
       cin >> anything ;
   system("cls");
      if (anything == "n" || anything == "N" ||anything == "no" || anything == "No"  )
        {
   	//credit card pay 
   	 cout << " Do you wants to pay credit card press [y] for yes & press [n] for no ";
     cin>> pay ;
     if (pay == "y" || pay == "Y" || pay == "yes" || pay == "Yes" )
      {
      	//if the person wants to pay with credit it will ask for pin 
 	cout<<"  enter your pin :";
 	cin>>digit;
 	//the pin should be 4 digits 
      do {
        digit /= 10;
         ++count;
       } while (digit != 0);
       //if the pin is equals to 4 digit it will ask for payment
   if (count==4)
      {
  	 payagain:
 	 cout << "your total is rs :"<< total<<endl;
	 cout << "Enter your pay :" ;
	 cin>>price ;
	 if (price < total)  //if person pay less than total amount then it will be ask again 
	    {
	 	cout << "Yours payment is dosen't match to your total bill :";
	 	goto payagain;
	 	break;
     	 } 
      bill2();  
      }
    else 
     {
     	//if the person enter the wrong pin the program will end itself 
     	cout<<"you've put wrong pin :"<<endl;
    	cout << "please order again "<<endl;
	    break;
     }
   }
     else 
     {
     	//if the person wants to pay cash instead credit cradit card 
 	cout<<"  Please Pay at the cash counter of the resturant :"<<endl;
     }
     //rate service
         	cout << " Do you want to rate our service :";
            cin>>r;
            //if he wants to rate the resturant service 
    if(r == "y" || r == "Y" || r == "yes" || r == "Yes" )
    {
   	cout<< "  Please rate our service 1-5 :  [yes] or [No]";
   	cin>>rate;
   	rated(rate);
       }
   	cout << "\n  Thanks For Shopping :) ";
   	break;
    }
}    
//if the person enters any other alphabet or symbol after confirmation it will say invalid and end the program:
else 
{
	cout <<"  invalid choice ";
	break;
}
	}while (foodName != 0 );
}

//bodies of udf:
void starting (void)
{
	//time display:
time_t ct = time(0);
char* dt = ctime(&ct);
// Starting displayy 
	cout <<"Please Enter your name :";
	gets(name);
	cout<< name <<"  Welcome to our Resturant <3 : \t\t\t\tTodays date: " << dt<<endl;
	cout<<"------------------------------------- \n"<<endl;
}
void menu (void)
{
	cout<<"\t\t\t===========================================\n";
    cout<<"\t\t\t\t\t  Menu"<<endl;
    cout<<"\t\t\t===========================================\n";
    cout <<"   Food Items \t\t\t\t\t    Drink Items \t\t Sweet Items "<<endl;
    cout<< "   ---------- \t\t\t\t\t    ----------- \t\t ----------- "<<endl;
cout<<"  1.Chicken Biryani                Rs:250 \t  7. Pepsi           Rs:100 \t 11. halwa          Rs:200"<<endl; 
cout<<"  2.Beef Biryani                   Rs:300 \t  8. 7up             Rs:100 \t 12. cake           Rs:1000"<<endl;
cout<<"  3.Chicken Palao                  Rs:250 \t  9. Pakola          Rs:100 \t 13. mithai         Rs:1000"<<endl;
cout<<"  4.Beef palao                     Rs:300 \t 10. Fanta           Rs:100 \t 14. kheer          Rs:500"<<endl;
cout<<"  5.Chicken Karahi                 Rs:400"<<endl;
cout<<"  6.Beef Karahi                    Rs:450"<<endl;
cout<<endl;
}
void switch_case (void)
{
	switch(foodName)
{
	case 1:
		{
		cout<<"  Enter the Quantity Of Chicken Biryani";
		cin>>quantity[0];
        multiply[0]=quantity[0]*250;
	}
		break;
		case 2:
		{
		cout<<"  Enter the Quantity Of Beef Biryani";
		cin>>quantity[1];
        multiply[1]=quantity[1]*300;
	}
		break;
		case 3:
		{
		cout<<"  Enter the Quantity Of Chicken Palao";
		cin>>quantity[2];
		multiply[2]=quantity[2]*250;
	}
		break;
		case 4:
		{
		cout<<"  Enter the Quantity Of Beef Palao";
		cin>>quantity[3];
		multiply[3]=quantity[3]*300;
	}
		break;
		case 5:
		{
		cout<<"  Enter the Quantity Of Chicken Karahi ";
		cin>>quantity[4];
		multiply[4]=quantity[4]*400;
	}
		break;
		case 6:
		{
		cout<<"  Enter the Quantity Of Beef Karahi ";
		cin>>quantity[5];
		multiply[5]=quantity[5]*450;
	} 
	break;
    	case 7:
		{
		cout<<"  Enter the Quantity Of pepsi ";
		cin>>quantity[6];
        multiply[6]=quantity[6]*100;
	}
		break;
		case 8:
		{
		cout<<"  Enter the Quantity Of 7up ";
		cin>>quantity[7];
        multiply[7]=quantity[7]*100;
	}
		break;
		case 9:
		{
		cout<<"  Enter the Quantity Of pakola ";
		cin>>quantity[8];
		multiply[8]=quantity[8]*100;
	}
		break;
		case 10:
		{
		cout<<"  Enter the Quantity Of fanta";
		cin>>quantity[9];
		multiply[9]=quantity[9]*100;
	}
		break;
		case 11:
		{
		cout<<"  Enter the Quantity Of halwa ";
		cin>>quantity[10];
		multiply[10]=quantity[10]*200;
	}
		break;
		case 12:
		{
		cout<<"  Enter the Quantity Of cake ";
		cin>>quantity[11];
		multiply[11]=quantity[11]*1000;
	} break ;
		case 13:
		{
		cout<<"  Enter the Quantity Of mithai ";
		cin>>quantity[12];
		multiply[12]=quantity[12]*1000;
	}
		break;
		case 14:
		{
		cout<<"  Enter the Quantity Of kheer ";
		cin>>quantity[13];
		multiply[13]=quantity[13]*500;
	}
		break;
		default :
		cout << " Invalid choice  ";
		break;
} 
}
void bill (void)
{
	//calculation
 total=0;
 for (i=0 ; i<14 ;i++)
    {
    total+=multiply[i];
	}                   //Bill 
       cout<<"  You Have Ordered:\n\n";
    cout<<"===========================================================\n";
    cout<<"   ITEMS              QUANTITY             AMOUNTSALE  "<<endl;
    cout<<"===========================================================\n";
    cout<<"    Chicken Biryani \t" <<quantity[0]<<"\t\t\t"<<   multiply[0]<< endl;
    cout<<"    Beef Biryani  \t"<<quantity[1]<<"\t\t\t"<<   multiply[1]<< endl;
    cout<<"    Chicken palao \t" <<quantity[2]<<"\t\t\t"<<   multiply[2]<< endl;
    cout<<"    Beef palao  \t"<<quantity[3]<<"\t\t\t"<<   multiply[3]<< endl;
    cout<<"    Chicken karrahi \t" <<quantity[4]<<"\t\t\t"<<   multiply[4]<< endl;
    cout<<"    Beef karrahi  \t"<<quantity[5]<<"\t\t\t"<<   multiply[5]<< endl;
    cout<<"    pepsi \t\t" <<quantity[6]<<"\t\t\t"<<   multiply[6]<< endl;
    cout<<"    7up \t\t"<<quantity[7]<<"\t\t\t"<<   multiply[7]<< endl;
    cout<<"    pakola\t\t" <<quantity[8]<<"\t\t\t"<<   multiply[8]<< endl;
    cout<<"    fanta  \t\t"<<quantity[9]<<"\t\t\t"<<   multiply[9]<< endl;
    cout<<"    halwa\t\t" <<quantity[10]<<"\t\t\t"<<   multiply[10]<< endl;
    cout<<"    cake  \t\t"<<quantity[11]<<"\t\t\t"<<   multiply[11]<< endl;
    cout<<"    mithai\t\t" <<quantity[12]<<"\t\t\t"<<   multiply[12]<< endl;
    cout<<"    kheer  \t\t"<<quantity[13]<<"\t\t\t"<<   multiply[13]<< endl;
    cout<<"-----------------------------------------------------------\n";
    cout<<"    The Total is  \t\t\t\t Rs:"<<total<< endl;
    cout<<"-----------------------------------------------------------\n";
}
void bill2 (void)
{
		  subtotal=price-total;
                     //Bill 
       cout<<"  You Have Ordered:\n\n";
    cout<<"===========================================================\n";
    cout<<"   ITEMS              QUANTITY             AMOUNTSALE  "<<endl;
    cout<<"===========================================================\n";
    cout<<"    Chicken Biryani \t" <<quantity[0]<<"\t\t\t"<<   multiply[0]<< endl;
    cout<<"    Beef Biryani  \t"<<quantity[1]<<"\t\t\t"<<   multiply[1]<< endl;
    cout<<"    Chicken palao \t" <<quantity[2]<<"\t\t\t"<<   multiply[2]<< endl;
    cout<<"    Beef palao  \t"<<quantity[3]<<"\t\t\t"<<   multiply[3]<< endl;
    cout<<"    Chicken karrahi \t" <<quantity[4]<<"\t\t\t"<<   multiply[4]<< endl;
    cout<<"    Beef karrahi  \t"<<quantity[5]<<"\t\t\t"<<   multiply[5]<< endl;
    cout<<"    pepsi \t\t" <<quantity[6]<<"\t\t\t"<<   multiply[6]<< endl;
    cout<<"    7up \t\t"<<quantity[7]<<"\t\t\t"<<   multiply[7]<< endl;
    cout<<"    pakola\t\t" <<quantity[8]<<"\t\t\t"<<   multiply[8]<< endl;
    cout<<"    fanta  \t\t"<<quantity[9]<<"\t\t\t"<<   multiply[9]<< endl;
    cout<<"    halwa\t\t" <<quantity[10]<<"\t\t\t"<<   multiply[10]<< endl;
    cout<<"    cake  \t\t"<<quantity[11]<<"\t\t\t"<<   multiply[11]<< endl;
    cout<<"    mithai\t\t" <<quantity[12]<<"\t\t\t"<<   multiply[12]<< endl;
    cout<<"    kheer  \t\t"<<quantity[13]<<"\t\t\t"<<   multiply[13]<< endl;
    cout<<"-----------------------------------------------------------\n";
    cout<<"    The Total is  \t\t\t\t Rs:"<<total<< endl;
    cout<<"    You Paid      \t\t\t\t Rs:"<<price<< endl;
    cout<<"    You Received  \t\t\t\t Rs:"<<subtotal<< endl;
    cout<<"-----------------------------------------------------------\n";
}
void rated (int rate )
{
	if (rate == 1)
   	{
   		cout << "  *  poor ;-;";
	   }
	   else if (rate == 2)
	   {
	   	cout <<"  **  bad :(";
	   }
	    else if (rate == 3)
	   {
	   	cout <<"  ***  average :)";
	   }
	    else if (rate == 4)
	   {
	   	cout <<"  ****  good :D";
	   }
	    else if (rate == 5)
	   {
	   	cout <<"  *****  Excellent <3";
	   }
	   else 
	   {
	   	cout << "   Invalid choice ";
	   }
}

