//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream source;
    ofstream x;
    source.open("C:\\Users\\lab314-15\\Desktop\\lab9-2562-2-Ktnnn3\\cheerbook.txt");
    string textline;
    bool havetext;
    havetext = getline(source,textline);
    x.open("cheerbook_copy.txt");
    x << "-------------------- SOTUS ---------------------"<<endl;
    while(havetext){
         x << textline << endl;
         havetext = getline(source,textline);
    }
    x << "-------------------- SOTUS ---------------------"<<endl;
    return 0;
}