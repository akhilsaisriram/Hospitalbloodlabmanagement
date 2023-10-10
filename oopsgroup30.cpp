#include <iostream>
#include <algorithm>
#include<windows.h>
#include<mysql.h>
#include <sstream>
#include<stdio.h>
#include <string>
#include <ctime>
#include<cstdlib>
#include<cstring>
#include<conio.h>
#include<time.h>
#include<cmath>

using namespace std;
char host[]="localhost";
char user[]="root";
char pass[]="@akhil@#$%9848";

char hostc[]="bogzrhh8bzxgyk1gpagw-mysql.services.clever-cloud.com";
char userc[]="ulbd2b4zbfs7h7nj";
char passc[]="pHG3g3uHRpZckFWVO7hF";


string phone_data(int id);
string test_data(int id);
int get_id();
void bill();
int get_id(string phno);
int month();
int year();
int day();
void attendnce();
void testdataclo(int id,string test);
void testdataclou(int id,string test);
int getNumberOfDays(int month, int year);

string phno1;
int data1;
string test;
char pasword[10]="123";
char pasword1[10]="456";
char pasword2[10]="789";
char pasword3[10]="123";


int maskings()
{char sp = '*';
    // Stores the password
    string passwd = "";
    char ch_ipt;
	int i=0;
	system("Color 0A");
 cout<<"enter the password:\n";
    // Until condition is true
    while (true) {
          
        ch_ipt = getch();

 
        // if the ch_ipt
        if (ch_ipt == 13) {
            cout << endl;
           break;
        }
        else if (ch_ipt == 8
                 && passwd.length() != 0) {
            passwd.pop_back();
 
            // Cout statement is very
            // important as it will erase
            // previously printed character
            cout << "\b \b";
 
            continue;
        }
 
        else if (ch_ipt == 8
                 && passwd.length() == 0) {
            continue;
        }
 
        passwd.push_back(ch_ipt);
        cout << sp;
    }
	if(passwd=="1234"){
		cout<<"\nsuccessful\n";
		return 1;
	}else{
		return 0;
	}
}

int maskings2()
{char sp = '*';
    // Stores the password
    string passwd = "";
    char ch_ipt;
	int i=0;
	system("Color 0A");
 cout<<"enter the password:\n";
    // Until condition is true
    while (true) {
          
        ch_ipt = getch();

 
        // if the ch_ipt
        if (ch_ipt == 13) {
            cout << endl;
           break;
        }
        else if (ch_ipt == 8
                 && passwd.length() != 0) {
            passwd.pop_back();
 
            // Cout statement is very
            // important as it will erase
            // previously printed character
            cout << "\b \b";
 
            continue;
        }
 
        else if (ch_ipt == 8
                 && passwd.length() == 0) {
            continue;
        }
 
        passwd.push_back(ch_ipt);
        cout << sp;
    }
	if(passwd=="456"){
		cout<<"\nsuccessful\n";
		cout<<"do you  want to take attendende for today if yes press 1 else 0 :";
		int l;cin>>l;if(l==1){
		attendnce();
		}
		return 1;
	}else{
		return 0;
	}
}

int masking(){
int j=strlen(pasword);
char pas[10];
char ch;
cout<<"enter password:\n";
	for(int i=0;i<j;i++){
		ch=getch();
		pas[i]=ch;
		ch='*';
		cout<<ch;

		if(ch!=13){
			cout<<"";

		}else if(ch!=8){
			cout<<"*";
		}

	}
	if(strcmp(pas,pasword)==0){
		cout<<"\nsuccessful\n";
		cout<<"do you  want to take attendende for today if yes press 1 else 0 :";
		int l;cin>>l;if(l==1){
		attendnce();
		}
			return 1;
	}
	return 0;
}


int masking1(){
int j=strlen(pasword1);
char pas[10];
char ch;
cout<<"enter password:\n";
	for(int i=0;i<j;i++){
		ch=getch();
		pas[i]=ch;
		ch='*';
		cout<<ch;

		if(ch!=13){
			cout<<"";

		}else if(ch!=8){
			cout<<"*";
		}

	}
	if(strcmp(pas,pasword1)==0){
		cout<<"\nsuccessful\n";
		cout<<"do you  want to take attendende for today if yes press 1 else 0 :";
		int l;cin>>l;if(l==1){
		attendnce();
		}
			return 1;
	}
	return 0;
}

int masking2(){
int j=strlen(pasword2);
char pas[10];
char ch;
cout<<"enter password:\n";
	for(int i=0;i<j;i++){
		ch=getch();
		pas[i]=ch;
		ch='*';
		cout<<ch;

		if(ch!=13){
			cout<<"";

		}else if(ch!=8){
			cout<<"*";
		}

	}
	if(strcmp(pas,pasword2)==0){
		cout<<"\nsuccessful\n";
	
			return 1;
	}
	return 0;
}


int masking3(){
int j=strlen(pasword3);
char pas[10];
char ch;
cout<<"enter password:\n";
	for(int i=0;i<j;i++){
		ch=getch();
		pas[i]=ch;
		ch='*';
		cout<<ch;

		if(ch!=13){
			cout<<"";

		}else if(ch!=8){
			cout<<"*";
		}

	}
	if(strcmp(pas,pasword3)==0){
		cout<<"\nsuccessful\n";
		cout<<"do you  want to take attendende for today if yes press 1 else 0 :";
		int l;cin>>l;if(l==1){
		attendnce();
		}
			return 1;
	}
	return 0;
}

int maskings3()
{char sp = '*';
    // Stores the password
    string passwd = "";
    char ch_ipt;
	int i=0;
	system("Color 0A");
 cout<<"enter the password:\n";
    // Until condition is true
    while (true) {
          
        ch_ipt = getch();

 
        // if the ch_ipt
        if (ch_ipt == 13) {
            cout << endl;
           break;
        }
        else if (ch_ipt == 8
                 && passwd.length() != 0) {
            passwd.pop_back();
 
            // Cout statement is very
            // important as it will erase
            // previously printed character
            cout << "\b \b";
 
            continue;
        }
 
        else if (ch_ipt == 8
                 && passwd.length() == 0) {
            continue;
        }
 
        passwd.push_back(ch_ipt);
        cout << sp;
    }
	if(passwd=="789"){
		cout<<"\nsuccessful\n";
		return 1;
	}else{
		return 0;
	}
}

int maskings1()
{char sp = '*';
    // Stores the password
    string passwd = "";
    char ch_ipt;
	int i=0;
	system("Color 0A");
 cout<<"enter the password:\n";
    // Until condition is true
    while (true) {
          
        ch_ipt = getch();

 
        // if the ch_ipt
        if (ch_ipt == 13) {
            cout << endl;
           break;
        }
        else if (ch_ipt == 8
                 && passwd.length() != 0) {
            passwd.pop_back();
 
            // Cout statement is very
            // important as it will erase
            // previously printed character
            cout << "\b \b";
 
            continue;
        }
 
        else if (ch_ipt == 8
                 && passwd.length() == 0) {
            continue;
        }
 
        passwd.push_back(ch_ipt);
        cout << sp;
    }
	if(passwd=="123"){
		cout<<"\nsuccessful\n";
		cout<<"do you  want to take attendende for today if yes press 1 else 0 :";
		int l;cin>>l;if(l==1){
		attendnce();
		}
		return 1;
	}else{
		return 0;
	}
}



string datep(){
// current date and time on the current system
   time_t now = time(0);

   // convert now to string form
   char* date_time = ctime(&now);

 return date_time;

}


class pd{
	protected:
		string name,phno,date,gen;
		int age;

		public:
			void getdata(){

			 cin.ignore(100,'\n');
       cout << "Enter the name of the person without space : ";
getline(cin,name);

       cout << "Enter the phone number of the person : ";
       cin >> phno;

       cout << "Enter age of the person: ";
       cin >> age;

       cout << "Enter gender of the person: ";
       cin >> gen;

      date =datep();
    


   }

    void getdata(int p){
    	cin.ignore(100,'\n');
        cout << "Enter the name of the person without space : ";
 getline(cin,name);

        cout << "Enter the phone number of the person : ";
        cin >> phno;

 	}




};
 class ins :public pd{
    public:

    insr(){
    	string dummy;
MYSQL* conn;
     MYSQL_ROW row;

     MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
     if(conn){
        int qstate = 0;
       int qstate1=0;

       getdata();
         int daya=day();
      int montha=month();
      int yeara=year();
       stringstream ss;
        ss << "INSERT INTO user(name, phonenumber,age,gender,test,day,month,year,date) VALUES('" << name << "','" << phno << "'," << age <<",'" << gen << "','0'," << daya<< "," << montha<< "," << yeara << ",'" << date << "')";

        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);

        stringstream ss1;
         ss1 << "select id FROM user  WHERE phonenumber = '" << phno << "' and name='"<<name<<"'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
         data1 = atoi ( row[0]);
		 phno1=phno;
        if(qstate == 0){
            cout << "Record Inserted..." << endl;
           
        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;
            
        }
    }else{
        cout << "Connection Error" << endl;
        cout << "Press B to go back";
        cin >> dummy;
    }


 }

};

class view{
	public:
 void viewa(){
    string dummy;
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = mysql_query(conn, "SELECT * FROM user");

        if(!qstate){
            res = mysql_store_result(conn);

            while(row = mysql_fetch_row(res)){
				cout << "id" <<"\t | \t" << "  name  " <<"\t   | \t" << "phonenumber" <<"\t | \t" << "age" <<"\t | \t" << "gender" <<"\t | \t" << "test" <<"\t | \t" << "date"<<endl << endl;
                cout << row[0] <<"\t | \t" << row[1] <<"\t | \t" << row[2] <<"\t | \t" << row[3] <<"\t | \t" << row[4] <<"\t | \t" << row[5] <<"\t | \t"<<row[9] <<endl << endl;
             }
        }
    }

    cout << "Press B to go back";
    cin >> dummy;


 }

  void viewa(string pno){
   string dummy;
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){

  stringstream ss;
        ss << "select * FROM user  WHERE phonenumber = '" << pno << "'";
 //ss << "select '" << te << "', '" << test << "'  FROM inventory  ";
        string query = ss.str();

        const char* q = query.c_str();
        int qstate = mysql_query(conn, q);
//int intdata1;
        if(!qstate){
            res = mysql_store_result(conn);

            while(row = mysql_fetch_row(res)){
              // intdata1 = atoi ( row[0]);
                cout << "id" <<"\t | \t" << "  name  " <<"\t   | \t" << "phonenumber" <<"\t | \t" << "age" <<"\t | \t" << "gender" <<"\t | \t" << "test" <<"\t | \t" << "date"<<endl << endl;
                cout << row[0] <<"\t | \t" << row[1] <<"\t | \t" << row[2] <<"\t | \t" << row[3] <<"\t | \t" << row[4] <<"\t | \t" << row[5] <<"\t | \t"<<row[9] <<endl << endl;
             }
        }
        if(qstate == 0){
            cout << "-----**........" << endl;
        }else{
            cout << " Error" << mysql_error(conn) << endl;
        }

}

  }

   void viewa(int id){
string dummy;
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){

  stringstream ss;
        ss << "select * FROM user  WHERE id = '" << id << "'";
 //ss << "select '" << te << "', '" << test << "'  FROM inventory  ";
        string query = ss.str();

        const char* q = query.c_str();
        int qstate = mysql_query(conn, q);
//int intdata1;
        if(!qstate){
            res = mysql_store_result(conn);

            while(row = mysql_fetch_row(res)){
              // intdata1 = atoi ( row[0]);
                cout << "id" <<"\t | \t" << "  name  " <<"\t   | \t" << "phonenumber" <<"\t | \t" << "age" <<"\t | \t" << "gender" <<"\t | \t" << "test" <<"\t | \t" << "date"<<endl << endl;
                cout << row[0] <<"\t | \t" << row[1] <<"\t | \t" << row[2] <<"\t | \t" << row[3] <<"\t | \t" << row[4] <<"\t | \t" << row[5] <<"\t | \t"<<row[9] <<endl << endl;
             }
        }
        if(qstate == 0){
            cout << "-----**........" << endl;
        }else{
            cout << " Error" << mysql_error(conn) << endl;
        }

}


  }

};


class update:public pd{
 public:
  void updatea(int id){

    string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = 0;
       string name,phn,gen,date;
        int age;
       cout << "Enter the new phone number of the person : ";
        cin >> phn;
 cin.ignore(100,'\n');
        cout << "Enter the new name of the person : ";
      getline(cin,name);


        cout << "Enter new age of the person: ";
        cin >> age;

        cout << "Enter gender of the person: ";
        cin >> gen;

        stringstream ss;
    ss << "UPDATE user SET name =  '" << name << "',phonenumber =  '" << phn << "', age='" << age << "',gender='" << gen << "' WHERE id = '" <<id << "'";



           //ss<<"update inventory set quantity="<< quanti<<"where name="sai" ";
        string query = ss.str();

        const char* q = query.c_str();
        qstate = mysql_query(conn, q);
        if(qstate == 0){
            cout << "Record Updated..." << endl;
            cout << "Press B to go back";
            cin >> dummy;
        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;
            cout << "Press B to go back";
            cin >> dummy;
        }
    }else{
        cout << "Connection Error" << endl;
        cout << "Press B to go back";
        cin >> dummy;
    }
 }

};

class del:public view{
    public:
    	void dela(){

	string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = 0;
        string pno;
        int quantity;
        stringstream ss;

        cout<<"do you want to delete all test results releted to the person u want to delete press 1 else 0 \n";
        int oi;cin>>oi;
        if(oi==1){
        	int sr=get_id();
        
        string te=test_data(sr);
    
        	for(int j=0;j<te.size();j++){
        		string b;
				b=te[j];
        		//--------

    string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = 0;
        string pno;
        int quantity;

        stringstream ss;
        ss << "DELETE FROM  " << b<< "  WHERE id = '" << sr << "'";

        string query = ss.str();

        const char* q = query.c_str();
        qstate = mysql_query(conn, q);

//---------------

    MYSQL* conn1;
    conn1 = mysql_init(0);
  
 conn1 = mysql_real_connect(conn1,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    if(conn){
        int qstate2 = 0;
    
        stringstream ss2;
     ss2 << "DELETE FROM  " << b<< "  WHERE id = '" << sr << "'";


           //ss<<"update inventory set quantity="<< quanti<<"where name="sai" ";
        string query2 = ss2.str();

        const char* q2 = query2.c_str();
        qstate2 = mysql_query(conn1, q2);
        if(qstate2 == 0){
            cout << "Record Updated..." << endl;
           
        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;
           
        }
    }


        	//-------
			}
        	//
		}//end of for
}
        cout << "Enter phonenumber of person you want to delete: ";
        cin >> pno;
      cout<<"do you want to see the persons with this phonenumber press 1 if yes or else 0 for to delete all data related to above typed  number:  ";
      int b;
      cin>>b;
      if(b==0){

        ss << "DELETE FROM user  WHERE phonenumber = '" << pno << "'";
        
	  }
      else{
     viewa(pno);
     int id;
    id=get_id(pno);

        ss << "DELETE FROM user  WHERE id='" << id << "' ";
     }
        string query = ss.str();

        const char* q = query.c_str();
        qstate = mysql_query(conn, q);
        if(qstate == 0){
            cout << "Record Updated..." << endl;
            cout << "Press B to go back";
            cin >> dummy;
        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;
            cout << "Press B to go back";
            cin >> dummy;
        }


    }


}




};

void view_test_names()
{
	
 string dummy;
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
 conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
 //   conn =  mysql_real_connect(conn,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    if(conn){
        int qstate = mysql_query(conn, "SELECT * FROM name");

        if(!qstate){
            res = mysql_store_result(conn);
	cout << "id" <<"\t | \t" << "  shortname  " <<"\t   | \t" << "testname" <<"\t | \t" << "price" <<endl << endl;
            while(row = mysql_fetch_row(res)){
			
                cout << row[0] <<"\t | \t" << row[1] <<"\t | \t" << row[2] <<"\t | \t" << row[3]  <<endl << endl;
             }
        }
    }

  

 }
 
 void bill(){
 	
 	cout<<"the tests availabl in out clinic are \n \n";
 	view_test_names();
 	int l=0;
 	cout<<"enter the test shortname without any space \n";
 	string tes;
 	cin>>tes;
 	
 	testdataclo(data1,tes);
 	
 	for(int i=0;i<tes.size();i++){
 		string o;
 		o=tes[i];
 		     int qstate4 = 0;
 		 MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn =  mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
 		
 		 stringstream ss4;
         ss4 << "select price FROM name  WHERE shortn = '" << o << "'" ;
         string query4 = ss4.str();

        const char* q4 = query4.c_str();
         qstate4 = mysql_query(conn, q4);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        int id  = atoi ( row[0]);
 		l=l+id;
 		
 		//====================
 		
 		  
        int qstate = 0;
      int qstate1=0;

       
       
      string date =datep();
       

       
        stringstream ss,ss2;
        ss << "INSERT INTO  " << o<< "(phonenumber,id,d1,d2,d3,d4,date) VALUES('" << phno1 << "','" << data1  << "','0','0','0','0','" << date << "')";


        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);


        ss2 << "UPDATE user SET test =  '" << tes << "' WHERE id = '" <<data1  << "' ";

        string query1 = ss2.str();
        const char* q1 = query1.c_str();
        qstate1 = mysql_query(conn, q1);
        if(qstate == 0){
            cout << "Record Inserted..." << endl;

        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;

        }
    }else{
        cout << "Connection Error" << endl;

    }
 		//====================
 		
 		
 		//===================
 		
 		//=========================
	 }
 	


cout<<"estimated price for the tests is :"<<l<<"\n";



	
}



int get_id(){

 string dummy;
    MYSQL* conn;
     MYSQL_ROW row;

     MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = 0;
        string name,gen,date;
        int age;
        string phno;
 int qstate1=0;
  cin.ignore(100,'\n');
        cout << "Enter the name of the person : ";
        getline(cin,name);

        cout << "Enter the phone number of the person : ";
        cin >> phno;
       stringstream ss1;
         ss1 << "select id FROM user  WHERE phonenumber = '" << phno << "' and name='"<<name<<"'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        int id  = atoi ( row[0]);
        return id;




}

}
int get_id(string phno){

 string dummy;
    MYSQL* conn;
     MYSQL_ROW row;

     MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = 0;
        string name,gen,date;
        int age;

 int qstate1=0;
  cin.ignore(100,'\n');
        cout << "Enter the name of the person : ";
        getline(cin,name);


        stringstream ss1;
         ss1 << "select id FROM user  WHERE phonenumber = '" << phno << "' and name='"<<name<<"'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        int id  = atoi ( row[0]);
        return id;




}

}



string test_data(int id){
string dummy;
    MYSQL* conn;
    MYSQL_ROW row;


     string pno;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
       int qstate1 = 0;

    stringstream ss1;
         ss1 << "select test FROM user  WHERE id = '" << id << "'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        string v = row[0];

return v;



}
}

string test_data_clo(int id){
string dummy;
    MYSQL* conn;
    MYSQL_ROW row;


     string pno;
    MYSQL_RES* res;
    conn = mysql_init(0);
   // conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
   conn = mysql_real_connect(conn,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    if(conn){
       int qstate1 = 0;

    stringstream ss1;
         ss1 << "select test FROM user  WHERE id = '" << id << "'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        string v = row[0];

return v;



}
}


string phone_data(int id){
string dummy;
    MYSQL* conn;
    MYSQL_ROW row;


     string pno;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
       int qstate1 = 0;

    stringstream ss1;
         ss1 << "select phonenumber FROM user  WHERE id = '" << id << "'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        string v = row[0];

return v;

}
}

string get_testfullname(string k){
	
	    MYSQL* conn;
    MYSQL_ROW row;


     string pno;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
       int qstate1 = 0;

    stringstream ss1;
         ss1 << "select name FROM name  WHERE shortn = '" << k << "'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        string va = row[0];

return va;
	
}
}

string get_testfullname_clo(string k){
	
	    MYSQL* conn;
    MYSQL_ROW row;


     string pno;
    MYSQL_RES* res;
    conn = mysql_init(0);
  conn = mysql_real_connect(conn,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    if(conn){
       int qstate1 = 0;

    stringstream ss1;
         ss1 << "select name FROM name  WHERE shortn = '" << k << "'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        string va = row[0];

return va;
	
}
}


string get_testunit(string k){
	
	    MYSQL* conn;
    MYSQL_ROW row;


     string pno;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
       int qstate1 = 0;

    stringstream ss1;
         ss1 << "select unit FROM name  WHERE shortn = '" << k << "'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        string va = row[0];

return va;
	
}
		
	
}

int get_testlower(string k){
	
	    MYSQL* conn;
    MYSQL_ROW row;


     string pno;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
       int qstate1 = 0;

    stringstream ss1;
         ss1 << "select lower FROM name  WHERE shortn = '" << k << "'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
       int va = atoi(row[0]);

return va;
	
}
		
	
}

int get_testupper(string k){
	
	    MYSQL* conn;
    MYSQL_ROW row;


     string pno;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
       int qstate1 = 0;

    stringstream ss1;
         ss1 << "select upper FROM name  WHERE shortn = '" << k << "'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        int va = atoi(row[0]);

return va;
	
}
		
	
}

void test_report(string k,int a){

//int a=get_id();
//string k=test_data(a);
 string dummy;
 int co=0;
 for(int i=0;i<k.size();i++){

    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    
string kk;
kk=k[i];
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){


    stringstream ss;
        ss << "select * FROM "<<kk<<"  WHERE id = '" << a << "'";
 //ss2 << "select name   FROM name WHERE id = '" << a << "' ";

        string query = ss.str();
       const char* q = query.c_str();
        int qstate = mysql_query(conn, q);
        


        if(!qstate){
            res = mysql_store_result(conn);
          
            while(row = mysql_fetch_row(res) ){
            	
            	string l=get_testfullname(kk);
            	string b=get_testunit(kk);
            cout<<"-------------------------------------------------------"<<l<<" test results"<<"----------------------------------------------------------\n";
                 cout << "phonenumber" <<"\t | \t" << "id" <<"\t   | \t" << "data1" <<"\t | \t" << "data2" <<"\t | \t" << "data3" <<"\t | \t" << "data4" <<"\t | \t" << "date"<<endl << endl;
                 cout << row[0] <<"\t|\t" << row[1] <<"\t | \t" << row[2] +b<<"\t | \t" << row[3] +b<<"\t | \t" << row[4]+b <<"\t | \t" << row[5] +b<<"\t | \t" << row[6] <<endl << endl;

               int av=(atoi(row[2])+atoi(row[3])+atoi(row[4])+atoi(row[5]))/4;
                cout<<" \nthe avarage value of the test results withrespect to previous is: :"<<av<<endl;
                int ll=get_testlower(kk);int u=get_testupper(kk);
                cout<<" \nthe range for the test "<<l<<" is "<<ll<<b<<" to "<<u<<b<<"\n";
                
                if(atoi(row[2])>ll&&atoi(row[2])<u){
                	cout<<" \nthe  present reports are normal range \n";
				}
				else if(atoi(row[2])<ll){
					
					cout<<" \nthe present test report are lower than  normal range "<<ll<<b<<"\n";
				}
				else if(atoi(row[2])>u){
					
					cout<<" \nthe present  test report are higher than  normal range "<<u<<b<<"\n";
				}

             }
        }



        if(qstate == 0){

        }else{
            //cout << " Error" << mysql_error(conn) << endl;
        }

}
}

   





}


void update_testinuser(string tes,int u){




 int mm=tes.size();
   string t;
    string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = 0;

        stringstream ss;
        string aa=test_data(u);
      
        if(aa=="0"){
        t=tes;
          }
           else{
          t=aa+tes;
             }

    ss << "UPDATE user SET test = '" << t << "' WHERE id = '" <<u  << "'";



           //ss<<"update inventory set quantity="<< quanti<<"where name="sai" ";
        string query = ss.str();

        const char* q = query.c_str();
        qstate = mysql_query(conn, q);

        for(int i=0;i<mm;i++){

 string o;
o=tes[i];

      int qstate1=0;
      string date =datep();
   string ph;
ph=phone_data(u);
        stringstream ss2;
		ss2<< "INSERT INTO  " << o<< "(phonenumber,id,d1,d2,d3,d4,date) VALUES('" << ph << "','" << u  << "','0','0','0','0','" << date << "')";
        //ss2 << "INSERT INTO  " << o<< "(phonenumber,date,id) VALUES('" << ph << "','" << date << "','" << u << "')";

        string query1 = ss2.str();
        const char* q1 = query1.c_str();
        qstate1 = mysql_query(conn, q1);


}

    }

//=====
testdataclou(u,t);
 //

}

void cloud_testup(string tes,int u){
//int a=get_id();
//	string s=test_data(a);
	string ph=phone_data(u);
	for(int i=0;i<tes.size();i++){
 
 string o;
o=tes[i];

//cout<<"enter other test n";
//string v;
//cin>>v;
//-------------------------------------
string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    if(conn){
        int qstate = 0;
      int qstate1=0;



      string date =datep();


        stringstream ss;
        ss << "INSERT INTO  " << o<< "(phonenumber,id,d1,d2,d3,d4) VALUES('" << ph << "','" << u  << "','1','1','1','1')";


        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);


        if(qstate == 0){
            cout << "Record Inserted..." << endl;

        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;

        }
    }else{
        cout << "Connection Error" << endl;

    }
    //------------------------

}

}

void cloud(){
	//int a=get_id();
	int a=data1;
	string s=test_data(a);
	string ph=phone_data(a);
	for(int i=0;i<s.size();i++){
 
 string o;
o=s[i];

//cout<<"enter other test n";
//string v;
//cin>>v;
//-------------------------------------
string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    if(conn){
        int qstate = 0;
      int qstate1=0;



      string date =datep();


        stringstream ss;
        ss << "INSERT INTO  " << o<< "(phonenumber,id,d1,d2,d3,d4) VALUES('" << ph << "','" << a  << "','1','1','1','1')";


        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);


        if(qstate == 0){
            cout << "Record Inserted in cloud sql..." << endl;

        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;

        }
    }else{
        cout << "Connection Error" << endl;

    }
    //------------------------

}

    
}




void cloud_retrive(string k,int a){
//	int a=get_id();
//string k=test_data(a);
 string dummy;

 for(int i=0;i<k.size();i++){

string kk;
kk=k[i];

    MYSQL* conn;
    MYSQL_ROW row;

    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    if(conn){


    stringstream ss;
        ss << "select * FROM "<<kk<<"  WHERE id = '" << a << "'";
 //ss << "select '" << te << "', '" << test << "'  FROM inventory  ";

        string query = ss.str();

        const char* q = query.c_str();
        int qstate = mysql_query(conn, q);

        if(!qstate){
            res = mysql_store_result(conn);
string l=get_testfullname(kk);
            while(row = mysql_fetch_row(res)){
           // cout<<"-------------------------------------------------------"<<l<<" test results"<<"----------------------------------------------------------\n";
                // cout << "phonenumber" <<"\t | \t" << "id" <<"\t   | \t" << "data1" <<"\t | \t" << "data2" <<"\t | \t" << "data3" <<"\t | \t" << "data4" <<endl << endl;
                // cout << row[0] <<"\t|\t" << row[1] <<"\t | \t" << row[2] <<"\t | \t" << row[3] <<"\t | \t" << row[4] <<"\t | \t" << row[5] <<endl << endl;
                  
               int av=(atoi(row[2])+atoi(row[3])+atoi(row[4])+atoi(row[5]))/4;
              //  cout<<"the avarage value of the test results withrespect to previous is: :"<<av<<endl;
                
                //-----------------------------------------------
                MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = 0;
      int qstate1=0;



      string date =datep();


        stringstream ss,ss2;
        ss << "UPDATE "<<k[i]<<" set d1='" << row[2] << "',d2='" << row[3] << "',d3='" << row[4] << "',d4='" << row[5] << "'  WHERE id = '" <<a  << "'";


        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);

}
//-------------------------------------------------------------------------------
             }
        }



        if(qstate == 0){

        }else{
            //cout << " Error" << mysql_error(conn) << endl;
        }

}
}	
	
}




void billafter(){

		     
		      	cloud();
			  
}
/// -----------------------------------------------------------------------------------------------

int  get_nameid(string sn){
string dummy;
    MYSQL* conn;
     MYSQL_ROW row;

     MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = 0;
      
 int qstate1=0;
  

        stringstream ss1;
         ss1 << "select id FROM name  WHERE shortn = '" << sn << "'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        int id  = atoi ( row[0]);
        return id;




}
	
	
	
}

void clo_ins(string phn,string sn,int pp){
	
	string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    if(conn){
        int qstate = 0;
      int qstate1=0;



      string date =datep();
int id=get_nameid(sn);

        stringstream ss;
        ss << "INSERT INTO  name (id,shortn,name,price) VALUES(" << id << ",'" << sn  << "','" << phn  << "'," << pp << ")";


        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);


        if(qstate == 0){
            cout << "Record Inserted..." << endl;

        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;

        }
    }else{
        cout << "Connection Error" << endl;

    }
    //------------------------
}
void add_test()
{
string phn;
 cin.ignore(100,'\n');
       cout << "Enter the new test name  : ";
        getline(cin ,phn);
    string sn;
       cout << "Enter the new test short name name  : ";
        cin >> sn;
		int pp;cout<<"enter the price :\n";cin>>pp; 
		
		string uni;
		int low,up;
		cout<<"enter the unit of the test :";cin>>uni;
		cout<<"enter the lower range of the test :";cin>>low;
		cout<<"enter the upper range of the test :";cin>>up;   
    string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = 0;
        int qstate1 = 0;
 

        stringstream ss,ss1;
    ss << "create table " << sn << "(phonenumber varchar(50),id int,d1 varchar(20),d2 varchar(20),d3 varchar(20),d4 varchar(20),date varchar(30) ) ;";
ss1<<"insert into name (shortn,name,price,unit,lower,upper) values ('" << sn << "','" << phn << "'," <<pp <<",'" << uni << "','" << low << "','" << up << "') ";



           //ss<<"update inventory set quantity="<< quanti<<"where name="sai" ";
        string query = ss.str();

        const char* q = query.c_str();
        qstate = mysql_query(conn, q);
        
          string query1 = ss1.str();
         const char* q1 = query1.c_str();
        qstate1 = mysql_query(conn, q1);
        if(qstate == 0){
            cout << "Record Updated..." << endl;
           
        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;
           
        }
    }




//=------------------------------------------


    MYSQL* conn1;
    conn1 = mysql_init(0);
 
 conn1 = mysql_real_connect(conn1,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    if(conn){
        int qstate2 = 0;
   int qstate3 = 0;
   int id= get_nameid(sn);
        stringstream ss2,ss3;
     ss2 << "create table " << sn << "(phonenumber varchar(50),id int,d1 varchar(20),d2 varchar(20),d3 varchar(20),d4 varchar(20)) ;";

           //ss<<"update inventory set quantity="<< quanti<<"where name="sai" ";
        string query2 = ss2.str();
        const char* q2 = query2.c_str();
        qstate2 = mysql_query(conn1, q2);
        
        
        if(qstate2== 0){
            cout << "Record Updated..." << endl;
           
        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;
           
        }
    }

//=---------------------------------------------
else{
        cout << "Connection Error" << endl;
        cout << "Press B to go back";
        cin >> dummy;
    }
     clo_ins( phn,sn,pp);
 }


void testdataclou(int id,string test){
	
	string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    if(conn){
        int qstate = 0;
      int qstate1=0;



      string date =datep();


        stringstream ss;
        ss << "UPDATE user SET test='" << test<< "'where id='" <<id<< "'";


        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);


        if(qstate == 0){
            cout << "Record Inserted in cloud sql..." << endl;

        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;

        }
    }else{
        cout << "Connection Error" << endl;

    }
    //------------------------

}

    
	
void testdataclo(int id,string test){
	
	string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    if(conn){
        int qstate = 0;
      int qstate1=0;



      string date =datep();


        stringstream ss;
        ss <<"INSERT INTO  user (id,test) VALUES('" << id << "','" << test  << "')";


        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);


        if(qstate == 0){
            cout << "Record Inserted in cloud sql..." << endl;

        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;

        }
    }else{
        cout << "Connection Error" << endl;

    }
    //------------------------

}

    	

void lab(){
	

		string dummy;
		cout<<"enter the id :";int sd;cin>>sd;
    	string t;
   t=test_data_clo(sd);
    	//t=test_data(sd);
    	string kk;
    	for(int i=0;i<t.size();i++){
     kk=t[i];
		  MYSQL_ROW row;

    MYSQL_RES* res;	
		
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    //conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
    	
        stringstream ss;
        ss << "select d1,d2,d3,d4 FROM "<<t[i]<<"  WHERE id = '" << sd << "'";
 //ss << "select '" << te << "', '" << test << "'  FROM inventory  ";

        string query = ss.str();

        const char* q = query.c_str();
        int qstate = mysql_query(conn, q);

        if(!qstate){
            res = mysql_store_result(conn);

            while(row = mysql_fetch_row(res)){
            	string l=get_testfullname(kk);
            cout<<"-------------------------------------------------------"<<"for the"<<" test "<<l<<" enter the value"<<"----------------------------------------------------------\n";
            
            	cout<<"enter the value of test result without units the tests are in the order of the tests given:\n";
	string tt;cin>>tt;
                // cout << row[0] <<"\t|\t" << row[1] <<"\t | \t" << row[2] <<"\t | \t" << row[3] <<"\t | \t" << row[4]<<endl << endl;
            // int d1=atoi(row[0]);int d2=atoi(row[1]);int d3=atoi(row[2]);int d4=atoi(row30]);
             //int arr[3];arr[0]=d1;arr[1]=d2;arr[2]=d3;arr[3]=d4;
            
                	
	string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
      //conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = 0;
      int qstate1=0;





        stringstream ss;
        ss << "update  "<<t[i]<<" set d1 ='" << tt << "',d2='" << row[0]  << "',d3='" << row[1]  << "',d4='" <<row[2] << "' where id='"<<sd<<"'";


        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);


               
             }
        }



        if(qstate == 0){

        }else{
            //cout << " Error" << mysql_error(conn) << endl;
        }
	
	
	}
	
}
	
}
}


void labharddrive(){
	

		string dummy;
		cout<<"enter the id :";int sd;cin>>sd;
    	string t;
   //t=test_data_clo(sd);
    	t=test_data(sd);
    	string kk;
    	for(int i=0;i<t.size();i++){
     kk=t[i];
		  MYSQL_ROW row;

    MYSQL_RES* res;	
		
    MYSQL* conn;
    conn = mysql_init(0);
    //conn = mysql_real_connect(conn,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
    	
        stringstream ss;
        ss << "select d1,d2,d3,d4 FROM "<<t[i]<<"  WHERE id = '" << sd << "'";
 //ss << "select '" << te << "', '" << test << "'  FROM inventory  ";

        string query = ss.str();

        const char* q = query.c_str();
        int qstate = mysql_query(conn, q);

        if(!qstate){
            res = mysql_store_result(conn);

            while(row = mysql_fetch_row(res)){
            	string l=get_testfullname(kk);
            cout<<"-------------------------------------------------------"<<"for the"<<" test "<<l<<" enter the value"<<"----------------------------------------------------------\n";
            
            	cout<<"enter the value of test result without units the tests are in the order of the tests given:\n";
	string tt;cin>>tt;
                // cout << row[0] <<"\t|\t" << row[1] <<"\t | \t" << row[2] <<"\t | \t" << row[3] <<"\t | \t" << row[4]<<endl << endl;
            // int d1=atoi(row[0]);int d2=atoi(row[1]);int d3=atoi(row[2]);int d4=atoi(row30]);
             //int arr[3];arr[0]=d1;arr[1]=d2;arr[2]=d3;arr[3]=d4;
            
                	
	string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    //conn = mysql_real_connect(conn,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = 0;
      int qstate1=0;





        stringstream ss;
        ss << "update  "<<t[i]<<" set d1 ='" << tt << "',d2='" << row[0]  << "',d3='" << row[1]  << "',d4='" <<row[2] << "' where id='"<<sd<<"'";


        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);


               
             }
        }



        if(qstate == 0){

        }else{
            //cout << " Error" << mysql_error(conn) << endl;
        }
	
	
	}
	
}
	
}
}


//==========================------owner module==========================================================================================================

int month(){
	 time_t t = time(NULL);
 tm* tPtr = localtime(&t);
  return (tPtr->tm_mon)+1;
}

int year(){
 time_t t = time(NULL);
 tm* tPtr = localtime(&t); 
 return (tPtr->tm_year)+1900;	
}

int day(){
	time_t t = time(NULL);
 tm* tPtr = localtime(&t); 
 return (tPtr->tm_mday);	
}


int cal_test_val(string tes){

 
 	int l=0;
 
 	for(int i=0;i<tes.size();i++){
 		string o;
 		o=tes[i];
 		     int qstate1 = 0;
 		 MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn =  mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
 		
 		 stringstream ss1;
         ss1 << "select price FROM name  WHERE shortn = '" << o << "'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        int id  = atoi ( row[0]);
 		l=l+id;
	 }
 	
}
	
return l;	
}

void insemp(){
		string dummy;
MYSQL* conn;
     MYSQL_ROW row;

     MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
     if(conn){
        

string name,phno,gen,datea,loc,pos;string age;

			 cin.ignore(100,'\n');
       cout << "Enter the name of the emplyee  : ";
getline(cin,name);

       cout << "Enter the phone number of the person : ";
       cin >> phno;

 cin.ignore(100,'\n');
       cout << "Enter location of the person: ";
       getline(cin,loc);
       
 cout << "Enter gender of the person: ";
       cin >> gen;
      datea =datep();
      
       cout << "Enter date of birth of the person in dd/mm/yyyy format without space: ";
       cin >> age;
cin.ignore(100,'\n');
       cout << "Enter position of the person: ";
       getline(cin,pos);
       
      
       int qstate = 0;
       int qstate1=0;

    
       stringstream ss;
        ss << "INSERT INTO emp(name, pno,position,dateofjoin,loc,dob,gender) VALUES('" << name << "','" << phno << "','" << pos <<"','" << datea << "','" << loc<< "','" << age<< "','" << gen << "')";

        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);

        
        if(qstate == 0){
            cout << "Record Inserted..." << endl;
          
        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;
           
        }
    }else{
        cout << "Connection Error" << endl;
    }
	
	
}

int get_id_emp(){

 string dummy;
    MYSQL* conn;
     MYSQL_ROW row;

     MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = 0;
        string name;
       
        string phno;
 int qstate1=0;
  cin.ignore(100,'\n');
        cout << "Enter the name of the emplyee: ";
        getline(cin,name);

        cout << "Enter the phone number of the employee : ";
        cin >> phno;
       stringstream ss1;
         ss1 << "select id FROM emp  WHERE pno = '" << phno << "' and name='"<<name<<"'";
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        int id  = atoi ( row[0]);
        return id;




}

}
void edit_emp(int id){
	
    string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = 0;
      string name,phno,gen,datea,loc,pos;string age;

			 cin.ignore(100,'\n');
       cout << "Enter the new name of the emplyee  : ";
getline(cin,name);

       cout << "Enter the new phone number of the person : ";
       cin >> phno;

 cin.ignore(100,'\n');
       cout << "Enter new location of the person: ";
       getline(cin,loc);
       
 cout << "Enter gender of the person: ";
       cin >> gen;
      datea =datep();
      
       cout << "Enter new date of birth of the person in dd/mm/yyyy: ";
       cin >> age;
cin.ignore(100,'\n');
       cout << "Enter new position of the person: ";
       getline(cin,pos);
       
      
       

    
        

        stringstream ss;
    ss << "UPDATE emp SET name =  '" << name << "',pno =  '" << phno << "', loc='" << loc << "',gender='" << gen << "',dob='" << age << "' ,position='" << pos << "' WHERE id = '" <<id << "'";



           //ss<<"update inventory set quantity="<< quanti<<"where name="sai" ";
        string query = ss.str();

        const char* q = query.c_str();
        qstate = mysql_query(conn, q);
        if(qstate == 0){
            cout << "Record Updated..." << endl;
           
        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;
            
        }
    }else{
        cout << "Connection Error" << endl;
        
    }
 }

void del_emp(int id){
	string dummy;
MYSQL* conn;
     MYSQL_ROW row;

     MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
     if(conn){
        int qstate = 0;
       int qstate1=0;

    
       stringstream ss;
       ss << "DELETE FROM emp  WHERE id= '" << id << "'";
        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);

        
        if(qstate == 0){
            cout << "Record deleted..." << endl;
          
        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;
           
        }
    }else{
        cout << "Connection Error" << endl;
    }
	
}
	
void view_emp(){
	
 string dummy;
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = mysql_query(conn, "SELECT * FROM emp");

        if(!qstate){
            res = mysql_store_result(conn);
cout << "id" <<"\t | \t" << "  name  " <<"\t   | \t" << "phonenumber" <<"\t | \t" << "position" <<"\t | \t" << "location" <<"\t | \t" << "dateofbirth" <<"\t | \t" << "gender"<<"\t | \t" << "date of join "<<endl << endl;
            while(row = mysql_fetch_row(res)){
				
                cout << row[0] <<"\t | \t" << row[1] <<"\t | \t" << row[2] <<"\t | \t" << row[3] <<"\t | \t" << row[4] <<"\t | \t" << row[5] <<"\t | \t"<<row[6] <<"\t |"<<row[7] <<endl << endl;
             }
        }
    }

}

void view_emp(int id){
	 MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){

  stringstream ss;
        ss << "select * FROM emp  WHERE id = '" << id << "'";
 //ss << "select '" << te << "', '" << test << "'  FROM inventory  ";
        string query = ss.str();

        const char* q = query.c_str();
        int qstate = mysql_query(conn, q);
//int intdata1;
        if(!qstate){
            res = mysql_store_result(conn);

            while(row = mysql_fetch_row(res)){
              // intdata1 = atoi ( row[0]);
                cout << "id" <<"\t | \t" << "  name  " <<"\t   | \t" << "phonenumber" <<"\t | \t" << "position" <<"\t | \t" << "location" <<"\t | \t" << "dateofbirth" <<"\t | \t" << "gender"<<"\t | \t" << "date of join "<<endl << endl;
                cout << row[0] <<"\t | \t" << row[1] <<"\t | \t" << row[2] <<"\t | \t" << row[3] <<"\t | \t" << row[4] <<"\t | \t" << row[5] <<"\t | \t"<<row[6] <<"\t |"<<row[7] <<endl << endl;
             }
        }
        if(qstate == 0){
            cout << "-----**........" << endl;
        }else{
            cout << " Error" << mysql_error(conn) << endl;
        }

}


  }

void attendnce(){
	
	cout<<"enter the day and month and year seperately \n";
	int d,m,y;
	int co=0;
	cin>>d;cin>>m;cin>>y;
	int d1=day();int m1=month();int y1=year();
	if(d1==d&&m==m1&&y==y1){
		cout<<"enter the id";int kk;cin>>kk;
	
      MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
     if(conn){
     	  int qstate = 0;
      int dd=day();int mm=month();int yy=year();
       stringstream ss;
        ss << "INSERT INTO atten(id, att,d,m,y) VALUES(" << kk << ",1," << dd <<"," << mm << "," << yy<< ")";

        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);
        cout<<"attendence taken \n";
     	
	}
	}
	
	
}	

float seeatten(int id){
	float p=0;
//	int id=get_id_emp();
 cout<<"enter the month(number) and year(number) you want see attendence percentage of person :";int ms;cin>>ms;int ys;cin>>ys;
      MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
     if(conn){
	 
  stringstream ss;
        ss << "select DISTINCT att,d,m,y FROM atten  WHERE id = '" << id << "' and m='" << ms << "' and y='" << ys << "' ";

        string query = ss.str();

        const char* q = query.c_str();
        int qstate = mysql_query(conn, q);
        if(!qstate){
            res = mysql_store_result(conn);
cout<<" \n the attendece of the person you entered above \n";
            while(row = mysql_fetch_row(res)){
              // intdata1 = atoi ( row[0]);
                
                cout << row[0] <<"\t | \t" << row[1] <<"\t | \t" << row[2] <<"\t | \t" << row[3] <<endl << endl;
              float ad=atoi(row[0]);
              p=p+ad;
             }
        }
	 
	 
	 }
	 	int d;
	d=getNumberOfDays(ms,ys);
	float pp;
	pp=p/d;
	cout<<"the attendence percentage  of the person is  :"<<pp*100<<"%"<<endl;
	return pp*100;
}
int getNumberOfDays(int month, int year)
{
	//leap year condition, if month is 2
	if( month == 2)
	{
		if((year%400==0) || (year%4==0 && year%100!=0))	
			return 29;
		else	
			return 28;
	}
	//months which has 31 days
	
	
	else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8||month == 10 || month==12){
		if(month ==1||month==7){
			return 31-5;
		}
	return 31-4;	
	}	
		
	else {
		if(month ==4||month==10){
		return 30-5;	
		}
		
		return 30-4;
		
	}		
		
} 

float seeatten(int id,int ms,int ys){
	float p=0;
//	int id=get_id_emp();
      MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
     if(conn){
	  //cout<<"enter the month(number) and year(number) you want see attendence percentage of person :";int ms;cin>>ms;int ys;cin>>ys;
  stringstream ss;
        ss << "select DISTINCT att,d,m,y FROM atten  WHERE id = '" << id << "' and m='" << ms << "' and y='" << ys << "' ";

        string query = ss.str();

        const char* q = query.c_str();
        int qstate = mysql_query(conn, q);
        if(!qstate){
            res = mysql_store_result(conn);

            while(row = mysql_fetch_row(res)){
              // intdata1 = atoi ( row[0]);
                
                //cout << row[0] <<"\t | \t" << row[1] <<"\t | \t" << row[2] <<"\t | \t" << row[3] <<endl << endl;
              float ad=atoi(row[0]);
              p=p+ad;
             }
        }
	 
	 
	 }
	int d;
	d=getNumberOfDays(ms,ys);
	float pp;
	pp=p/d;

	return pp*100;
}


int profit(int a,int s){
//	cout<<"enter the month and year to find total amount produced during that month and year";
	//int a,s;cin>>a;cin>>s;//a month s year;
	
	int p=0;
	 MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){

  stringstream ss;
        ss << "select test FROM user  WHERE month = " << a << " and year = " << s << " ";
 //ss << "select '" << te << "', '" << test << "'  FROM inventory  ";
        string query = ss.str();

        const char* q = query.c_str();
        int qstate = mysql_query(conn, q);

        if(!qstate){
            res = mysql_store_result(conn);

            while(row = mysql_fetch_row(res)){
            string tes;
            tes=row[0];
            p=p+cal_test_val(tes);
               
             }
        }
        
        
        if(qstate != 0){
            cout << " Error" << mysql_error(conn) << endl;
        }
}
cout<<"the total amount collected in the month and year you given is : "<<p<<"\n";

return p;

}


string getpos(int id){
	 MYSQL* conn;
    MYSQL_ROW row;


     string pno;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
       int qstate1 = 0;

    stringstream ss1;
         ss1 << "select position FROM emp  WHERE id = '" << id << "'" ;
         string query1 = ss1.str();

        const char* q1 = query1.c_str();
         qstate1 = mysql_query(conn, q1);
         res = mysql_store_result(conn);
         row = mysql_fetch_row(res);
        string va = row[0];

return va;
	
}
		
}


void revenue(){
		cout<<"enter the month and year to find total amount produced during that month and year";
	int a,s;cin>>a;cin>>s;//a month s year;
int tp=0;
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
        int qstate = mysql_query(conn, "SELECT * FROM emp");

        if(!qstate){
            res = mysql_store_result(conn);

            while(row = mysql_fetch_row(res)){
			int id=	atoi ( row[0]);
			float ps=seeatten(id,a,s);
			string ss=getpos(id);
			if(ps>85.0){
				if(ss=="lab"){
					tp=tp+3000;
				}
				else{
				tp=tp+2000;	
				}
				
			}
			else if(ps>75&&ps<=85){
				if(ss=="lab"){
					tp=tp+2500;
				}
				else{
				tp=tp+1500;	
				}
			}
			else if(ps>65&&ps<=75){
				if(ss=="lab"){
					tp=tp+2000;
				}
				else{
				tp=tp+1000;	
				}
			}
			else if(ps>45&&ps<=65){
				if(ss=="lab"){
					tp=tp+1500;
				}
				else{
				tp=tp+1000;	
				}
			}
		else if(ps<=45){
		
				if(ss=="lab"){
					tp=tp+1000;
				}
				else{
				tp=tp+500;	
				}
			
		}	
               
             }
        }
        
    }
//
int pk=profit(a,s);
int to=pk-tp;

cout<<"the profit  after cuting  salary  of all employees "<< tp << " is :"<<to<<endl;
	
	
}

void edit_test_price(){
	cout<<"do you want to see tests available with prices  press 1 \n";int j=0;cin>>j;if(j==1){
		view_test_names();
	}
	cout<<"enter the short name for the test you want to edit its price \n";
	string sn;cin>>sn;
	cout<<"enter the new price for the test \n";int pc;cin>>pc;
	 string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
    if(conn){
	int qstate=0;
        stringstream ss;
    ss << "UPDATE name SET price =  '" << pc << "' WHERE shortn = '" <<sn << "'";
           //ss<<"update inventory set quantity="<< quanti<<"where name="sai" ";
        string query = ss.str();

        const char* q = query.c_str();
        qstate = mysql_query(conn, q);
        if(qstate == 0){
            cout << "Record Updated..." << endl;
           
        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;
            
        }
    }else{
        cout << "Connection Error" << endl;
        
    }
	
	//============
	MYSQL* conn1;
    conn1 = mysql_init(0);
   conn1 = mysql_real_connect(conn1,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    if(conn){
	int qstate3=0;
        stringstream ss3;
    ss3 << "UPDATE name SET price =  '" << pc << "' WHERE shortn = '" <<sn << "'";
           //ss<<"update inventory set quantity="<< quanti<<"where name="sai" ";
        string query3 = ss3.str();

        const char* q3 = query3.c_str();
        qstate3 = mysql_query(conn1, q3);
        if(qstate3 == 0){
            cout << "Record Updated..." << endl;
           
        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;
            
        }
    }
	//=====
	}
	
void del_test(){
	
	cout<<"do you want to see tests available   press 1 \n";int j=0;cin>>j;if(j==1){
		view_test_names();
	}
	cout<<"enter the short name for the test you want to delete \n";
	string sn;cin>>sn;
	
	string dummy;
MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,host,user,pass,"oop",3306,NULL,0);
     if(conn){
        int qstate = 0;
       int qstate1=0;

    
       stringstream ss,ss1;
       ss << "DELETE FROM name  WHERE shortn= '" << sn<< "'";
       
       ss1 << "DROP TABLE  " << sn<< " ";
       
        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);

string query1 = ss1.str();
        const char* q1 = query1.c_str();
        qstate1 = mysql_query(conn, q1);

        
        if(qstate1 == 0){
            cout << "Record deleted..." << endl;
          
        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;
           
        }
    }else{
        cout << "Connection Error" << endl;
    }
	
	
//------

    MYSQL* conn1;
    conn1 = mysql_init(0);
 
 conn1 = mysql_real_connect(conn1,hostc,userc,passc,"bogzrhh8bzxgyk1gpagw",3306,NULL,0);
    if(conn){
        
   int qstate3 = 0;
   int qstate4 = 0;
        stringstream ss3,ss4;
     ss3 << "DROP TABLE  " << sn<< "; ";
ss4 << "DELETE FROM name  WHERE shortn= '" << sn<< "'";
           //ss<<"update inventory set quantity="<< quanti<<"where name="sai" ";
        string query3 = ss3.str();
        const char* q3 = query3.c_str();
        qstate3 = mysql_query(conn1, q3);
        
        string query4 = ss4.str();
        const char* q4 = query4.c_str();
        qstate4 = mysql_query(conn1, q4);
        if(qstate4== 0){
            cout << "Record Updated..." << endl;
           
        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;
           
        }
    }

//====	
}
		


//=========================================================================================================================================

//===========================================================================---------------------------------------------------------------

//===========-----------------------------------------===========================================================================================

int recepion(){
	
	cout<<"\t\t\t----------------------------------------------\n";
     cout<<"\t\t\t\tclinical blood test management SYSTEM \n";
     cout<<"\t\t\t\t       Receptionist module: \n";
    cout<<"\n\t five attemts only after that terminal will closes \n";
      // int k1=0;
//     int k=masking3();
//     while(k<1){k=masking3();
//     k1++;
//     if(k1>3){
//      cout<<"the data base will crash try after some time\n";
//      return -1;
//     }
//         }
int k1=0;
     int k=maskings1();
     while(k<1){k=maskings1();
     k1++;
     if(k1>1){ system("Color 04");
     	cout<<"the data base will crash try after some time\n";
     	return -1;
	 }}


     int runforever = 1;
     int ans;


ins a;
view m;
del e;
update s;
	while(runforever == 1){

        cout << endl << endl << "---------------" << endl << endl << "1. the person is new (add data)" << endl << "2. if the preson is not new ( Edit the user data )" << endl << "3.  enter the tests ,bill or modify test ;" << endl << "4.test_report()" << endl << "5. view contact(view user data)"<<endl << "6. view tests available \n" <<  "7. end" <<endl << endl << "---------------" << endl;

        cout << endl << "Your Answer : ";

        cin >> ans;

        switch(ans){
        case 1:
           a.insr();
            break;
        case 2:
        cout<<"do u want to edit any data by seeing previous data press 1 else 0:\n";
        int u;
        cin>>u;
        if(u==1){
        string l;
        cout<<"enter the phonenumber to view data related to this phonenumber ";
        cin>>l;
		m.viewa(l);

		int v=get_id(l);
         s.updatea(v);

		}
		else{

         int c=get_id();
		s.updatea(c);
		}

            break;

        case 3:
        	{
			
		cout<<"if u are follwing sequential protocal of billing  to go bill press 1 else  0 for to update or add tests \n:";
		int mm;
		cin>>mm;
		if(mm==1){
			
			
           bill();
           billafter();
		}
		else{
			int u=get_id();
			 cout<<"\n enter the test names without any space between them  or tests want to add \n";
            string tes;
            cin>>tes;
			 update_testinuser(tes,u);
			 cloud_testup(tes,u);
			 
       
		}
}
        break;
        case 4:
        	{
			
        		int aa=get_id();
                 string ka=test_data(aa);
        cout<<"do u want see test based on cloud press 1  if use cloud in lab module else if you press 1 harddrive data is over writen by cloud database \n";
        	int f;cin>>f;
        	if(f==1){
        		cout<<"you are seeing cloud data base if 1's present in tests test report is not updated by lab technicain \n ";
        		cloud_retrive(ka,aa);
			}
        		
			
			cout<<"you are seeing hard disk database \n";
      test_report(ka,aa);
  }
            break;
             case 5:
             	{
				
             cout<<"press 1 if you want to view full user database"<<"\n"<<"press 2 if you want to view all users with same phonenumber \n"<<"press 3 if you want to view perticular person in database \n";
			 int r;
			 cin>>r;
			 switch(r)
			 {
			 case 1:
			 //view w;
			 m.viewa();
				break;
			 case 2:{
              cout<<"enter the phonenumber";
			 string phh;
			 cin>>phh;
			 //view ww(phh);
			 m.viewa(phh);
			 }

			 break;
			 case 3:
			 int qw=get_id();
			 //view www(qw);
			 m.viewa(qw);
			 break;
			 }
}
            break;
            
             case 6:
        view_test_names();
       
            break;
          case 7:
        runforever = 0;
       
            break;



        }
    }
	
	
}


int labmodule(){
	
	cout<<"\t\t\t----------------------------------------------\n";
     cout<<"\t\t\t\tclinical blood test management SYSTEM \n";
      cout<<"\t\t\t\t     Lab Technician module: \n";
      cout<<"\n\t five attemts only after that terminal will closes \n";
//       int k1=0;
//     int k=masking1();
//     while(k<1){k=masking1();
//     k1++;
//     if(k1>3){
//      cout<<"the data base will crash try after some time\n";
//      return -1;
//     }
//         }

int k1=0;
     int k=maskings2();
     while(k<1){k=maskings2();
     k1++;
     if(k1>1){ system("Color 04");
     	cout<<"the data base will crash try after some time\n";
     	return -1;
	 }}


     int runforever = 1;
     int ans;
	while(runforever == 1){

        cout << endl << endl << "---------------" << endl << endl << "1. to enter the lab result " << endl << "2. end "  << endl << endl << "---------------" << endl;

        cout << endl << "Your Answer : ";

        cin >> ans;

        switch(ans){
        case 1:
        	cout<<"want to use harddrive press 1 \n";
			int jj;cin>>jj;if(jj==1){
        	labharddrive();	
			}
			else{
				lab();
			}
        	
           break;
             case 2:
        runforever = 0;
       
            break;



        }
    }
	
	
	
}


int owner(){
		cout<<"\t\t\t----------------------------------------------\n";
     cout<<"\t\t\t\tclinical blood test management SYSTEM \n";
      cout<<"\t\t\t\t        Owner module: \n";
     cout<<"\n\t five attemts only after that terminal will closes \n";
//       int k1=0;
//     int k=masking2();
//     while(k<1){k=masking2();
//     k1++;
//     if(k1>3){
//      cout<<"the data base will crash try after some time\n";
//      return -1;
//     }
//         }
int k1=0;
     int k=maskings3();
     while(k<1){k=maskings3();
     k1++;
     if(k1>1){ system("Color 04");
     	cout<<"the data base crashed try after some time\n";
     	return -1;
	 }}



     int runforever = 1;
     int ans;
	while(runforever == 1){

        cout << endl << endl << "---------------" << endl << endl << "1. adding employee data into database (add data)" << endl << "2. to edit informtion about the employee ( Edit the employee data in databse )" << endl << "3.suspending the employee(to delete the employee data in database9) ;" << endl << "4.attendence of the employee in percentage and see dates" << endl << "5. view employee information(view user data)"<<endl << "6. add a new test to the clinic "<<endl<<"7 .delete a test \n" <<"8 .edit the price of the test  \n"<<"9.revenue and profit \n"<<"10.end\n" << endl << endl << "---------------" << endl;

        cout << endl << "Your Answer : ";

        cin >> ans;

        switch(ans){
        case 1:
          insemp();
            break;
        case 2:
        cout<<"do u want to edit any data by seeing emplyees data press 1 else 0:\n";
        int u;
        cin>>u;
        if(u==1){
        	
        	view_emp();
        int l;
        cout<<"enter the id of the person to edit";
        cin>>l;
	edit_emp(l);

		}
		else{

         int c=get_id_emp();
         
			edit_emp(c);
		}

            break;

        case 3:
	cout<<"do u want to delete  data by seeing emplyees data press 1 else 0:\n";
        int ua;
        cin>>ua;
        if(ua==1){
        	
        	view_emp();
        int l;
        cout<<"enter the id of the person to delete from databse :";
        cin>>l;
	del_emp(l);

		}
		else{

         int c=get_id_emp();
			del_emp(c);
		}

        
        break;
        case 4:
        	{
			
        int ca=get_id_emp();	
        	seeatten(ca);
        }
            break;
             case 5:
             	{
				
             cout<<"press 1 if you want to view full employee database"<<"\n"<<"press 2 if you want to view perticular employee in database \n";
			 int r;
			 cin>>r;
			 switch(r)
			 {
			 case 1:
			 view_emp();
				break;
			 case 2:{
              int cw=get_id_emp();
			view_emp(cw);
			 }

			 break;
			
            }
}
            break;
            
             case 6:
             cout<<"do you want to see all tests available in clinic press 1 :";int df;cin>>df;if(df==1){
             		view_test_names();
			 }	
             add_test();	
       
            break;
            case 7:
             	
             del_test();	
       
            break;
            case 8:
            
             edit_test_price();	
       
            break;
            
             case 9:
             	
            revenue();	
       
            break;
            case 10:
             	
             runforever = 0;	
       
            break;



        }
    }
	
	
	
	
}

void cll(){
	recepion();
}
int main(){
  
  //recepion();
  cout<<"\t\t\t-------------------Welcome to ---------------------------\n";
     cout<<"\t\t\t\tOOPS Clinical blood test laboratory \n";
     
     int runforever = 1;
int k1=0;
     int k=maskings();
     while(k<1){k=maskings();
     k1++;
     if(k1>1){ system("Color 04");
     	cout<<"the terminal will crash try after some time\n";
     	return -1;
	 }}
     int ans;
	while(runforever == 1){

     //cout<<"enter 1 for to enter into reception module \n"<<"enter 2 for to enter into Lab Technician module:\n"<<"enter 3 for to enter into Owner module:\n"
cout << endl << endl << "---------------" << endl << endl << "enter 1 for to enter into reception module \n"<<"enter 2 for to enter into Lab Technician module:\n"<<"enter 3 for to enter into Owner module:\n"<<"enter 4 to end \n" << endl << endl << "---------------" << endl;

 cout << endl << "Your Answer : ";

        cin >> ans;

        
if(ans==3){
owner();
}
if(ans==2){
labmodule();	
}
if(ans==1){
cll();	
}
if(ans==4){
    runforever = 0;	
}


    

}
return 0;
}