//Call by Reference
class Test
{
      int a,b;
	  Test(int i,int j)
	  {
		  a=i;
		  b=j;
	  }
	  void meth(Test O)   //passing an object( O ) as formal object parameter
	  {
			O.a*=2;
			O.b/=2;
	  }
	
}
public class CallByReference
{
	public static void main(String args[])
	{
		Test ob=new Test(15,20);  //ob is actual object
		System.out.println("Before callinng: "+ob.a+" "+ob.b);
		ob.meth(ob);
        System.out.println("After callinng: "+ob.a+" "+ob.b);
	}
}