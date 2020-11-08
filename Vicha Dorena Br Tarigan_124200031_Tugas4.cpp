#include <iostream>

using namespace std;

int main ()
{ 
	int nomor, m, n, jlh;
	
	cout <<"nama		: Vicha Dorena Br Tarigan"<<endl;
	cout <<"NIM		: 124200031"<<endl;
	cout <<""<<endl;
	cout <<"===================================================="<<endl;
	cout <<"Program Perkalian dan Perpangkatan"<<endl;
	cout <<"===================================================="<<endl;
	cout <<""<<endl;
	cout <<"1. Perkalian"<<endl;
	cout <<"2. Perpangkatan"<<endl;
	cout <<""<<endl;
	cout <<"pilih	:"; cin >> nomor ;
	cout <<"===================================================="<<endl;
	
	//switch case
	switch (nomor)
	{
		case 1 :
		cout<<"Input Angka N	:"; cin >> n;
		cout<<"Input Angka M	:"; cin >> m;
		cout<<"Hasil "<< n <<" x "<< m << endl;
		jlh = 0;
	         for(int i=1; i<=n; i++)
	         {
		         jlh = jlh + m;
		         if(i!=n)
			     {cout<< m <<" + ";}
		         else
		         {cout<< m <<" = "<< jlh;}
	         }
		break;
		
		case 2 :
		cout<<"Input Angka N :"; cin >> n;
		cout<<"Input Angka M :"; cin >> m;
		cout<<"Hasil "<< n <<" ^ "<< m << endl;
		jlh = 1;
	         for(int i=1; i<=m; i++)
	         {
		         jlh = jlh * n;
		         if(i!=m)
			     {cout<<n<<" X ";}
		         else
		         {cout<<n<<" = "<< jlh;}
	         }
	    break;
	}
	
	return 0;
}
