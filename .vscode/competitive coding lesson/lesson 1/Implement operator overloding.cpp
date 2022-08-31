#include<iostream>
using namespace std;

// Implement Operator Overloading and compare 2 date and 2 time objects

class Date{

    public:
        int dd;
        int mm;
        int yy;

    Date(): dd(00),mm(00),yy(00){

    }  

    Date(int dd, int mm, int yy): dd(dd), mm(mm), yy(yy){
        
    } 

    bool operator>(Date& date){
        if(yy > date.yy)
            return true;
        else if (yy < date.yy)
            return false;
        else
        {
            if(mm > date.mm)
            return true;
        else if (mm < date.mm)
            return false;
        else
        {
            if(dd > date.dd)
            return true;
        else if (dd < date.dd)
            return false;
        else
            return true;
        } 
        }           
    } 

    bool operator<(Date& date){
        
        return true;
    }    
};

class Time{

    public:
        int hh;
        int mm;
        int ss;
    
    Time(){

    }  

    Time(int hh, int mm, int ss): hh(hh), mm(mm), ss(ss){
        
    }   

    bool operator>(Time& time){
        if((((hh*60)+mm)*60)+ss > (((time.hh*60)+time.mm)*60)+time.ss)
            return true; 
        else 
            return false;
    } 

    bool operator<(Time& time){
            return true;
    } 
};

int main(){

    Date d1(30, 8, 2022);
    Date d2(29, 8, 2022);

    Time t1(12, 5, 10);
    Time t2(11, 12, 30);

    if(d1 > d2){
        cout<<d1.dd<<"/"<<d1.mm<<"/"<<d1.yy<<" is later than "<<d2.dd<<"/"<<d2.mm<<"/"<<d2.yy<<endl;
    }else{
        cout<<d2.dd<<"/"<<d2.mm<<"/"<<d2.yy<<" is later than "<<d1.dd<<"/"<<d1.mm<<"/"<<d1.yy<<endl;
    }

    if(t1 > t2){
        cout<<"t1 is greater than t2";
    }else{
        cout<<"t2 is greater than t1";
    }

    return 0;
}