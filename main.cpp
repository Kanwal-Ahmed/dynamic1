#include<iostream>
#include "DvDCollection.h"
using namespace std;
int main()
{
  dvdcollection d1;
  d1.add(*(new dvd("Windows XP",150)));
  d1.add(*(new dvd("Windows 10",170)));
  d1.add(*(new dvd("GTA VC",100)));
  d1.add(*(new dvd("COUNTER STRIKE",120)));
  d1.add(*(new dvd("NEED FOR SPEED",150)));
  d1.add(*(new dvd("HARRY POTTER",170)));
  d1.add(*(new dvd("FIFA 2007",100)));
  d1.display();
  cout << endl <<"Index :"<<d1.search(100)<<endl;
  d1.Delete("FIFA 2007");
  d1.display();
  system("pause");

};