// not finished yet

#include <iostream>
#include "Koin.hpp"

using namespace std;

int main(){
	Koin k(20,20,10,5,1);
	cout<<"Absis koin pertama adalah "<<k.getX()<<endl;
	cout<<"Ordinat koin pertama adalah "<<k.getY()<<endl;
	cout<<"Kecepatan koin pertama adalah "<<k.getKecepatan()<<endl;
	cout<<"Nilai koin pertama adalah "<<k.getNilai()<<endl;
	cout<<"Jenis koin pertama adalah "<<k.getLevel()<<endl;
	k.gerak();
	cout<<"Absis koin pertama adalah "<<k.getX()<<endl;
	cout<<"Ordinat koin pertama adalah "<<k.getY()<<endl;
  return 0;
}
