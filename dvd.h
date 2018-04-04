#include<iostream>
using namespace std;
class dvd
{
public:
dvd()     
{
  string name ="";
  float cost=0;
};
dvd(string name , float cost)
{
  this->name = name;
  this->cost = cost;
};
dvd (dvd & clone)
{
  this->name=clone.name;
  this->cost=clone.cost;
};
void setname(string name)  
{
  this->name=name;
};
void setcost(float cost)
{
  this->cost=cost;
};
string getname()  
{
  return this->name;
};
float getcost()
{
  return this->cost;
};
void display()
{
  cout<<"Name :"<< this->name << endl << "Cost :" << this->cost << endl;

};

private:
string name;
float cost;
};

ostream& operator <<(ostream& o , dvd& S) 
{
  return o <<"Name :"<< S.getname() <<endl << "DvD cost :"<< S.getcost() << endl;
};