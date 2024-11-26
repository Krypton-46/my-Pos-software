#include"Product.h"
Product::Product()
{
	price = 0;
	name = "";
	quantity = 0;
}
Product::Product(string n, int p,int q):Product()
{
	name = n;
	price = p;
	quantity = q;
}

void Product::setQuantity(int q)
{
	if (q >= 0)
		quantity = q;
}
void Product::setName(string n)
{
	name = n;
}
void Product::setPrice(int p)
{
	if(p>0)
		price = p;
}

string Product::getName()const
{
	return name;
}
int Product::getPrice()const
{
	return price;
}
int Product::getQuantity()const
{
	return quantity;
}
