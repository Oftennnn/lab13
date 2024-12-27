#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];

   
}

void stat(const double A[],int N,double B[]){
    double sum,sum2,invmul,mean,stdev,geomean,harmonic = 0 ;
    double mul = 1 ;
    for(int i=0 ; i<N ; i++ ){
    
    sum += A[i] ;
    sum2 += pow(A[i],2) ;
    mul *= A[i] ;
    invmul += 1.0/A[i] ;
    mean = sum/N ;
    stdev = pow((sum2/N)-pow(mean,2),0.5);
    cout << mul << " " << geomean << endl;
    geomean = pow(mul,1.0/N) ;
    harmonic = N/invmul ;

    double max,min = A[0] ;
    if(A[i]>max){ max = A[i] ; }
    if(A[i<min]){ min = A[i] ; }


    

    B[0] = mean  ; 
    B[1] = stdev ;
    B[2] = geomean ;
    B[3] = harmonic ;
    B[4] = max ;
    B[5] = min ;
    }
   
    
  
}
