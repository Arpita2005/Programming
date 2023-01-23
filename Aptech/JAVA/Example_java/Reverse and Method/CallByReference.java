//Call by Reference
class Test_func
{
      int a,b;
	  Test_func(int i,int j)
	  {
		  a=i;
		  b=j;
	  }
	  void meth(int O)   //passing an object( O ) as formal object parameter
	  {
			a*=2;
			b/=2;
	  }
	
}
public class CallByReference
{
	public static void main(String args[])
	{
		Test_func ob=new Test_func(15,20);  //ob is actual object
		System.out.println("Before callinng: "+ob.a+" "+ob.b);
		ob.meth(0);
        System.out.println("After callinng: "+ob.a+" "+ob.b);
	}
}