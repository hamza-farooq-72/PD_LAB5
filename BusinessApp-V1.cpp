#include<iostream>
#include<conio.h>
using namespace std ;

void printHeader();
int printMenu() ;
int printorderplaceoptions() ;
float calCostPerProd(float price, float quantity, float tax);
void printProductData(string name, int id, float price, float quantity, float tax, float total);

int main()
{	
	string name1 = "", name2 = "", name3 = "" ;
	int id1 = 0 , id2 = 0 , id3 = 0 ;
	 float price1 = 0.0, price2 = 0.0, price3 = 0.0;
 	int quantity1 = 0, quantity2 = 0, quantity3 = 0;
 	float tax1 = 0.0, tax2 = 0.0, tax3 = 0.0;
 	float total1 = 0.0, total2 = 0.0, total3 = 0.0;
	while(true){
	printHeader();
	int option ;
	int opt ;
	option  = printMenu() ;



	if (option == 1) { 
	int opt ;
	opt = printorderplaceoptions() ;



	if (opt == 1) { 

	cout << "Enter the name of 1st Product: "  ;
	 cin >> name1;
	cout << "Enter the 1st Product id: "  ;
	cin>> id1 ;
	 cout << "Enter the price of 1st Product: $" ;
	 cin >> price1;
	 cout << "Enter the quantity of 1st Product: ";
	 cin >> quantity1;
	 cout << "Enter the tax rate on 1st Product (%): ";
	 cin >> tax1;
	cout << "  Order Placed Successfully  ..! "   <<endl ;
	}

	 if (opt == 2) {

	cout << "Enter the name of 2nd Product: ";
 	cin >> name2;
	 cout << "Enter the 2nd Product id: "  ;
	cin>> id2 ;
	 cout << "Enter the price of 2nd Product: $" ;
	 cin >> price2;
	 cout << "Enter the quantity of 2nd Product: ";
	 cin >> quantity2;
	 cout << "Enter the tax rate on 2nd Product (%): " ;
	 cin >> tax2; 
	cout << "  Order Placed Successfully  ..: "   <<endl ;
	}

	 if (opt == 3) {

	 cout << "Enter the name of 3rd Product: ";
	 cin >> name3;
	cout << "Enter the 3rd Product id: "  ;
	cin>> id3 ;
	 cout << "Enter the price of 3rd Product: $" ;
	 cin >> price3;
	 cout << "Enter the quantity of 3rd Product: " ;
	 cin >> quantity3;
	 cout << "Enter the tax rate on 3rd Product (%): " ;
	 cin >> tax3; 
	 cout << "  Order Placed Successfully  ..! "   <<endl ;
	}

	if (opt == 4) {

	 total1 = calCostPerProd(price1, quantity1, tax1);
	 total2 = calCostPerProd(price2, quantity2, tax2);
	 total3 = calCostPerProd(price3, quantity3, tax3);
	 float totalPayable = total1 + total2 + total3;
	 cout << "Total Payable Amount (including tax): $" << totalPayable << endl;
	 }


	 if (opt == 5) {

	 cout << "All Products Data" << endl;
	 cout << "Name" << "\t"<< "   Prod.Id" << "\t"  << "    Price " <<"\t\t"  << "Quantity" << "\t" << "Tax" << "\t\t" <<"TotalPerProduct" << endl;
	 printProductData(name1,id1,  price1, quantity1, tax1, total1);
	 printProductData(name2,id2,  price2, quantity2, tax2, total2);
	 printProductData(name3,id3, price3, quantity3, tax3, total3); 
	}


	

	 if (opt == 6) { 
	

	return 0 ;
	
	}
	
}

	if (option == 2) { 
	cout<<"Here is the List of all the Available Categories"<<endl ;
	cout<<endl ;
	cout<<"A. Electronics         "<<endl ;
	cout<<"B. Health and Household        "<<endl ;
	cout<<"C. Office Products        "<<endl ;
	cout<<"D. Home and Kitchen         "<<endl ;
	cout<<"E. Arts and Crafts        "<<endl ;
	cout<<"F. Baby Productd         "<<endl ;
	cout<<"G. Clothing and Fashion         "<<endl ;
	cout<<"H. Cosmetics        "<<endl ;
	cout<<"I. Stationary         "<<endl ;
	cout<<"J. Bags    "<<endl ;
	cout<<"K. Used irems         "<<endl ;
	cout<<"L. Mobile Accessories         "<<endl ;
	cout<<endl ;
	cout<<"  Enter your required Category.." ;

	char op = ' ' ;	
	cin>> op ;
	}
		

	if (option == 3) {

	cout<<" Please do share your Precious Feedbacks...     "<<endl ;	
	cout<<endl ;
	cout<<endl ;
	string feedback = "" ;
	cin>> feedback ;




		


	cout<<endl ;
	cout<<endl  ;

	cout<< "             ***********************************************"<<endl ;

}

	if (option ==4) {

	cout<<endl ;
	cout<<endl ;

	
	cout<<"  __________________Here are the Ratings of our Store________________      "<<endl ;	
	cout<<endl ;
	cout<<endl ;
	cout<<endl ;
	cout<<endl ;
	

	cout<<"  * The Store has 97 Persent Postive Ratings in this month...   "<<endl ;
	cout<<endl ;
	cout<<endl ;

	cout<<"  * The Store has 95 Persent Postive Ratings during last 6 month...   "<<endl ;
	cout<<endl ;
	cout<<endl ;

	cout<<"  * The Store has 94.9 Persent Postive Ratings during last year and 100 Percent Fulfillment rate...   "<<endl ;

	cout<<endl ;
	cout<<endl  ;

	cout<< "               ***********************************************"<<endl ;

}

	if (option ==5) {
	cout<<"                               ____________About our Store______________    ";

	cout<<endl ;
	cout<<endl  ;
	cout<<"		Welcome to E-COM Store,your premier destination for online shopping excellence!" <<endl ;
	cout<<"		Explore a world of endless possibilities as you browse through our curated     "<<endl ;
	cout<<"		collection of top-quality products.                                            "<<endl ;
	cout<<"		Join us on a journey of convenience and affordability as we redefine your    "<<endl ;
	cout<<"		online shopping experience.                                                "<<endl ;
	
	cout<<endl ;
	cout<<endl  ;
	
	cout<<endl ;
	cout<<endl  ;

	cout<< "                           ***********************************************"<<endl ;

	}


	if (option ==6) {
	cout<<endl  ;
	cout<<endl  ;
	
	cout<< "                      Thanks for visiting us...    "<<endl ;
	return 0 ;

	}







	cout<<"Press any key to go to menu again";
	getch() ;
	system("cls") ;



}

}

	float calCostPerProd(float price, float quantity, float tax)
	{
	float total ;
	total = price * quantity;
	total = total + total * ((tax / 100));
	return total ;
	
	}




	void printProductData(string name,int id, float price, float quantity, float tax, float total)
	{
	cout << name <<"\t\t"<<id<< "\t\t" <<price << "\t\t" << quantity <<"\t\t" <<tax <<"\t\t" <<total  <<endl ;
	}




	int printorderplaceoptions()
	{
	cout << endl ;
	cout << endl ;
	cout<< "1. Enter first product details " <<endl ;
	cout<< "2. Enter second product details " <<endl ;
	cout<< "3. Enter third product details     " <<endl ;
	cout<< "4. Calculate total" <<endl ;
	cout<< "5. View all products data " <<endl ;
	cout<< "6. Exit" <<endl ;
	cout<< endl ;
	cout<<"	Your Option.. " ;
	int opt ;
	cin>> opt ;
	return opt;

	}	




	
	int printMenu()
	{
	cout<< "Select one of the following options number ... " <<endl ;
	cout<<endl ;
	cout<< "1. Place The Order" <<endl ;
	cout<< "2. Categories of Products" <<endl ;
	cout<< "3. Add Feedbacks or Reviews " <<endl ;
	cout<< "4.view Store Ratings " <<endl ;
	cout<< "5. About Us " <<endl ;
	cout<< "6. Exit " <<endl ;

	cout<<endl ;

	cout<< "   Your Option.. ";
	int option ;
	cin>> option ;
	return option ;
	}






	void printHeader(){ 

	cout<<"**************************************************************************************************************************************************************" << endl ;
	cout<<"*|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|*" << endl ;
	cout<<"*|                                 ----------------<<<<<<<<<<<<((  E-COM Store Management System  ))>>>>>>>>>>>>>--------------    	                    |*" << endl ;
	cout<<"*|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|*" << endl ;
	cout<<"**************************************************************************************************************************************************************" << endl ;
	
	cout << endl ;	
	cout << endl ;	
	cout<< "___________________Welcome to our store... Thanks for choosimg us_____________________" <<endl ;
	
	cout << endl ;	
}	