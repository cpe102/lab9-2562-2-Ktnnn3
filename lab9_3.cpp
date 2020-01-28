//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
int main(){
    ifstream source;
    string textline;
    double sum = 0,dum=0;
    double i=0;
    source.open("C:\\Users\\lab314-15\\Desktop\\lab9-2562-2-Ktnnn3\\score.txt");
    while (getline(source,textline)){
        sum = sum+atof(textline.c_str());
        dum = dum+pow(atof(textline.c_str()),2);
        i++;
    }
    cout<<"Number of data = "<<i<<endl;
    cout<<"Mean = "<<sum/i <<endl;
    cout<<"Standard deviation = "<<sqrt((1/i)*dum-pow((sum/i),2));
    source.close();
    return 0;

}