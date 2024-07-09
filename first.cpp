#include<iostream>
#include<fstream>
using namespace std;

class temp{
    string rollNum,name,fname,address,search;
    fstream file;
    public:
    void addStu();
    void viewStu();
    void searchStu();
}obj;

int main() {
    char choice;
    cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ";
    cout<<" 1- Add student record\n";
    cout<<" 2- Viw All Students Record \n";
    cout<<" 3- Search Student Record \n";
    cout<<"4- Exit\n";
    cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ";
    cin>>choice;

    switch(choice){
        case '1':
           obj.addStu();

        break;
        case '2':
           obj.viewStu();
        break;
        case '3':
           obj.searchStu();
        break;
        case '4':
           return 0;
        break;
        default:
            cout<<"Invalid Choice...!";

    }


}


void temp :: addStu(){

    cout<<"Enter Student Roll Number :: ";
    getline(cin,rollNum);
    cout<<"Enter Student Name :: ";
    getline(cin,name);
    cout<<"Enter Student Father Name :: ";
    getline(cin,fname);
    cout<<"Enter Student Address :: ";
    getline(cin,address);

    file.open("stuData.txt",ios :: out | ios :: app );
    file<<rollNum<<"*";
    file<<name<<"*";
    file<<fname<<"*";
    file<<address<<endl;
    file.close();
}

void temp :: viewStu(){
     
    file.open("stuData.txt",ios :: in);
    getline(file,rollNum,'*');
    getline(file,name,'*');
    getline(file,fname,'*');
    getline(file,address,'\n');
    while(!file.eof()){
        cout<<"\n";
        cout<<"Student Roll Number :: "<<rollNum;
        cout<<"Student Name :: "<<name;
        cout<<"Student Father name :: "<<fname;
        cout<<"Student Address :: "<<address<<endl;

        getline(file,rollNum,'*');
        getline(file,name,'*');
        getline(file,fname,'*');
        getline(file,address,'\n');

    }
    file.close();
}

void temp :: searchStu(){
    cout<<"Enter Student Roll Number :: ";
    getline(cin,rollNum);

    file.open("stuData.txt",ios :: in);
    getline(file,rollNum,'*');
    getline(file,name,'*');
    getline(file,fname,'*');
    getline(file,address,'\n');
    while(!file.eof()){
        if(rollNum == search){
            cout<<endl;
            cout<<"Student Roll Number :: "<<rollNum;
            cout<<"Student Name :: "<<name;
            cout<<"Student Father name :: "<<fname;
            cout<<"Student Address :: "<<address<<endl;

        }
        getline(file,rollNum,'*');
        getline(file,name,'*');
        getline(file,fname,'*');
        getline(file,address,'\n');
    }
    file.close();


}





















