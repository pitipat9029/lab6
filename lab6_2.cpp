#include <iostream>
#include<cmath>
using namespace std;

double deg2rad(double x ){
    double d = x * M_PI / 180 ;
    return d ;
}

double rad2deg(double y){
    double r = y * 180 / M_PI ;
    return r ;
}

double findXComponent(double L1 , double L2 , double A1 , double A2 ){
    double L = L1*cos(A1) + L2*cos(A2) ;
    return L ;
}

double findYComponent(double L1 , double L2 , double A1 , double A2 ){
    double L = L1*sin(A1) + L2*sin(A2) ;
    return L ;
}

double pythagoras(double XC , double YC){
    double P = sqrt(pow(XC,2)+pow(YC,2));
    return P ;
} 

void showResult(double result_vec_length , double result_vec_direction ){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << result_vec_length << "\n";
    cout << "Direction of the resultant vector (deg) = " << result_vec_direction << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}  
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
