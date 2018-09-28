#include <fstream>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int ix,iy,npts;
  double sigma,mu,x,y,z,xmin,xmax,pi,ymin,ymax;
  char gauss_out_file[50];

  pi=3.14159265;

  cout << "This program will numerically calculate a Gaussian distribution" << endl; 
  cout << "with mean and standard deviation inputed by the user." << endl;
  cout << "Data is presented in the format x y with y being the value of" << endl;
  cout << "the Guassian function." << endl << endl;

  cout << "Please enter" << endl;

  cout << "Name of output file:" << endl;
  cin.getline ( gauss_out_file, 50 );

  cout << "mean:" << endl;
  cin >> mu;

  cout << "standard devaition:" << endl;
  cin >> sigma;

  cout << "minumum of x range:" << endl;
  cin >> xmin;
  cout << "maxumum of x range:" << endl;
  cin >> xmax;

  cout << "minumum of y range:" << endl;
  cin >> ymin;
  cout << "maxumum of y range:" << endl;
  cin >> ymax;

  cout << "number of points for data output:" << endl;
  cin >> npts;

  ofstream gauss_out ( gauss_out_file );

  cout << "Generating data" << endl;

  for (ix=0;ix<npts;ix++) {
    x=xmin+ix*(xmax-xmin)/(npts-1);
    for (iy=0;iy<npts;iy++) {
    	y=ymin+iy*(ymax-ymin)/(npts-1);
	z = exp(-((x-mu)*(x-mu)+(y-mu)*(y-mu))/2/sigma/sigma)/sigma/sqrt(2*pi);
    
    	gauss_out << x << " " << y << " " << z << endl;
    }
    gauss_out << " " << endl;
  }

  cout << "Done! Data written to file " << gauss_out_file << endl;
  gauss_out.close();

}