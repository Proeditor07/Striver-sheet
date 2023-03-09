#include<iostream>
using namespace std;

// Functions------------------------------------------->

int add(int a, int b){
    int c;
    c = a+b;
    return c;
}

// classes ---------------------------------------->

class Employee{
    public:
    string name;
    int salary;

    Employee(string n, int s,int sp){
        this->name = n;
        this->salary = s;
        this->secreatePassword = sp;
    }

    void printDetalis(){
        cout<<"The name of the employee is "<<this->name<<" And the salary of the employee is "<<this->salary<<endl<<"and the sec pass us"<<this->secreatePassword;
    }

      void accessPAss(){
        cout<<"The sec pass is"<<this->secreatePassword<<endl;
      }

    private:
      int secreatePassword;
};

int main(){
    // cout<<"Hello world"<<endl;
    // return 0;

    // dataTypes
    // int  b,c;
    // int a = 10;
    // cout<<a<<endl;

    // string adi = "adi";
    // cout<<adi;


    // CamelCase Notation ---------------------------------------->
    // int marksInMath = 10;
    // cout<<"The marks of the student in math is "<<marksInMath<<endl;

    // Taking Inputs ---------------------------------------->

    // int a,b;
    // cout<<"Enter the first number"<<endl;
    // cin>>a;

    // cout<<"Enter the second number"<<endl;
    // cin>>b;

    // cout<<"The sum is "<<a + b<<endl;
    // cout<<"The sub is "<<a - b<<endl;
    // cout<<"The div is "<<(float)a / b<<endl;
    // cout<<"The mul is "<<a * b<<endl;
    
    //  If else statements---------------------------------------->

    // int age;
    // string name;
    // cout<<"Enter your age"<<endl;
    // cin>>age;
//     cout<<"Enter your name bro"<<endl;
//     cin>>name;

//      if(age > 150 || age<4){
//                 cout<<"You cannot vote "<<name<<endl;

//     }
//      else if(age>=18){
//         cout<<"You can vote "<<name<<endl;
//     }

//     else{
//         cout<<"Sale age badha"<<endl;
//     }
   



// Switch case statement ---------------------------------------->
// int age;

// switch(age){
//     case 12:
//     cout<<"You are 12 years old"<<endl;
//     break;
//     case 18:
//     cout<<"You are 18 years old"<<endl;
//     break;

//     default:
//      cout<<"You are neither 12 or 18 years old"<<endl;
//      break;
// }


// Loops---------------------------------------->

// 1) while loop 

int index = 0;       // declaration
// while(index<10){
//     cout<<"WE are at index number "<<index<<endl;
//     index++;    // updatation
// }

// 2) Do while---------------------------------------->

// do{
//     cout<<"WE are at index number "<<index<<endl;
//     index++;

// }while(index>2);



// 3) for loop ---------------------------------------->
// for(int i = 0;i<10;i++){
//     cout<<"The value of i is "<<i<<endl;
// }


// functions ---------------------------------------->
// int a,b;
// cout<<"Enter the first number"<<endl;
// cin>>a;
// cout<<"Enter the second number"<<endl;
// cin>>b;
// cout<<"The sum of a and b is"<<add(a,b);

// Array---------------------------------------->

// int arr[] = {1,2,3};
// cout<<arr[2];

// int marks[6];

// for(int i = 0;i<6;i++){
//     cout<<"Enter the marks of "<<i<<"th student "<<endl;
//     cin>>marks[i];
// }

// for(int i = 0;i<6;i++){
//     cout<<"The marks of the "<<i<<"th student are "<<marks[i]<<endl;
// }


// 2D array---------------------------------------->
// int arr2d[2][3]={
//     {1,2,3},
//     {4,5,6}

// };

// cout<<arr2d[0][1];
// for(int i = 0;i<2;i++){
//     for(int j = 0;j<3;j++){
//         cout<<"The value at "<<i<<",and"<<j<<" is "<<arr2d[i][j]<<endl;;
//     }
// }


// Typecasting---------------------------------------->

// int a = 11;
// cout<<(float) a/2<<endl;

// int b = 8.89;
// cout<<(int)b;


// string ---------------------------------------->

// string name = "dr stange";
// cout<<"The name is "<<name<<endl;
// cout<<"The name length is "<<name.length()<<endl;
// cout<<"The substring is "<<name.substr(0,4)<<endl;

// Pointers---------------------------------------->

// int a = 4;
// int * ptr;
// ptr = &a;
// cout<<"The address of a is "<<ptr<<endl;
// cout<<"The value of a is "<<*ptr<<endl;


// classes ---------------------------------------->
Employee adi("Adi",200,1000);
// adi.name = "adi";
// adi.salary = 2000;
adi.printDetalis();
adi.accessPAss();






}