package MBankingPackage;

public class MBanking {
	private String name, noRek, pinOne,pinTwo;
	private int saldo;
	
	public MBanking (String name, String noRek, String pinOne, String pinTwo, int saldo) {
		this.name = name;
		this.noRek = noRek; 
		this.pinOne = pinOne;
		this.pinTwo = pinTwo;
		this.saldo = saldo;
	}
	
	// getter
	public String getName () {
		return this.name;
	}
	
	public String getNoRek () {
		return this.noRek;
	}
	
	public String getPinOne () {
		return this.pinOne;
	}
	
	public String getPinTwo () {
		return this.pinTwo;
	}
	
	public int getSaldo () {
		return this.saldo;
	}
	
	// setter
	public void setName(String newName) {
		this.name = newName;
	}
	
	public void setNoRek(String newNoRek) {
		this.noRek = newNoRek;
	}
	
	public void setPinOne(String newPinOne) {
		this.pinOne = newPinOne;
	}
	
	public void setPinTwo(String newPinTwo) {
		this.pinTwo = newPinTwo;
	}
	
	public void setSaldo(int newSaldo) {
		this.saldo = newSaldo;
	}
	
	public String toString() {
		String d1 = "Name\t\t: " + getName() + "\n"
					+ "No. Rekening\t: " + getNoRek() + "\n"
					+ "pinOne\t\t: " + getPinOne() + "\n"
					+ "pinTwo\t\t: " + getPinTwo() + "\n";
		return d1;
	}
	
}
