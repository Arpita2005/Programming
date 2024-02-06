public class MyThread extends Thread{
	
	public MyThread() {
		Thread.currentThread().setName("Arpita Thread");
	}

	@Override
	public void run() {
		// TODO Auto-generated method stub
		//System.out.println(Thread.currentThread().getName());
		for(int i=0;i<=30;i++) {
			System.out.println(Thread.currentThread().getName()+": "+i);
		
			try {
				Thread.sleep(200);
			} catch (InterruptedException e) {
				
				e.printStackTrace();
			}
		}
	}
	
	

}
