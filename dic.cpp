using namespace std;


int dic(int a, int b, int c){
 int x=0, x1=0, x2=0, D=0;
D=(b*b)-(4*a*c);
cout << "D = " << D << "\n \r";
   if (D>0){
     x1=((-b)+sqrt(D))/(2*a);
     x2=((-b)-sqrt(D))/(2*a);
     cout << "x1=" << x1 << " x2=" << x2;}
   else
     if (D==0){
      x=b/2*a;
      cout << "X=" << x;}
       else
      cout << "N/a!"; 
}

