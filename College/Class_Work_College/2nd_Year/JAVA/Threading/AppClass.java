public class AppClass{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MyThread mt=new MyThread();
		mt.start();
		
		//System.out.println(Thread.currentThread().getName());
		for(int i=0;i<=50;i++) {
			System.out.println(Thread.currentThread().getName()+": "+i);
			try {
				Thread.sleep(200);
			} catch (InterruptedException e) {
				
				e.printStackTrace();
			}
		}
		}

}
