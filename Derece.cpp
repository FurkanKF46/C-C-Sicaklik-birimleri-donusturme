#include<iostream>
using namespace std;
//FURKAN KOCA 221030910028
int main () {
double Fah,Cel,sonuc,deger;
char islem;
cout<<"Gireceginiz CELSIUS degeri FAHRENHEIT'e cevirmek icin F"<<endl;
cout<<"Gireceginiz FAHRENHEIT degeri CELSIUS'a cevirmek icin C'yi giriniz"<<endl;
cin >>islem;
cout<<"Cevirmek istediginiz degeri giriniz"<<endl;
cin >>deger;
switch(islem){
case 'F':
Fah = deger * 1.8;
sonuc = Fah + 32;
cout<<"Fahrenheit degeri: "<<sonuc<< endl;
break;
case 'C':
Cel = deger - 32;
sonuc = Cel / 1.8;
cout<<"Celsius degeri :"<<sonuc<< endl;	
break;		
}

return 0;
}
