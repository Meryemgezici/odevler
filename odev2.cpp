#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Karmasik{

	private:
		double reel;
		double sanal;
		
	public:
		Karmasik(){//default constructor.
			reel=0;
			sanal=0;
		}
		
	    Karmasik(int a){//bir tam sayi alan conversion constructor olusturduk.
	    	reel=a;
	    	sanal=0;
	    	cout<<"karmasik sayi:"<<reel<<"+"<<sanal<<"i"<<endl;
		}
		
	  	Karmasik(double b){// Bir reel sayýyý (double) bir karmaþýk sayýya dönüþtüren bir dönüþtürücü yapýcý (conversion constructor).
			reel=b;
			sanal=0;
			cout<<"karmasik sayi:"<<reel<<"+"<<sanal<<"i"<<endl;
		}
		
		Karmasik(int a,int b){
			reel=a;
			sanal=b;
			if(b<0){//sanal kismin negatif olma durumunda if else bloklari actik.
				cout<<"karmasik sayi:"<<reel<<sanal<<"i"<<endl;
			}
			else{
				cout<<"karmasik sayi:"<<reel<<"+"<<sanal<<"i"<<endl;
			}
		}
		
		double add(double a,double b,double c,double d){//iki karmasik sayiyi toplayabilmek icin bir fonksiyon olusturduk.
			double reeltoplam=a+c;
			double sanaltoplam=b+d;
			if(sanaltoplam<0){
			cout<<"karmasik sayilarin toplami sonucu olusan karmasik sayi:"<<reeltoplam<<sanaltoplam<<"i"<<endl;
		}
		   else{
		   	cout<<"karmasik sayilarin toplami sonucu olusan karmasik sayi:"<<reeltoplam<<"+"<<sanaltoplam<<"i"<<endl;
		   }
		}
		
		double subtract(double a,double b,double c,double d){//iki karmasik sayiyi cikarabilmek icin bir fonksiyon olusturduk.
			double reeltoplam=a-c;
			double sanaltoplam=b-d;
			if(sanaltoplam<0){
			cout<<"karmasik sayilarin cikarma sonucu olusan karmasik sayi:"<<reeltoplam<<sanaltoplam<<"i"<<endl;
		}
		   else{
		   	cout<<"karmasik sayilarin cikarma sonucu olusan karmasik sayi:"<<reeltoplam<<"+"<<sanaltoplam<<"i"<<endl;
		   }
		}
		
		double divide(double a,double b,double c,double d){//iki karmasik sayiyi bolme icin bir fonksiyon olusturduk.
			/*  (a+bi)/(c+di)(c-di) eslenlik ile carptik->>>(a*c+b*c*i-a*d*i-b*d*i*i)/(c*c-d*d)->>>i*i=-1 oldugundan->>>(a*c+b*d+b*c*i-a*d*i)/(c*c-d*d) */
			double reelkismi=(a*c+b*d)/(c*c-d*d);
			double sanalkismi=(c*b-a*d)/(c*c-d*d);    
			if(sanalkismi<0){
			cout<<"karmasik sayilarin bolme sonucu olusan yeni karmasik sayi:"<<reelkismi<<sanalkismi<<"i"<<endl;
		}
		   else{
		   	cout<<"karmasik sayilarin bolme sonucu olusan yeni karmasik sayi:"<<reelkismi<<"+"<<sanalkismi<<"i"<<endl;
		   }
		}
		void print(double a,double b){//Karmaþýk sayýyý ekrana bastýran bir print üye fonksiyonu olusturduk.
			reel=a;
			sanal=b;
			if(sanal<0){
			cout<<"karmasik sayi:"<<reel<<sanal<<"i"<<endl;
		}
		   else{
		   	cout<<"karmasik sayi:"<<reel<<"+"<<sanal<<"i"<<endl;
		   }
		}
		  void setReel(int a){
	  	    reel=a;
	  }
	  
	  int getReel(){//Sanal ve gerçel deðeri tutan özel veri üyelerine eriþim ve onlarý düzenlemek için getter/setter fonksiyonlar
	  	return reel;
	  }
	  void setSanal(int b){
	  	    sanal=b;
	  }
	  int getSanal(){
	    return sanal;
	  }
};

int main(){
	
	Karmasik karmasik1;
	double a,b,c,d;
	
    Karmasik(5);//olusturdugumuz yapiciya tam sayi degrini gonderdik.
    Karmasik(6,-8);//olusturdugumuz yapiciya reel ve sanal degerleri gonderdik.
    Karmasik(5.5);//olusturdugumuz yapiciya double degrini gonderdik.
    cout<<"olusturmak istediginiz karmasik sayinin once reel sonra sanal kismini giriniz:";
	cin>>a>>b;
	cout<<"olusturmak istediginiz karmasik sayinin once reel sonra sanal kismini giriniz:";
	cin>>c>>d;
    karmasik1.add(a,b,c,d);
	karmasik1.subtract(a,b,c,d);
	karmasik1.divide(a,b,c,d);
	karmasik1.print(a,b);
	return 0;
}
