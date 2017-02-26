/*shippingPrice.cpp
Feb 25, 2017
Jayson Mallari
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double price, shipping, totalPrice;

	//Ask user for the price value
	cout<<"PLease enter the price : "<<endl;
	cin>>price;

	//Decision phrase using if statement
	if (price != 0 && price < 25){
		shipping = 15;
	}else if(price < 50){
		shipping = 10;
	}else if(price < 75){
		shipping = 5;
	}else{
		shipping = 0;
	}

	totalPrice=price +shipping;

	cout<<"The total price is "<<fixed<<setprecision(2)<<totalPrice<<endl;

	return 0;
}
