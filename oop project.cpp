#include<iostream>
#include<string>
using namespace std;

// class product

class Product{
	public:
	Product(){
		cout<<"**********************  (Welcome To Gadgets Hub)  **************************"<<endl;
		cout<<"1.Mobile Phones "<<endl;
		cout<<"2.Laptops "<<endl;
		cout<<"3.Ipads / Tab series "<<endl;
		cout<<"4.Smart Watches "<<endl;
		cout<<"5.Company details "<<endl;
		cout<<"6.Exit"<<endl;
		cout<<"  { In Which Product You Are Interested And Want To Buy }  : "<<endl<<endl;
	}
};
//class order confirm
class order_confirm{
	private: 
	
	string name;
	double contact;
	double a_contact;
	string address;
	string famous;
	
	public:
	
void get_name(string x) {
        name=x;
    }
    
    string print_name(){
    	return name;
	}
	
	void get_contact( double a){
		contact=a;
	}
	double print_contact(){
		return contact;
	}
	void get_a_contact(double b){
		a_contact=b;
	}
	double print_a_contact(){
		return a_contact;
	}
	void get_address(string c){
		
		address=c;
	}
	string print_address(){
		return address;
	}
	void get_famous(string d){
		famous=d;
	}
	string print_famous(){
		return famous;
	}
	
    
};
// class company details

class about_company{
	
             private:
			 string company_name;
			 double contact_no;
			 string gmail;
			 string location;
			 public:	
	
};
//class customer details
class customer_details : public order_confirm{
	
	public:
		
	 string get_details(){
		
	    	cout<<"Enter the name : ";
	        string a;
            cin>>a;
           	getline(cin,a);
	        cout<<"Enter address : ";
	        string c;
	        getline(cin,c);
	        cout<<"Enter the famous place near dilevery destination : ";
        	string b;
        	getline(cin,b);

			cout<<"Enter the contact number : ";
			double cc;
			cin>>cc;
			
			cout<<"Enter another contact number : ";
			double a_c;
			cin>>a_c;
		
			//////////////////////////////////////
			get_name(a);
           	get_famous(b);
	        get_address(c);
			get_contact(cc);
			get_a_contact(a_c);

			
			cout<<endl;
			cout<<endl;
			cout<<endl;
            cout<<endl;
            
			cout<<"Your order has been confirm. It will delivered you with in 3/4 working days !!!!! "<<endl;
		
			cout<<"***********************************************************************************************"<<endl;
			cout<<"Order no : usman234 "<<endl;
			cout<<"Name : "<<print_name()<<endl;
			cout<<"Contact no : " <<print_contact()<<endl;
			cout<<"Another Contact no :"<<print_a_contact()<<endl;
			cout<<"Delivery Address : "<<print_address()<<endl;
			cout<<"Another Famous Destination near Delivery point : "<<print_famous()<<endl;
			cout<<endl;
				cout<<"***********************************************************************************************"<<endl;
				cout<<endl;
			cout<<"In case of any query and issue you can mail us (gadgetshub19@gmail.com)."<<endl;
			cout<<" press 1 For Further details Check the company details contact and branch location ";
			
			
		
		
		}
	
};
// class payments
class payment : virtual public customer_details{
	
	public:
		string payment_methods(){
			
				
				cout<<"****************************************************************"<<endl<<endl;
				cout<<"////////////////////  Select Your payment method  ///////////////////////////"<<endl;
				cout<<"1.Easypaisa / jazz cash "<<endl;
				cout<<"2.VISA card / DEBITE card "<<endl;
			 int a;
			 cin>>a;
			 if(a==1){
			 	
			 	cout<<easy();
			 }else if(a==2){
			  	
			 cout<<visa();
			 }
			}
			
			string easy(){
				cout<<"Enter Your Jazzcash/Easypaisa Number : ";
				double number;
				cin>>number;
				cout<<"Enter PIN send on your mobile number : "	;
				int pin;
				cin>>pin;
					cout<<"   PAYMENT HAS BEEN DEDUCT FROM YOUR ACCOUNT  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!! " <<endl;
		cout<<"*************************************************************"<<endl;
		cout<<"Enter Your details and dilvery location"<<endl;
		cout<<get_details();
			}
			
			string visa(){
				
				cout<<"Enter Your Card No: ";
				int no;
				cin>>no;
				cout<<"Enter 4-digit code mentioned on your VISA/DEBITE card : ";
				int code;
				cin>>code;
				cout<<"Enter the code send on you number : ";
				int c;
				cin>>c;
					cout<<"   PAYMENT HAS BEEN DEDUCT FROM YOUR ACCOUNT  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!! "<<endl ;
				cout<<"*************************************************************"<<endl;
		cout<<"Enter Your details and dilvery location"<<endl;
		cout<<get_details();
			}
			
			
		
};
class bank_student{
	
	private:
		string name;
		string iban;
		string stu_name;
		string stu_id;
		string program;
		
		public:
		            void get_n(string q){
		            	 name=q;
					}
					
					void get_iban(string w){
						iban=w;
					}
					void get_stu_name(string e){
						stu_name=e;
					}
					void get_stu_id(string r){
						stu_id=r;
					}
					void get_program(string t){
						program=t;
					}
};

// class bank payments
 class bank_payments_discount : virtual private customer_details ,virtual  public payment ,virtual public bank_student{ 
 	public:
 	
 string	meezan_discount(){
 	 cout<<"*********************************************************************"<<endl<<endl; 
 	 	 cout<<"Enter The Name Mentioned On Card : ";
 	 string n;
 	 cin>>n;
 	 getline(cin,n);
 	 cout<<"Enter The Account IBAN number : ";
 	 string iba;
 	 cin>>iba;
 	  get_n(n);
	 get_iban(iba);
 	 cout<<"Enter the code Send On Your Mobile Number Send on You Mobile Number Register With Bank Account :";
 	 string code;
 	 cin>>code;
 	 if(code=="usman123" || code=="talha123" || code=="laiba123" || code=="axaan123" || code=="zoha123")
 	 {
 	 	cout<<"Press 1 To Confirm The order : ";
 	 	int x;
 	 	cin>>x;
 	 	if(x==1){
 	 		
 	 		cout<<"   PAYMENT HAS BEEN DEDUCT FROM YOUR ACCOUNT  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!! " <<endl<<endl;
 	 		cout<<"*************************************************************"<<endl;
		cout<<"Enter Your details and dilvery location"<<endl;
 	 		cout<<get_details();
		  }else {
		  	
		  	cout<<"Try Again";
		  }
	  }else {
	  	cout<<"Enter the correct code!!!";
	  }
 	
 }
 	
 };
// class university student

class uni_student_discount  : virtual private customer_details ,virtual public payment , virtual public bank_student {
	public:
	string student_discount(){
			 cout<<"*********************************************************************"<<endl<<endl; 
			  
		 cout<<"Enter Instiute Name : ";
		 string stu_num;
		 cin>>stu_num;
		 getline(cin,stu_num);
		 cout<<"Enter student ID : ";
		 string id;
		 cin>>id;
		 cout<<"Enter the Study Program : ";
		 string pro;
		 cin>>pro;
		 getline(cin,pro);
	
					 get_stu_name(stu_num);
					 get_stu_id(id);
					 get_program(pro);
		 
		 cout<<"Press 1 to confirm Your Order : ";
		 int a;
		 cin >>a;
		 if ( a==1 ){
		 	cout<<"  You got 20% discount on this product " ;
		 	cout<<payment_methods();
		 }
	}
};

//referal discount
class referal_code_discount : virtual public payment {
	
		public : 
	  string referal_discount(){
	  	 cout<<"*********************************************************************"<<endl<<endl; 
	  	
	  		cout<<"Enter the referal code : " ;
	                	string a;
	                	cin>>a;
	                	if(a=="usman123" || a=="talha123" || a=="laiba123" || a=="axaan123" || a=="zoha123"){
	                		
	                		cout<<"You got the 15% discount."<<endl;
	                		cout<<"Now You can get this product in 2000$"<<endl;
	                		cout<<"press 1 to confirm the order";
	                		int b;
	                		cin>>b;
	                		if(b==1){
	                			
	                			cout<<payment_methods();
							}
							else{
								cout<<"Please enter the 1 to your Order";
							}
						}else{
							
							cout<<"You cannot get the Discount because You do not know any referal code"<<endl;
							cout<<"Please reconfirm the referal c2ode ";
						}
	  }
	
};

//discount class
class discount : public referal_code_discount /*public meezan_bank_discount , public hbl_bank_discount */ , public bank_payments_discount , public uni_student_discount {
	
	public:
	
	                 
	                string get_discount(){
	                                 cout<<"*********************************************************************"<<endl<<endl;               
									cout<<"1.Referal Code discount if You Have Any Referal Code  ( upto 15% discount) "<<endl;
									cout<<"2.Payment Through Meezan Bank (upto 12% discount)"<<endl;
							     	cout<<"3.Discount for College and University Students ( upto 20% discount)"<<endl;
									cout<<"Select the Option : ";
									int a;
									cin >>a;
									if(a==1){
										
										cout<<referal_discount()<<endl<<endl;
									}else if (a==2){
										
										cout<<meezan_discount()<<endl<<endl;
									}else if (a==3){
										cout<<student_discount()<<endl<<endl;
									}				   	
	                
					}
	
};
//class product details
class laptop_models : public discount,virtual public payment {
	
	public:
		
		//////////////////////////////////// laptops sectoin 1 ///////////////////////////////////////
		string lap11(){
			
			cout<<"product details"<<endl; 
			cout<<"Price is 3000$"<<endl<<endl;
			cout<<"press 1 to confirm the order :"<<endl;
			cout<<"Press 2 if you are University students or you have any referal code for discount "<<endl;
			int a;
			cin>>a;
			if (a==1){
				
					cout<<payment_methods();
				
			}else if(a==2){
				 cout<<get_discount();
			}
		}
		string lap12(){
		}
		
		string lap13(){
			
		}
		string lap14(){
			
		}
		string lap15(){
		}
		
		////////////////////////////// laptop section 2 //////////////////////////////////////////////////
		string lap21(){
		}
		string lap22(){
			
		}
		string lap23(){
			
		}
		string lap24(){
			
		}
		string lap25(){
		}
		
		////////////////////////////////////////////////// laptop section 3 ///////////////////////////////////////
		string lap31(){
		}
		string lap32(){
			
		}
		string lap33(){
			
		}
		string lap34(){
			
		}
		string lap35(){
		}
		
		///////////////////////////////////// laptop section 4 ///////////////////////////////////////////////
		string lap41(){
		}
		string lap42(){
			
		}
		string lap43(){
			
		}
		string lap44(){
			
		}
		string lap45(){
		}
		
		////////////////////////////////////////////////////////// laptop section 5 ///////////////////////////////////////////////
		string lap51(){
		}
		string lap52(){
			
		}
		string lap53(){
			
		}
		string lap54(){
			
		}
		string lap55(){
		}
		////////////////////////////////////////////////////////// laptop section 6 ///////////////////////////////////////////////
		string lap61(){
		}
		string lap62(){
			
		}
		string lap63(){
			
		}
		string lap64(){
			
		}
		string lap65(){
		}
		
	};
	
	class mobile_models{
	
		////////////////////////////////////////////////// mobile section 1 //////////////////////////////////////////////////////////
		public:
		
		string m11(){
			
		}
		string m12(){
			
		}
		string m13(){
			
		}
		string m14(){
		}
		string m15(){
		}
		
		////////////////////////////////////////////////////// mobile sectoion 2 ////////////////////////////////////////////////
		
		string m21(){
			
		}
		string m22(){
			
		}
		string m23(){
			
		}
		string m24(){
		}
		string m25(){
		}
		
		//////////////////////////////////////////////// mobile section 3 //////////////////////////////
		
		string m31(){
			
		}
		string m32(){
			
		}
		string m33(){
			
		}
		string m34(){
		}
		string m35(){
		}
		
		//////////////////////////////// mobile section 4 ////////////////////////////////////////////////////
		
		string m41(){
			
		}
		string m42(){
			
		}
		string m43(){
			
		}
		string m44(){
		}
		string m45(){
		}
		
		/////////////////////////////////////////////// mobile section 5 ////////////////////////////////////////////////
		string m51(){
			
		}
		string m52(){
			
		}
		string m53(){
			
		}
		string m54(){
		}
		string m55(){
		}
		/////////////////////////////////////////////// mobile section 6 ////////////////////////////////////////////////
		string m61(){
			
		}
		string m62(){
			
		}
		string m63(){
			
		}
		string m64(){
		}
		string m65(){
		}
		
	};
	
	class ipad_models{
	
				////////////////////////////////////////////////// ipads section 1 //////////////////////////////////////////////////////////
		public:
		string i11(){
			
		}
		string i12(){
			
		}
		string i13(){
			
		}
		string i14(){
		}
		string i15(){
		}
		
		////////////////////////////////////////////////////// ipads sectoion 2 ////////////////////////////////////////////////
		
		string i21(){
			
		}
		string i22(){
			
		}
		string i23(){
			
		}
		string i24(){
		}
		string i25(){
		}
		
		//////////////////////////////////////////////// ipads section 3 //////////////////////////////
		
		string i31(){
			
		}
		string i32(){
			
		}
		string i33(){
			
		}
		string i34(){
		}
		string i35(){
}
		
		//////////////////////////////// ipads section 4 ////////////////////////////////////////////////////
		
		string i41(){
			
		}
		string i42(){
			
		}
		string i43(){
			
		}
		string i44(){
		}
		string i45(){
		}
		
		/////////////////////////////////////////////// ipads section 5 ////////////////////////////////////////////////
		string i51(){

		}
		string i52(){
			
		}
		string i53(){
			
		}
		string i54(){
		}
		string i55(){
		}
		/////////////////////////////////////////////// ipads section 6 ////////////////////////////////////////////////
		string i61(){

		}
		string i62(){
			
		}
		string i63(){
			
		}
		string i64(){
		}
		string i65(){
		}
		
	};
	
	class watch_models{
	
				////////////////////////////////////////////////// watches section 1 //////////////////////////////////////////////////////////
		public:
		string w11(){
			
		}
		string w12(){
			
		}
		string w13(){
			
		}
		string w14(){
		}
		string w15(){
		}
		
		////////////////////////////////////////////////////// watches sectoion 2 ////////////////////////////////////////////////
		
		string w21(){
			
		}
		string w22(){
			
		}
		string w23(){
			
		}
		string w24(){
		}
		string w25(){
		}
		
		/////////////////////////////////////////////// watches section 3 //////////////////////////////
		
		string w31(){
			
		}
		string w32(){
			
		}
		string w33(){
			
		}
		string w34(){
		}
		string w35(){
		}
		
		//////////////////////////////// watches section 4 ////////////////////////////////////////////////////
		
		string w41(){
			
		}
		string w42(){
			
		}
		string w43(){
			
		}
		string w44(){
		}
		string w45(){
		}
		
		/////////////////////////////////////////////// watches section 5 ////////////////////////////////////////////////
		string w51(){
			
		}
		string w52(){
			
		}
		string w53(){
			
		}
		string w54(){
		}
		string w55(){
		}
			/////////////////////////////////////////////// watches section 6 ////////////////////////////////////////////////
		string w61(){
			
		}
		string w62(){
			
		}
		string w63(){
			
		}
		string w64(){
		}
		string w65(){
		}
			
};

// class model
class models : public laptop_models , public mobile_models , public ipad_models , public watch_models{
	
	public:
		
		//////////////////////////////////////////////////////////// laptops //////////////////////////////////////////////////////////////////////////
		
		string lap1(){
			cout<<"Avalible Models of Apple (MacBook)"<<endl<<endl; 
			cout<<"1.MacBook Air (M1, 2020)"<<endl;
			cout<<"2.MacBook Pro (13-inch, M1, 2020)"<<endl;
			cout<<"3.MacBook Pro (16-inch, 2019)"<<endl;
			cout<<"4.MacBook (Retina, 12-inch, 2017)"<<endl;
			cout<<"5.MacBook Pro (13-inch, 2020, Four Thunderbolt 3 ports)"<<endl<<endl;
			
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<lap11();
				
			}else if( a==2){
				
				cout<<lap12();
			}else if (a==3){
				cout<<lap13();
			}else if(a==4){
				cout<<lap14();
			}else if(a==5){
				cout<<lap15();
			}
		}
		string lap2(){
			cout<<"Avalible Models of Dell (XPS, Inspiron, Latitude)"<<endl<<endl;
			cout<<"1.Dell XPS 13"<<endl; 
			cout<<"2.Dell XPS 17"<<endl; 
			cout<<"3.Dell Inspiron 14 3000 Series"<<endl; 
			cout<<"4.Dell Inspiron 17 7000 Series"<<endl; 
			cout<<"5.Dell Latitude 5000 Series"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<lap21();
				
			}else if( a==2){
				
				cout<<lap22();
			}else if (a==3){
				cout<<lap23();
			}else if(a==4){
				cout<<lap24();
			}else if(a==5){
				cout<<lap25();
			}
		}
		string lap3(){
			cout<<"Avalible Models of HP (Pavilion, Spectre, EliteBook)"<<endl<<endl; 
			cout<<"1.HP EliteBook 800 Series"<<endl; 
			cout<<"2.HP Spectre x360 15"<<endl; 
			cout<<"3.HP Pavilion x360"<<endl; 
			cout<<"4.HP Pavilion Gaming"<<endl; 
			cout<<"5.HP EliteBook x360"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<lap31();
				
			}else if( a==2){
				
				cout<<lap32();
			}else if (a==3){
				cout<<lap33();
			}else if(a==4){
				cout<<lap34();
			}else if(a==5){
				cout<<lap35();
			}
		}
		string lap4(){
			cout<<"Avalible Models of Lenovo (ThinkPad, IdeaPad, Yoga)"<<endl<<endl;  
			cout<<"1.Lenovo ThinkPad X1 Carbon"<<endl; 
			cout<<"2.Lenovo ThinkPad X-series (e.g., X1 Yoga, X1 Extreme)"<<endl; 
			cout<<"3.Lenovo IdeaPad 5"<<endl; 
			cout<<"4.Lenovo IdeaPad Flex"<<endl; 
			cout<<"5.Lenovo Yoga 9i"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<lap41();
				
			}else if( a==2){
				
				cout<<lap42();
			}else if (a==3){
				cout<<lap43();
			}else if(a==4){
				cout<<lap44();
			}else if(a==5){
				cout<<lap45();
			}
		}
		string lap5(){
			cout<<"Avalible Models of Acer (Aspire, Predator, Swift) "<<endl<<endl; 
			cout<<"1.Acer Swift 7"<<endl; 
			cout<<"2.Acer Predator Helios 700"<<endl; 
			cout<<"3.Acer Predator Helios 300"<<endl; 
			cout<<"4.Acer Aspire 3"<<endl; 
			cout<<"5.Acer Aspire 5"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<lap51();
				
			}else if( a==2){
				
				cout<<lap52();
			}else if (a==3){
				cout<<lap53();
			}else if(a==4){
				cout<<lap54();
			}else if(a==5){
				cout<<lap55();
			}
		}
		string lap6(){
			cout<<"Avalible Models of Microsoft (Surface) "<<endl<<endl; 
			cout<<"1.Surface Laptop"<<endl; 
			cout<<"2.Surface Pro"<<endl; 
			cout<<"3.Surface Book"<<endl; 
			cout<<"4.Surface Go"<<endl; 
			cout<<"5.Surface Studio"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<lap61();
				
			}else if( a==2){
				
				cout<<lap62();
			}else if (a==3){
				cout<<lap63();
			}else if(a==4){
				cout<<lap64();
			}else if(a==5){
				cout<<lap65();
			}
		}
		
		//////////////////////////////////////////////////////////// mobile phone //////////////////////////////////////////////////////////////////////
		
		string m1(){
			cout<<"Avalible Models of Apple (iPhone)"<<endl<<endl;  
			cout<<"1.iPhone 6 Plus"<<endl; 
			cout<<"2.iPhone 13 Pro Max"<<endl; 
			cout<<"3.iPhone 12 mini"<<endl; 
			cout<<"4.iPhone XS Max"<<endl; 
			cout<<"5.iPhone 8 Plus"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<m11();
				
			}else if( a==2){
				
				cout<<m12();
			}else if (a==3){
				cout<<lap13();
			}else if(a==4){
				cout<<m14();
			}else if(a==5){
				cout<<m15();
			}
		}
		string m2(){
			cout<<"Avalible Models of Samsung (Galaxy series)"<<endl<<endl; 
			cout<<"1.Galaxy S21 Ultra"<<endl; 
			cout<<"2.Galaxy Note 20 Ultra"<<endl; 
			cout<<"3.Galaxy S20+"<<endl; 
			cout<<"4.Galaxy S10"<<endl; 
			cout<<"5.Galaxy Note 9"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<m21();
				
			}else if( a==2){
				
				cout<<m22();
			}else if (a==3){
				cout<<m23();
			}else if(a==4){
				cout<<m24();
			}else if(a==5){
				cout<<m25();
			}
		}
		string m3(){
		cout<<"Avalible Models of Huawei"<<endl<<endl; 	
		    cout<<"1.Huawei P50 Pro"<<endl; 
			cout<<"2.Huawei Mate 40 Pro"<<endl; 
			cout<<"3.Huawei Nova 8 Pro"<<endl; 
			cout<<"4.Huawei Honor 50 Pro"<<endl; 
			cout<<"5.Huawei Enjoy 20 Pro"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<m31();
				
			}else if( a==2){
				
				cout<<m32();
			}else if (a==3){
				cout<<m33();
			}else if(a==4){
				cout<<m34();
			}else if(a==5){
				cout<<m35();
			}
		}
		string m4(){
			 cout<<"Avalible Models of Xiaomi"<<endl<<endl; 
			 cout<<"1.Xiaomi Mi 11 Ultra"<<endl; 
			cout<<"2.Xiaomi Mi 11"<<endl; 
			cout<<"3.Xiaomi Mi 10T Pro"<<endl; 
			cout<<"4.Xiaomi Redmi Note 10 Pro"<<endl; 
			cout<<"5.Xiaomi Redmi Note 8"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<m41();
				
			}else if( a==2){
				
				cout<<m42();
			}else if (a==3){
				cout<<m43();
			}else if(a==4){
				cout<<m44();
			}else if(a==5){
				cout<<m45();
			}
		}
		string m5(){
			cout<<"Avalible Models of OnePlus"<<endl<<endl; 
			cout<<"1.OnePlus 9 Pro"<<endl; 
			cout<<"2.OnePlus 9R"<<endl; 
			cout<<"3.OnePlus 8 Pro"<<endl; 
			cout<<"4.OnePlus Nord 2"<<endl; 
			cout<<"5.OnePlus 7T Pro"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<m51();
				
			}else if( a==2){
				
				cout<<m52();
			}else if (a==3){
				cout<<m53();
			}else if(a==4){
				cout<<m54();
			}else if(a==5){
				cout<<m55();
			}
		}
		string m6(){
			cout<<"Avalible Models of Google (Pixel)"<<endl<<endl; 
			cout<<"1.Google Pixel 4a 5G"<<endl; 
			cout<<"2.Google Pixel 3a"<<endl; 
			cout<<"3.Google Pixel 6 Pro"<<endl; 
			cout<<"4.Google Pixel 5"<<endl; 
			cout<<"5.Google Pixel 4a 5G"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<m61();
				
			}else if( a==2){
				
				cout<<m62();
			}else if (a==3){
				cout<<m63();
			}else if(a==4){
				cout<<m64();
			}else if(a==5){
				cout<<m65();
			}
		 
		}
		
		////////////////////////////////////////////////////////////////// ipads //////////////////////////////////////////////////////////////////////////
		string i1(){
			cout<<"Avalible Models of Apple (iPad)"<<endl<<endl;  
			cout<<"1.iPad (9th generation, 2021)"<<endl; 
			cout<<"2.iPad Air (2019)"<<endl; 
			cout<<"3.iPad (8th generation, 2020)"<<endl; 
			cout<<"4.iPad mini (5th generation, 2019)"<<endl; 
			cout<<"5.iPad Pro (2018)"<<endl;
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<i11();
				
			}else if( a==2){
				
				cout<<i12();
			}else if (a==3){
				cout<<i13();
			}else if(a==4){
				cout<<i14();
			}else if(a==5){
				cout<<i15();
			} 
		}
		string i2(){
			cout<<"Avalible Models of Samsung (Galaxy Tab series)"<<endl<<endl; 
			cout<<"1.Samsung Galaxy Tab S8 Ultra"<<endl; 
			cout<<"2.Samsung Galaxy Tab S8+"<<endl; 
			cout<<"3.Samsung Galaxy Tab S7 FE"<<endl; 
			cout<<"4.Samsung Galaxy Tab S7"<<endl; 
			cout<<"5.Samsung Galaxy Tab S6 Lite"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<i21();
				
			}else if( a==2){
				
				cout<<i22();
			}else if (a==3){
				cout<<i23();
			}else if(a==4){
				cout<<i24();
			}else if(a==5){
				cout<<i25();
			}
		}
		string i3(){
			cout<<"Avalible Models of Huawei (MatePad series)"<<endl<<endl; 
			cout<<"1.Huawei MatePad Pro 12.6"<<endl; 
			cout<<"2.Huawei MatePad 11"<<endl; 
			cout<<"3.Huawei MatePad 10.4"<<endl; 
			cout<<"4.Huawei MatePad M6 10.8"<<endl; 
			cout<<"5.Huawei MatePad M6 8.4"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<i31();
				
			}else if( a==2){
				
				cout<<i32();
			}else if (a==3){
				cout<<i33();
			}else if(a==4){
				cout<<i34();
			}else if(a==5){
				cout<<i35();
			}
		}
		
		
		/////////////////////////////////////////////////// watches /////////////////////////////////////////////////////////////////////////////
		
			string w3(){
		              cout<<"Avalible Models of Garmin (Forerunner, Fenix, Vivoactive)"<<endl<<endl; 
			cout<<"1.Garmin Vivoactive 3 Music"<<endl; 
			cout<<"2.Garmin Fenix 6S Pro"<<endl; 
			cout<<"3.Garmin Fenix 7X Sapphire Solar"<<endl; 
			cout<<"4.Garmin Forerunner 45S"<<endl; 
			cout<<"5.Garmin Forerunner 245 Music"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<w31();
				
			}else if( a==2){
				cout<<w32();
			}else if (a==3){
				cout<<w33();
			}else if(a==4){
				cout<<w44();
			}else if(a==5){
				cout<<w55();
			}	
		
		}
		string w4(){
			cout<<"Avalible Models of Fitbit (Versa, Charge, Ionic)"<<endl<<endl;  
			cout<<"1.Fitbit Versa 3"<<endl; 
			cout<<"2.Fitbit Versa 2"<<endl; 
			cout<<"3.Fitbit Charge 4"<<endl; 
			cout<<"4.Fitbit Ionic Adidas Edition"<<endl; 
			cout<<"5.Fitbit Ionic"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<w41();
				
			}else if( a==2){
				
				cout<<w42();
			}else if (a==3){
				cout<<w43();
			}else if(a==4){
				cout<<w44();
			}else if(a==5){
				cout<<w45();
			}
		}
		string w5(){
			cout<<"Avalible Models of Huawei (Watch GT, Watch Fit)"<<endl<<endl; 
			cout<<"1.Huawei Watch GT 3"<<endl; 
			cout<<"2.Huawei Watch GT 2 Pro"<<endl; 
			cout<<"3.Huawei Watch GT 2"<<endl; 
			cout<<"4.Huawei Watch Fit"<<endl; 
			cout<<"5.Huawei Watch Fit Elegant Edition"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<w51();
				
			}else if( a==2){
				
				cout<<w52();
			}else if (a==3){
				cout<<w53();
			}else if(a==4){
				cout<<w54();
			}else if(a==5){
				cout<<w55();
			}
		}
		string w6(){
			cout<<"Avalible Models of Xiaomi (Mi Watch, Mi Band) "<<endl<<endl; 
			cout<<"1.Xiaomi Mi Watch"<<endl; 
			cout<<"2.Xiaomi Mi Watch Lite"<<endl; 
			cout<<"3.Xiaomi Mi Band 6"<<endl; 
			cout<<"4.Xiaomi Mi Band 4"<<endl; 
			cout<<"5.Xiaomi Mi Band 3"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<w61();
				
			}else if( a==2){
				
				cout<<w62();
			}else if (a==3){
				cout<<w63();
			}else if(a==4){
				cout<<w64();
			}else if(a==5){
				cout<<w65();
			}
		}
		
		////////////////////////////////////////////// ipads/////////////////////////////////////////////////////////////
		
		string i4(){
			 cout<<"Avalible Models of Lenovo (Tab series) "<<endl<<endl; 
			 cout<<"1.Lenovo Tab P11 Pro"<<endl; 
			cout<<"2.Lenovo Tab M10 HD Gen 2"<<endl; 
			cout<<"3.Lenovo Tab M10 Plus (2nd Gen)"<<endl; 
			cout<<"4.Lenovo Tab M10 FHD Plus (2nd Gen)"<<endl; 
			cout<<"5.Lenovo Tab M7"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<i41();
				
			}else if( a==2){
				
				cout<<i42();
			}else if (a==3){
				cout<<i43();
			}else if(a==4){
				cout<<i44();
			}else if(a==5){
				cout<<i45();
			}
		}
		string i5(){
			cout<<"Avalible Models of Google (Pixel Slate)"<<endl<<endl; 
			cout<<"1.Google Pixel Slate with Intel Celeron Processor"<<endl; 
			cout<<"2.Google Pixel Slate with Intel Core m3 Processor"<<endl; 
			cout<<"3.Google Pixel Slate with Intel Core i5 Processor"<<endl; 
			cout<<"4.Google Pixel Slate with Intel Core i7 Processor"<<endl; 
			cout<<"5.Google Pixel Slate with Intel Core i8 Processor"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<i51();
				
			}else if( a==2){
				
				cout<<i52();
			}else if (a==3){
				cout<<i53();
			}else if(a==4){
				cout<<i54();
			}else if(a==5){
				cout<<i55();
			}
		}
		string i6(){
			cout<<"Avalible Models of Acer (Iconia series)"<<endl<<endl; 
			cout<<"1.Acer Iconia Tab 7 A1-713HD"<<endl; 
			cout<<"2.Acer Iconia One 10"<<endl; 
			cout<<"3.Acer Iconia Tab 7 (2015)"<<endl; 
			cout<<"4.Acer Iconia Tab A1-810"<<endl; 
			cout<<"5.Acer Iconia Tab A3-A20"<<endl; 
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<i61();
				
			}else if( a==2){
				
				cout<<i62();
			}else if (a==3){
				cout<<i63();
			}else if(a==4){
				cout<<i64();
			}else if(a==5){
				cout<<i65();
			}
		}
		string w1(){
			cout<<"Avalible Models of Apple (Apple Watch)"<<endl<<endl;  
			cout<<"1.Apple Watch Series 7"<<endl; 
			cout<<"2.Apple Watch SE"<<endl; 
			cout<<"3.Apple Watch Series 6"<<endl; 
			cout<<"4.Apple Watch Series 5"<<endl; 
			cout<<"5.Apple Watch Series 4"<<endl; 
		cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<w11();
				
			}else if( a==2){
				
				cout<<w12();
			}else if (a==3){
				cout<<w13();
			}else if(a==4){
				cout<<w14();
			}else if(a==5){
				cout<<w15();
			}
		}
		string w2(){
			cout<<"Avalible Models of Samsung (Galaxy Watch) "<<endl<<endl;
			cout<<"1.Samsung Galaxy Watch 4"<<endl; 
			cout<<"2.Samsung Galaxy Watch 4 Classic"<<endl; 
			cout<<"3.Samsung Galaxy Watch 3"<<endl; 
			cout<<"4.Samsung Galaxy Watch Active 2"<<endl; 
			cout<<"5.Samsung Galaxy Watch Active"<<endl;  
			cout<<"select the model to view details : ";
			int a;
			cin>>a;
			if(a==1){
				cout<<w21();
				
			}else if( a==2){
				
				cout<<w22();
			}else if (a==3){
				cout<<w23();
			}else if(a==4){
				cout<<w24();
			}else if(a==5){
				cout<<w25();
			}
		}
	
		
	
};

// mobile class

class mobile: public models{
	
	public:
		string mbrands(){
			
			cout<<"1.Apple (iPhone)"<<endl;
			cout<<"2.Samsung (Galaxy series)"<<endl;
			cout<<"3.Huawei"<<endl;
			cout<<"4.Xiaomi"<<endl;
			cout<<"5.OnePlus"<<endl;
			cout<<"6.Google (Pixel)"<<endl<<endl;
			cout<<"Which Brand Models You Want To Check : " ;
			int a;
			cin>>a;
			switch (a){
				case 1:
					cout<<m1(); 
					break;
			    case 2:
				    cout<<m2();
					break;
				case 3:
					cout<<m3(); 
					break;
			    case 4:
				    cout<<m4();
					break;
				case 5:
					cout<<m5(); 
					break;
			    case 6:
				    cout<<m6();
					break;	
				default:
				cout<<"choice Correct option ";			
								
					
			}
		}
		
};

// laptops class

class laptops : public models{
	
	public:
		
		string lapbrands(){
			cout<<"1.Apple (MacBook)"<<endl;
			cout<<"2.Dell (XPS, Inspiron, Latitude) "<<endl;
			cout<<"3.HP (Pavilion, Spectre, EliteBook) "<<endl;
			cout<<"4.Lenovo (ThinkPad, IdeaPad, Yoga) "<<endl;
			cout<<"5.Acer (Aspire, Predator, Swift) "<<endl;
			cout<<"6.Microsoft (Surface) "<<endl<<endl;
			cout<<"Which Brand Laptop You Want to buy : "; 
			int a;
			cin>>a;
			switch (a){
				case 1:
					cout<<lap1(); 
					break;
			    case 2:
				    cout<<lap2();
					break;
				case 3:
					cout<<lap3(); 
					break;
			    case 4:
				    cout<<lap4();
					break;
				case 5:
					cout<<lap5(); 
					break;
			    case 6:
				    cout<<lap6();
					break;	
				default:
				cout<<"choice Correct option ";			
								
					
			}
			
		}
			
};

// ipads class

class ipads:public models{
	
	public:
		string ibrands(){
	    cout<<"1.Apple (iPad) "<<endl;
	    cout<<"2.Samsung (Galaxy Tab series) "<<endl;
	    cout<<"3.Huawei (MatePad series) "<<endl;
		cout<<"4.Lenovo (Tab series) "<<endl;
	    cout<<"5.Google (Pixel Slate) "<<endl;
	    cout<<"6.Acer (Iconia series) "<<endl<<endl;
	    cout<<"Which Brand watches You Want to buy : "; 
			int a;
			cin>>a;
			switch (a){
				case 1:
					cout<<i1(); 
					break;
			    case 2:
				    cout<<i2();
					break;
				case 3:
					cout<<i3(); 
					break;
			    case 4:
				    cout<<i4();
					break;
				case 5:
					cout<<i5(); 
					break;
			    case 6:
				    cout<<i6();
					break;	
				default:
				cout<<"choice Correct option ";			
								
					
			}
		}
};

//smart watches class
class smart_watches:public models{
	
	public:
		string wbrands(){
		     
		     cout<<" "<<endl;
	    cout<<"1.Apple (Apple Watch) "<<endl;
	    cout<<"2.Samsung (Galaxy Watch) "<<endl;
		cout<<"3.Garmin (Forerunner, Fenix, Vivoactive) "<<endl;
	    cout<<"4.Fitbit (Versa, Charge, Ionic) "<<endl;
	    cout<<"5.Huawei (Watch GT, Watch Fit) "<<endl;
	    cout<<"6.Xiaomi (Mi Watch, Mi Band) "<<endl<<endl;
	    cout<<"Which Brand Models You Want To Check : ";
	    int a;
	    cin>>a;
	    switch(a){
	    	
	    	case 1:
	    		cout<<w1();
	    		break;
	    	case 2:
			    cout<<w2();
				break;
			case 3:
			    cout<<w3();
				break;
			case 4:
			    cout<<w4();
				break;
			case 5:
			    cout<<w5();
				break;
			case 6:
			    cout<<w6();
				break;
			default:
			    cout<<"choice the correct option";						
		}
		}
		
		
};
//selection class

class selection : private laptops,private ipads,private mobile,public smart_watches{
	
	public:
	void get(){
	 //string getnum;
	 int a;
	 cin>>a;
	// getline(cin,getnum);
	 if( a==1      /*getnum=="mobile phone" || getnum=="Mobile Phone" */){
	 	                 
						  cout<<mbrands();
						  
	 }else if(  a==2 /*getnum=="laptops" || getnum=="Laptops"*/){
	 	
	 	                  cout<<lapbrands();
	 	                  
	 }else if ( a==3/*getnum=="ipads" || getnum=="Ipads"*/){
	 	
	 	                  cout<<ibrands(); 
	 	                  
	 }else if( a==4/*getnum=="smart watches"|| getnum=="Smart Watches"*/){
	
	                        cout<<wbrands();
	 }
}

};




int main(){
	Product P;	
	selection S;
	S.get();
	customer_details obj;
	obj.get_details();

}
