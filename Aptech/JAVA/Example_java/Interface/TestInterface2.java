interface Bank
{  
	float rateOfInterest();  
}  
class SBI implements Bank
{  
	public float rateOfInterest(){return 9.15f;}  
}  
class PNB implements Bank
{  
	public float rateOfInterest(){return 9.7f;}  
}  
class TestInterface2
{  
	public static void main(String[] args)
	{  
		Bank b=new SBI();  
		System.out.println("ROI: "+b.rateOfInterest()); 
		Bank b1=new PNB();  
		System.out.println("ROI: "+b1.rateOfInterest()); 
        System.out.println("ROI: "+(b1.rateOfInterest()+b.rateOfInterest())); 		
    }
}  