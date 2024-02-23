#include<iostream>							//THIS IS THE HEADER FILE FOR INPUT AND OUTPUT DATA
#include<string>							//THIS  dIS THE HEADER FILE TO INPUT FULL NAME
#include<iomanip>							//THIS IS THE HEADER FILE TO SET WIDTH
using namespace std;
void view();								//THIS IS PROTOTYPE OF FUNCTION
void user_information();					//THIS IS PROTOTYPE OF FUNCTION
void function();							//THIS IS PROTOTYPE OF FUNCTION
void innerfunction(string);					//THIS IS PROTOTYPE OF FUNCTION
void foodquantity(string);					//THIS IS PROTOTYPE OF FUNCTION
void special(string);						//THIS IS PROTOTYPE OF FUNCTION
void specialfoodquantity(string);			//THIS IS PROTOTYPE OF FUNCTION
void rooms(string);							//THIS IS PROTOTYPE OF FUNCTION
void printbill();							//THIS IS PROTOTYPE OF FUNCTION
void roombill();
void end();
const int PRAWN_TEMPURA=13;					//THIS IS THE FIXED PRICE OF FOOD
const int CHICKEN_TENDERS = 15;				//THIS IS THE FIXED PRICE OF FOOD
const int CHICKEN_CORN = 8;					//THIS IS THE FIXED PRICE OF FOOD
const int CHICKEN_SHASHLIK = 19;			//THIS IS THE FIXED PRICE OF FOOD
const int FISH_AND_CHIPS = 25;				//THIS IS THE FIXED PRICE OF FOOD
const int GRILLED_FISH_STEAK = 30;			//THIS IS THE FIXED PRICE OF FOOD
const int BEEF_STEAK_WITH_MUSHROOMS = 31;	//THIS IS THE FIXED PRICE OF FOOD
const int SPAGHETTI_BOLOGNAISE = 35;		//THIS IS THE FIXED PRICE OF FOOD	
const int LAHORI_FRIED_FISH = 40;			//THIS IS THE FIXED PRICE OF SPECIAL FOOD
const int MUTTON_KARAHI_LAZIZ = 50;			//THIS IS THE FIXED PRICE OF SPECIAL FOOD
const int Single_Room = 35;					//THIS IS THE FIXED PRICE OF SINGLE ROOM
const int Double_Room = 50;					//THIS IS THE FIXED PRICE OF DOUBLE ROOM
const int Family_Room = 70;					//THIS IS THE FIXED PRICE OF FAMILY ROOM
string resturant,food,room,specialfood,		//THIS IS GLOBAL DECLARATION OF STRING
	foodname1,foodname2,foodname3,foodname4,foodname5,foodname6,foodname7,foodname8,foodname9,foodname10,
	roomname1,roomname2,roomname3,
	price1,price2,price3,price4,price5,price6,price7,price8,price9,price10,price11,price12,price13,
	name,cont1,cont2,cont3,cont4,cnic,roomname,roomprice;
int bill1, bill2,bill3,bill4,bill5,bill6,bill7,bill8,bill9,bill10,bill11,bill12,bill13,
	quantity1,quantity2,quantity3,quantity4,quantity5,quantity6,quantity7,quantity8,quantity9,quantity10,
	days1,days2,days3,
	bill,sum=0;								//THIS IS GLOBAL DECLARTION OF INTEGER
	
//THIS IS THE MAIN FUNCTION

int main()
{
	
	view();									//THIS IS FUNCTION CALL
	user_information();						//THIS IS FUNCTION CALL
	printbill();							//THIS IS FUNCTION CALL
	roombill();
	end();
	cout<<endl;
	system("pause");
	return 0;
}

//THIS FUNCTIONIS IS USED TO DISPLAY THE NAME OF RESTURANT 	

void view()
{
	cout<<endl;
	cout<<"\t\t\t\t\t**********************************************************************"<<endl;
	cout<<"\t\t\t\t\t*                     WELCOME TO UET RESTURANT                       *"<<endl;
	cout<<"\t\t\t\t\t**********************************************************************";
	cout<<endl;
	cout<<endl;
}

//THIS FUNCTION IS USED TO GET THE INFORMATION OF CUSTOMER

void user_information()
{
	cout<<"Enter The Name: \n\a";
	cout<<"\t";
	getline(cin,name);
	while(true)
	{
		cout << "Enter your 13-digit ID number: \n\a";
    	cout<<"\t";
		getline(cin,cnic);
    	if (cnic.length() == 13)				//     Check if the ID number is exactly 13 characters
		{
        	function();							//THIS IS FUNCTION CALL
        	break;
    	} 
		else
		{
    	   cout << "Invalid input. Please enter a 13-digit ID number.\a" << endl;
    	   continue;
		}
	}
}

//THIS FUNCTION IS USED TO ASK THE CUSTOMER WHAT HE WANT

void function()
{
		while(true)
		{
			cout<<"\t\t\t\t\t**********************************************************************"<<endl;
			cout<<"\t\t\t\t\t*                     WELCOME TO  MENU                               *"<<endl;
			cout<<"\t\t\t\t\t**********************************************************************";
			cout<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t**********************************************************************"<<endl;
			cout<<"\t\t\t\t\t*                     HOW CAN I HELP SIR/MADAM                       *"<<endl;
			cout<<"\t\t\t\t\t**********************************************************************";
			cout<<endl;
			cout<<endl;
			cout<<" A) Do You Want To Eat Food \n";
			cout<<" B) Do You Want To Eat Our Special Food \n";
			cout<<" C) Do You Want TO Get Room \n\a";
			cin>>resturant;
			if(resturant =="a" || resturant =="A")
			{	
				innerfunction(resturant);						//THIS IS FUNCTION CALL
				break;
			}
		
			else if(resturant =="B" || resturant =="b")
			{
				special(resturant);								//THIS IS FUNCTION CALL
				break;
			}
		
			else if ( resturant =="C" || resturant =="c")
			{
				rooms(resturant);								//THIS IS FUNCTION CALL
				break;
			}	
		
			else
			{
				cout<<endl;
				cout<<" Invalid input. Please Try Again\n\a";
				cout<<endl;
				continue;
			}	
		}
		while(true)
		{
			cout<<"Do You Want to Go Back To Menu. If You Want Type 'Yes' or If You Don't Want Type 'No'\n\a";
			cin>>cont1;
		
			if(cont1 == "YES" || cont1 == "yes" || cont1 == "Yes")
			{
				function();			//THIS IS FUNCTION CALL
				break;
			}
			else if(cont1 == "no" || cont1 =="No" || cont1 == "NO")
			{
				break;
			}
			else
			{
				cout<<" Invalid input. Please Try Again\n\a";
				cout<<endl;
				continue;
			}
		}
}

//THIS FUNCTION IS USED TO DISPLAY FOOD WITH PRICE

void innerfunction(string resturant)
{
	if(resturant == "A" || resturant == "a")
	{
		while(true)
		{
			cout<<endl;
			cout<<"\t\t\t\t\t**********************************************************************"<<endl;
			cout<<"\t\t\t\t\t*                     WELCOME TO FOOD SERVICE                        *"<<endl;
			cout<<"\t\t\t\t\t**********************************************************************";
			cout<<endl;
			cout<<endl;
			cout<<"Which Food Do You Want TO Eat \n\n";
			cout<<" A) PRAWN TEMPURA ($13)\n \t(TOKYO SPECIALTY, SERVED WITH WONTON SAUCE) \n\n";
			cout<<" B) CHICKEN TENDERS ($15)\n \t(HOMEMADE CHICKEN TENDERS, SERVED WITH FRIES, HONEY MUSTARD AND GARLIC MAYO.) \n\n";
			cout<<" C) CHICKEN CORN ($8)\n \t(APPETIZING CHICKEN CORN SOUP SERVED WITH PRAWN CRACKERS.) \n\n";
			cout<<" D) CHICKEN SHASHLIK ($19)\n \t(PAN-FRIED MARINATED SKEWERED CHICKEN, SERVED WITH BBQ SAUCE AND STEAMED RICE.) \n\n";
			cout<<" E) FISH AND CHIPS ($25)\n \t(CLASSIC CRUMB FRIED FISH, SERVED WITH FRENCH FRIES AND TARTAR SAUCE.) \n\n";
			cout<<" F) GRILLED FISH STEAK ($30)\n \t(FILLET OF FISH, SERVED WITH RATATOUILLE AND ORANGE SAUCE.) \n\n";
			cout<<" G) BEEF STEAK WITH MUSHROOMS ($31)\n \t(LOCAL POUNDED BEEF TENDERLOIN TOPPED WITH MUSHROOM SAUCE SERVED WITH MASHED POTATO.) \n\n";
			cout<<" H) SPAGHETTI BOLOGNAISE ($35)\n \t(SPAGHETTI WITH MEAT SAUCE AND PARMESAN CHEESE.) \n\n\a";
			cin>>food;
				
			if(food == "A" || food == "a"  || food == "B" || food == "b"  || food == "C" || food == "c"  || food == "D" || food == "d"  || food == "E" || food == "e"  || food == "F" || food == "f"  || food == "G" || food == "g"  || food == "H" || food == "h")
			{
				foodquantity(food);						//THIS IS FUNCTION CALL
				break;
			}
			else
			{
				cout<<endl;
				cout<<" Invalid input. Please Try Again\n\a";
				cout<<endl;
				continue;
			}
		}
		while(true)
		{
			cout<<"Are You Want To Order Another Dish. If You Want Type 'Yes' or If You Don't Want Type 'No' \n\a";
			cin>>cont2;
			
			if(cont2 == "YES" || cont2 == "yes" || cont2 == "Yes")
			{
				innerfunction(resturant);			//THIS IS FUNCTION CALL
				break;
			}
			else if(cont2 == "no" || cont2 =="No" || cont2 == "NO")
			{
				break;
			}
			else
			{
				cout<<" Invalid input. Please Try Again\n\a";
				cout<<endl;
				continue;
			}
		}	
	}
}

//THIS FUNCTION IS USED TO GET QUANTITY OF FOOD 

void foodquantity(string food)
{			
	if (food=="A" || food == "a" )
	{
		while(true)
		{
			cout<<endl;
			cout<<"How Much Quantity Do You Want\a"<<endl;
			cin>>quantity1;
			if(quantity1<=5)
			{
				foodname1="PRAWN TEMPURA";
				price1="$30";
				bill1 = PRAWN_TEMPURA*quantity1;
				sum+=bill1;
				break;
			}
			else
				cout<<"Unfortunately, the item is currently out of stock, but there is remaining quantity of 5 units available for purchase\a"<<endl;
				continue;	
		}
	}
	else if( food =="B" || food == "b" )
	{
		while(true)
		{
			cout<<endl;
			cout<<"How Much Quantity Do You Want\a"<<endl;
			cin>>quantity2;
			if(quantity2 <= 7)
			{
				foodname2="CHICKEN TENDERS";
				price2="$15";
				bill2 = CHICKEN_TENDERS*quantity2;
				sum+=bill2;
				break;
			}
			else
				cout<<"Unfortunately, the item is currently out of stock, but there is remaining quantity of 7 units available for purchase\a"<<endl;	
				continue;
		}
	}
	else if( food =="C" || food == "c" )
	{
		while(true)
		{
			cout<<endl;
			cout<<"How Much Quantity Do You Want\a"<<endl;
			cin>>quantity3;
			if(quantity3 <= 4)
			{
				foodname3="CHICKEN CORN";
				price3="$8";
				bill3 = CHICKEN_CORN*quantity3;
				sum+=bill3;
				break;
			}
			else
				cout<<"Unfortunately, the item is currently out of stock, but there is remaining quantity of 4 units available for purchase\a"<<endl;	
				continue;
		}
	}
	else if( food =="D" || food == "d" )
	{
		while(true)
		{
			cout<<endl;
			cout<<"How Much Quantity Do You Want\a"<<endl;
			cin>>quantity4;
			if(quantity4 <= 9)
			{
				foodname4="CHICKEN SHASHLIK";
				price4="$19";
				bill4 = CHICKEN_SHASHLIK*quantity4;
				sum+=bill4;
				break;
			}
			else
				cout<<"Unfortunately, the item is currently out of stock, but there is remaining quantity of 9 units available for purchase\a"<<endl;
				continue;
		}
	}
	else if( food =="E" || food == "e" )
	{
		while(true)
		{
			cout<<endl;
			cout<<"How Much Quantity Do You Want\a"<<endl;
			cin>>quantity5;
			if(quantity5 <= 10)
			{
				foodname5="FISH AND CHIPS";
				price5="$25";
				bill5 = FISH_AND_CHIPS*quantity5;
				sum+=bill5;
				break;
			}
			else
				cout<<"Unfortunately, the item is currently out of stock, but there is remaining quantity of 10 units available for purchase\a"<<endl;	
				continue;
		}
	}
	else if( food =="F" || food == "f" )
	{
		while(true)
		{
			cout<<endl;
			cout<<"How Much Quantity Do You Want\a"<<endl;
			cin>>quantity6;
			if(quantity6 <= 6)
			{
				foodname6="GRILLED FISH STEAK";
				price6="$30";
				bill6 = GRILLED_FISH_STEAK*quantity6;
				sum+=bill6;
				break;
			}
			else
				cout<<"Unfortunately, the item is currently out of stock, but there is remaining quantity of 6 units available for purchase\a"<<endl;	
				continue;
		}
	}
	else if( food =="G" || food == "g" )
	{
		while(true)
		{
			cout<<endl;
			cout<<"How Much Quantity Do You Want\a"<<endl;
			cin>>quantity7;
			if(quantity7 <= 5)
			{
				foodname7="BEEF STEAK ";
				price7="$31";
				bill7 = BEEF_STEAK_WITH_MUSHROOMS*quantity7;
				sum+=bill7;
				break;
			}
			else
				cout<<"Unfortunately, the item is currently out of stock, but there is remaining quantity of 5 units available for purchase\a"<<endl;
				continue;
		}
	}
	else if( food =="H" || food == "h" )
	{
		while(true)
		{
			cout<<endl;
			cout<<"How Much Quantity Do You Want\a"<<endl;
			cin>>quantity8;
			if(quantity8 <= 8)
			{
				foodname8="SPAGHETTI BOLOGNAISE";
				price8="$35";
				bill8 = SPAGHETTI_BOLOGNAISE*quantity8;
				sum+=bill8;
				break;
			}
			else
				cout<<"Unfortunately, the item is currently out of stock, but there is remaining quantity of 8 units available for purchase\a"<<endl;
				continue;
		}
	}
}

//THIS FUNCTION IS USED TO DISPLAY SPECIAL FOOD		

void special(string resturant)
{
	if(resturant =="B" || resturant =="b")
	{
		while(true)
		{
			cout<<endl;
			cout<<"\t\t\t\t\t**********************************************************************"<<endl;
			cout<<"\t\t\t\t\t*                     SPECIAL FOOD									  *"<<endl;
			cout<<"\t\t\t\t\t**********************************************************************";
			cout<<endl;
			cout<<endl;
			cout<<"A) LAHORI FRIED FISH \n\t(DEEP-FRIED FISH MARINATED WITH HOMEMADE SPICES.)\n\n";
			cout<<"B) MUTTON KARAHI LAZIZ \n\t(MUTTON CUBES COOKED IN TOMATOES AND ONIONS WITH SPICES AND CREAM.)\n\a";
			cin>>specialfood;
			if(specialfood == "A" || specialfood == "a" || specialfood == "B" || specialfood == "b")
			{
				specialfoodquantity(specialfood);		//THIS IS FUNCTION CALL
				break;
			}
			else
			{
				cout<<endl;
				cout<<" Invalid input. Please Try Again\n\a";
				cout<<endl;
				continue;
			}
		}
		while(true)
		{
			cout<<"Are You Want To Order Another Dish. If You Want Type 'Yes' or If You Don't Want Type 'No' \a";
			cout<<endl;
			cin>>cont3;
			if(cont3 == "YES" || cont3 == "yes" || cont3 == "Yes")
			{
				special(resturant);			//THIS IS FUNCTION CALL
				break;
			}
			else if(cont3 == "no" || cont3 =="No" || cont3 == "NO")
			{
				break;
			}
			else
			{
				cout<<" Invalid input. Please Try Again\n\a";
				cout<<endl;
				continue;
			}
		}
	}
}

//THIS FUNCTION IS USED FOR THE QUANTITY OF SPECIAL FOOD

void specialfoodquantity(string specialfood)
{
	if(specialfood =="A" || specialfood == "a")
	{
		while(true)
		{
			cout<<endl;
			cout<<"How Much Quantity Do You Want\a"<<endl;
			cin>>quantity9;
			if(quantity9 <= 10)
			{
				foodname9="LAHORI FRIED FISH";
				price9="$40";
				bill9 = LAHORI_FRIED_FISH*quantity9;
				sum+=bill9;
				
				break;
			}
			else
				cout<<"Unfortunately, the item is currently out of stock, but there is remaining quantity of 10 units available for purchase\a"<<endl;
				continue;
		}
	}
	else if(specialfood == "B" || specialfood == "b")
	{
		while(true)
		{
			cout<<endl;
			cout<<"How Much Quantity Do You Want\a"<<endl;
			cin>>quantity10;
			if(quantity10 <= 10)
			{
				foodname10="MUTTON KARAHI LAZIZ";
				price10="$50";
				bill10 = MUTTON_KARAHI_LAZIZ*quantity10;
				sum+=bill10;
				break;
			}
			else
				cout<<"Unfortunately, the item is currently out of stock, but there is remaining quantity of 10 units available for purchase\a"<<endl;
				continue;
		}
	}
}

//THIS FUNCTION IS USED TO DISPLAY ROOM SERVICE

void rooms(string resturant)
{
	if(resturant == "C" || resturant == "c")
	{
		while(true)
		{
			cout<<endl;
			cout<<"\t\t\t\t\t**********************************************************************"<<endl;
			cout<<"\t\t\t\t\t*                     WELCOME TO OUR ROOM SERVICE                    *"<<endl;
			cout<<"\t\t\t\t\t**********************************************************************";
			cout<<endl;
			cout<<endl;
			cout<<"Which Room Do You Want \n\n";
			cout<<"A) Single Room ($35)\n\n";
			cout<<"B) Double Room ($50)\n\n";
			cout<<"C) Family Room ($70)\n\n\a";
			cin>>room;
			cout<<endl;
			if(room == "A" || room == "a")
			{
				cout<<"For How Many Days You Want To Get A Room\a"<<endl;
				cin>>days1;
				roomname1 = "Single Room";
				price11 = "$35";
				bill11 = Single_Room*days1;
				sum+=bill11;
				break;
			}
			else if (room == "B" || room == "b")
			{
				cout<<"For How Many Days You Want To Get A Room\a"<<endl;
				cin>>days2;
				roomname2 = "Double Room";
				price12 = "$50";
				bill12 = Double_Room*days2;
				sum+=bill12;
				break;
			}
			else if (room == "C" || room == "c")
			{
				cout<<"For How Many Days You Want To Get A Room\a"<<endl;
				cin>>days3;
				roomname3 = "Family Room";
				price13 = "$70";
				bill13 = Family_Room*days3;
				sum+=bill13;
				break;
			}
			else
			{
				cout<<endl;
				cout<<" Invalid input. Please Try Again\n\a";
				cout<<endl;
				continue;
			}	
		}
		while(true)
		{
			cout<<endl;
			cout<<"Do You Book Another Room. If You WAant To Book Type 'Yes'or If You Don't Want To  Book Type 'No'\a";
			cout<<endl;
			cin>>cont4;
			if(cont4 == "YES" || cont4 == "yes" || cont4 == "Yes")
			{
				rooms(resturant);			//THIS IS FUNCTION CALL
				break;
			}
			else if(cont4 == "no" || cont4 =="No" || cont4 == "NO")
			{
				break;
			}
			else
			{
				cout<<" Invalid input. Please Try Again\n\a";
				cout<<endl;
				continue;
			}
		}			
	}
}

//THIS FUNCTION IS USED TO PRINT BILL
	
void printbill()
{
	cout<<endl;
	cout<<"\t\t\t\t\t**********************************************************************"<<endl;
	cout<<"\t\t\t\t\t*                     YOUR FOOD BILL IS                              *"<<endl;
	cout<<"\t\t\t\t\t**********************************************************************";
	cout<<endl;
	cout<<endl;
	cout<<setw(30)<<"Customer Name is :"<<setw(50)<<name<<endl;
	cout<<endl;
	cout<<setw(30)<<"Customer CNIC Number is :"<<setw(50)<<cnic<<endl;
	cout<<endl;
	cout<<"*******************************************************************************************************************\n";
	cout<<endl;
	cout<<setw(20)<<"NAME"<<setw(20)<<"QUANTITY"<<setw(20)<<"PRICE"<<setw(20)<<"TOTAL"<<endl;
	cout<<endl;
	cout<<"*******************************************************************************************************************\n";
	cout<<endl;
	cout<<setw(20)<<foodname1<<setw(20)<<quantity1<<setw(20)<<price1<<setw(20)<<"$"<<bill1<<endl;
	cout<<setw(20)<<foodname2<<setw(20)<<quantity2<<setw(20)<<price2<<setw(20)<<"$"<<bill2<<endl;
	cout<<setw(20)<<foodname3<<setw(20)<<quantity3<<setw(20)<<price3<<setw(20)<<"$"<<bill3<<endl;
	cout<<setw(20)<<foodname4<<setw(20)<<quantity4<<setw(20)<<price4<<setw(20)<<"$"<<bill4<<endl;
	cout<<setw(20)<<foodname5<<setw(20)<<quantity5<<setw(20)<<price5<<setw(20)<<"$"<<bill5<<endl;
	cout<<setw(20)<<foodname6<<setw(20)<<quantity6<<setw(20)<<price6<<setw(20)<<"$"<<bill6<<endl;
	cout<<setw(20)<<foodname7<<setw(20)<<quantity7<<setw(20)<<price7<<setw(20)<<"$"<<bill7<<endl;
	cout<<setw(20)<<foodname8<<setw(20)<<quantity8<<setw(20)<<price8<<setw(20)<<"$"<<bill8<<endl;
	cout<<setw(20)<<foodname9<<setw(20)<<quantity9<<setw(20)<<price9<<setw(20)<<"$"<<bill9<<endl;
	cout<<setw(20)<<foodname10<<setw(20)<<quantity10<<setw(20)<<price10<<setw(20)<<"$"<<bill10<<endl;
	cout<<endl;
	cout<<"*******************************************************************************************************************\n";
}

void roombill()
{
	cout<<endl;
	cout<<"\t\t\t\t\t**********************************************************************"<<endl;
	cout<<"\t\t\t\t\t*                     YOUR ROOM BILL IS                              *"<<endl;
	cout<<"\t\t\t\t\t**********************************************************************"<<endl;
	cout<<endl;
	cout<<"*******************************************************************************************************************\n";
	cout<<endl;
	cout<<setw(20)<<"ROOM NAME"<<setw(20)<<"DAYS"<<setw(20)<<"PRICE"<<setw(20)<<"TOTAL"<<endl;
	cout<<endl;
	cout<<"*******************************************************************************************************************\n";
	cout<<endl;
	cout<<setw(20)<<roomname1<<setw(20)<<days1<<setw(20)<<price11<<setw(20)<<"$"<<bill11<<endl;
	cout<<setw(20)<<roomname2<<setw(20)<<days2<<setw(20)<<price12<<setw(20)<<"$"<<bill12<<endl;
	cout<<setw(20)<<roomname3<<setw(20)<<days3<<setw(20)<<price13<<setw(20)<<"$"<<bill13<<endl;
	cout<<"*******************************************************************************************************************\n";
}

void end()
{
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Total Bill Is :"<<setw(50)<<"$"<<sum<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t**********************************************************************"<<endl;
	cout<<"\t\t\t\t\t*                     THANKS FOR VISTING US                          *"<<endl;
	cout<<"\t\t\t\t\t**********************************************************************";
}