   #include<iostream>
   using namespace std;
    
    class Square
    {
            private:
                    int side;
            public: 
               Square(int s)
               {  side=s; }
               
                int getArea()
                { return side*side;  }                                                                          
    };
    int main()
    {    
          int x;
          cout<<"Input the value of side:   ";
          cin>>x;
		  Square s1(x); 
          cout<<"Area of a square is:   "<<s1.getArea(); 
          return 0;
    }                              
