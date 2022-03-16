#include <iostream >
using namespace std;

int main()
{
   int i,n,d;
   tt:
   cout << " Moi ban nhap n = " ;
   cin >> n;
   i=2 ; 
   d=1 ;
   do 
     {
      if (n % i == 0)
	    {
    		d+=1 ;
    		i++ ;
    	}	
     }while (i <= n/2);	
    if (d == 2)
       {
       	cout << "N là so nguyen to \n " ;
       }else cout << "N khong phai la so nguyen to \n";
	     
   
    cout << "[?] Ban co muon thay doi du lieu vao khong ? (Y/N)" << endl;
	    char LC;
	    cout << "Lua chon cua ban : " ; cin >> LC;
	    if (LC == 'Y' || LC == 'y') {
		cout << endl;
		system ("cls"); 
		goto tt;
	    }else
        {
       cout << " Ket thuc !! ";
    
        } 
}