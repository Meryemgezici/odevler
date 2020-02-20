#include<iostream>
using namespace std;

void duz_ucgen(int deger){
	int bosluk;
	int yildiz=1;
	
		
			bosluk=deger-1;
		
			for(int i=0;i<deger; ++i){//deger kadar satirda islemleri yap
				for(int j=0; j<bosluk; ++j){//bastaki bosluklar icin dongu actik.
					cout<<" ";
				}
				for(int j=0; j<yildiz; ++j){//satirdaki yildizlar icin dongu actik.
					cout<<"*";
				}
				cout<<endl;
				bosluk--;//asagiya dogru bosluk sayisi bir bir azalır.
				yildiz+=2;//yildizlari iki iki arttirdik
				
		}



}

void ters_ucgen(int deger){
	int yildiz=2*deger-1;
	int x=0;//dongu icin bir deger tanimladik.
	int bosluk=0;
	
	while(x<deger){//deger kadar satirda islemleri yap
		int y=0,z=0;
		while(y<bosluk){//bastaki bosluklar icin dongu actik.
			cout<<" ";
			y++;
		}
		while(z<yildiz){//satirdaki yildizlar icin dongu actik.
			cout<<"*";
			z++;
		}
		cout<<endl;
		bosluk++;//ters ucgen oldugu icin bosluk sayisi asagiya indikce bir bir artmali
		yildiz-=2;//yildiz sayisi asagiya indikçe iki iki azalir
		x++;//dongunun bitmesi icin x'i bir bir arttiriyoruz.
	}
	
	
}
void elmas_cizme(int deger){
	duz_ucgen(deger);//bir duz ve tek ucgen fonksiyonunu cagirarak elmas olusturduk.
	ters_ucgen(deger);
}

void menu(int islem,int n){//bu fonksiyonda yapmak istedigi sekle gore fonksiyon cagirdik.

		switch(islem){
		
		case 1:
			
		   	duz_ucgen(n);
		break;
		
			case 2:
			
		ters_ucgen(n);	
		break;
			case 3:
			
		elmas_cizme(n);
	
		break;
		
			case 4:
			cout<<"cikis";
			
			 
		break;
		
	
			
	}}


int main(){
  int k=0;//dongu icin bir deger tanimladik
  while(k<3){//uc defa deger araliginda olmayan bir sayi girdiginde programi kapatmak icin dongu actik.
  
    int n;//kullanicidan alinan boyut degeri.
	int islem;//menuden islemi secmesi icin deger atdik.
	cout<<"islem:\n1:duz ucgen\n2:ters ucgen\n3:elmas\n4:cikis"<<endl;
	 cout<<"yapmak istediginiz sekli seciniz";
	cin>>islem;
	
      cout<<"yapmak istediginiz seklin boyutunu giriniz";
	  cin>>n;

      
    if(islem==1 && n>2 && n<16 && n%2==1 ){//secilen boyut icin aralik belirledik.
      	menu(islem,n);
      	
	  }
	else if(islem==2 && n>2 && n<16 && n%2==1 ){
      	menu(islem,n);
      	
	  }
	else if(islem==3 && n>4 && n<16 && n%2==1 ){
      	menu(islem,n);
      	
	  }
	  else if(islem==4){
	  	menu(islem,n);
	  	break;
	  }
	 
    else{
    	k++;//dongunun yanlis girince  bitmesi icin k'yi bir bir arttirdik.
	}
	
}
	
	return 0;
}
